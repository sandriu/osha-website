<?php

/**
 * Retrieve the list of default moderators stored in entity_collection.
 *
 * @return mixed
 *   Array of user accounts, ordered by weight in the collection.
 */
function osha_workflow_get_default_approvers() {
  $entity_collection = entity_collection_load('approvers');
  $contexts = _entity_collection_get_contexts($entity_collection);
  $tree = EntityCollectionStorage::getBundleStorage($entity_collection->bundle)->retrieve($entity_collection, $contexts);
  $rows = $tree->getFlat();
  $uids = array();
  foreach ($rows as $row) {
    $uids[] = $row->entity_id;
  }
  $users = user_load_multiple($uids);
  foreach ($users as &$user) {
    $user->osha_workflow_node_approval_saved = FALSE;
  }
  return $users;
}

function osha_workflow_get_default_project_manager($section) {
  return user_load(5);
  //@todo: Add real code here - one project manager per section. similar to admin/config/workbench/access.
}

/**
 * Assign project manager to a node.
 *
 * @param object $nid
 *   Node ID
 * @param int $uid
 *   User account
 */
function osha_workflow_set_project_manager($nid, $uid) {
  try {
    db_merge('osha_workflow_node_project_managers')
      ->key(array(
        'nid' => $nid,
      ))
      ->fields(array(
        'nid' => $nid,
        'uid' => $uid,
      ))->execute();
  }
  catch(Exception $e) {
    drupal_set_message($e->getMessage(), 'error');
  }
}

/**
 * Get the current project manager of a node.
 * @param int $nid
 *   Node ID
 *
 * @return object
 *   User object
 */
function osha_workflow_get_project_manager($nid) {
  $result = db_query('SELECT a.* FROM {osha_workflow_node_project_managers} a WHERE a.nid = :nid', array(':nid' => $nid));
  if ($row = $result->fetchAssoc()) {
    $user = user_load($row['uid']);
    $user->osha_workflow['project_manager'][$nid] = (object) $row;
    return $user;
  }
  return NULL;
}

/**
 * This method creates the user roles required by the workflow.
 */
function osha_workflow_create_roles() {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.permissions');
  $roles = array(
    'Editor' => osha_workflow_permissions_role_editor(),
    'Review Manager' => osha_workflow_permissions_role_review_manager(),
    'Project Manager' => osha_workflow_permissions_role_project_manager(),
    'Approver' => osha_workflow_permissions_role_approver(),
  );

  foreach ($roles as $role_name => $permissions) {
    if ($role = user_role_load_by_name($role_name)) {
      // Nothing to do, really ...
    }
    else {
      $role = new stdClass();
      $role->name = $role_name;
      user_role_save($role);
    }
    user_role_grant_permissions($role->rid, $permissions);
    // Grant workbench access for this role.
    workbench_access_role_section_save($role->rid, 'main-menu', 'menu');
  }
}

/**
 * Retrieve the list of moderators for a node.
 *
 * @param int $nid
 *   Node ID
 * @param bool $default
 *   If not set yet, return the default values stored in the entity collection.
 *
 * @return array|mixed
 *   Array of users.
 */
function osha_workflow_get_node_approvers($nid, $default = TRUE) {
  $ret = array();
  $query = new EntityFieldQuery();
  $moderators = $query->entityCondition('entity_type', 'node_approval')
    ->propertyCondition('nid', $nid)
    ->propertyOrderBy('weight')
    ->execute();
  if (!empty($moderators['node_approval'])) {
    $ids = array_keys($moderators['node_approval']);
    $rows = osha_workflow_node_approval_load_multiple($ids);
    $uids = array();
    $rows_by_uid = array();
    foreach ($rows as $row) {
      $rows_by_uid[$row->uid] = $row;
      $uids[] = $row->uid;
    }
    $users = user_load_multiple($uids);
    foreach ($users as &$user) {
      $user->osha_workflow_node_approval = $rows_by_uid[$user->uid];
      $user->osha_workflow_node_approval_saved = TRUE;
    }
    reset($users);
    return $users;
  }
  elseif ($default) {
    $ret = osha_workflow_get_default_approvers();
  }
  return $ret;
}

/**
 * Assign the list of moderators to a node.
 *
 * @param object $nid
 *   Node ID
 * @param array $moderators
 *   Associative array of user accounts. Keys are weights, values are uids.
 */
function osha_workflow_set_node_approvers($nid, $moderators) {
  $transaction = db_transaction();
  try {
    // Delete old records for this node.
    db_delete('osha_workflow_node_approval')
      ->condition('nid', $nid)
      ->execute();
    $query = db_insert('osha_workflow_node_approval')
      ->fields(array('nid', 'uid', 'next', 'weight'));
    $i = 0;
    foreach ($moderators as $weight => $uid) {
      $record = array(
        'nid' => $nid,
        'uid' => $uid,
        'next' => $i == 0 ? 1 : 0,
        'weight' => $weight,
      );
      $query->values($record);
      $i++;
    }
    $query->execute();
  }
  catch(Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
}

/**
 * Reset voting status and next in line approval queue.
 *
 * @param int $nid
 *   Affected node ID
 */
function osha_workflow_reset_node_approvers($nid) {
  $transaction = db_transaction();
  try {
    $rows = osha_workflow_get_node_approvers($nid, FALSE);
    $first = NULL;
    if (!empty($rows)) {
      $first = current($rows);
    }
    // Reset all of them to defaults.
    db_update('osha_workflow_node_approval')
      ->fields(array(
        'approved' => NULL,
        'next' => 0,
      ))
      ->condition('nid', $nid)
      ->execute();

    if ($first) {
      // Assign 'next' to first one in line.
      db_update('osha_workflow_node_approval')
        ->fields(array(
          'next' => 1,
        ))
        ->condition('nid', $nid)
        ->condition('uid', $first->uid)
        ->execute();
    }
  }
  catch(Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
}

/**
 * Find the next moderator in the line for a node/revision.
 *
 * @param object $node
 *   Node to retrieve info.
 *
 * @return mixed|null
 *   User account
 */
function osha_workflow_get_next_approver($nid) {
  $ret = NULL;
  $query = new EntityFieldQuery();
  $moderators = $query->entityCondition('entity_type', 'node_approval')
    ->propertyCondition('nid', $nid)
    ->propertyCondition('next', 1)
    ->range(0, 1)
    ->execute();
  if (!empty($moderators['node_approval'])) {
    $rows = osha_workflow_node_approval_load_multiple(array_keys($moderators['node_approval']));
    $task = current($rows);
    $ret = user_load($task->uid);
  }
  return $ret;
}

/**
 * Check if the user is the last approver.
 *
 * @param object $node
 *   Node to check
 * @param object $user
 *   User to check. If NULL, assuming current user.
 *
 * @return bool
 *   TRUE if it's the last in the queue.
 */
function osha_workflow_is_last_approver($node, $user = NULL) {
  $ret = FALSE;
  if (empty($user)) {
    global $user;
  }
  $all_users = osha_workflow_get_node_approvers($node->nid, FALSE);
  if (!empty($all_users)) {
    $last = array_pop($all_users);
    $ret = $user->uid == $last->uid;
  }
  return $ret;
}

/**
 * Verifies if user has approved the workflow.
 * @param $nid
 * @param $uid
 * @return bool
 */
function osha_workflow_has_approved($nid, $uid) {
  $query = new EntityFieldQuery();
  $rows = $query->entityCondition('entity_type', 'node_approval')
    ->propertyCondition('nid', $nid)
    ->propertyCondition('uid', $uid)
    ->propertyCondition('approved', array(OSHA_WORKFLOW_STATE_APPROVED, OSHA_WORKFLOW_STATE_REJECTED))
    ->execute();
  return !empty($rows['node_approval']);
}


/**
 * Record the user's vote and move the record to the next in queue.
 *
 * @param object $node
 *   Node object
 * @param int $vote
 *   User's vote (accepted, rejected)
 * @param string $message
 *   User's message
 * @param object $voter
 *   User who vote, if NULL assuming current user.
 */
function osha_workflow_approve($node, $vote, $message = NULL, $voter = NULL) {
  if (empty($voter)) {
    global $user;
    $voter = $user;
  }
  $transaction = db_transaction();
  try {
    $query = new EntityFieldQuery();
    $miids = $query->entityCondition('entity_type', 'node_approval')
      ->propertyCondition('nid', $node->nid)
      ->propertyOrderBy('weight')
      ->execute();
    if (isset($miids['node_approval'])) {
      $rows = osha_workflow_node_approval_load_multiple(array_keys($miids['node_approval']));
      reset($rows);
      $mark_next = FALSE;
      foreach ($rows as $row) {
        if ($row->uid == $voter->uid && $row->next == 1) {
          $mark_next = TRUE;
          $row->next = 0;
          $row->approved = $vote;
          $row->mesage = $message;
          entity_save('node_approval', $row);
          continue;
        }
        if ($mark_next) {
          $row->next = 1;
          entity_save('node_approval', $row);
          break;
        }
      }
    }
  }
  catch(Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
}

/**
 * Class OshaWorkflowPermissions handles permission check for the workflow.
 */
class OshaWorkflowPermissions {

  /**
   * Implemented rules.
   *
   * REV_RM_US_02
   * REV_RM_US_03
   * REV_RM_US_04
   * REV_RM_US_05
   * REV_RM_US_07
   *
   * @return bool
   *   TRUE if the user has permission.
   */
  public static function userCanAccessReviewScreen($node, $user = NULL) {
    if (!$user) {
      global $user;
    }
    if (isset($node->workbench_moderation)) {
      // $current = $node->workbench_moderation['current'];
      // $state = $current->state;
      return
        self::userHasRole(OSHA_WORKFLOW_ROLE_REVIEW_MANAGER, $user)
        || self::userHasRole(OSHA_WORKFLOW_ROLE_ADMINISTRATOR, $user);
    }
    return FALSE;
  }


  /**
   * User has access to the approval screen (tab on node).
   *
   * @param object $node
   *   Node to check
   * @param null $user
   *   User to check. If NULL assuming current user
   *
   * @return bool
   *   TRUE if user has access.
   */
  public static function userCanAccessApprovalScreen($node, $user = NULL) {
    if (!$user) {
      global $user;
    }
    if (isset($node->workbench_moderation)) {
      // $current = $node->workbench_moderation['current'];
      // $state = $current->state;

      if (self::userHasRole(OSHA_WORKFLOW_ROLE_ADMINISTRATOR, $user)
          || self::userHasRole(OSHA_WORKFLOW_ROLE_REVIEW_MANAGER, $user)) {
        return TRUE;
      }
    }
    return FALSE;
  }

  /**
   * User can manage the approvers.
   *
   * @param object $node
   *   Node to check
   * @param null $user
   *   User to check. If NULL assuming current user
   *
   * @return bool
   *   TRUE if user has access.
   */
  public static function userCanEditApprovers($node, $user = NULL) {
    if (!$user) {
      global $user;
    }
    if (isset($node->workbench_moderation)) {
      $current = $node->workbench_moderation['current'];
      $state = $current->state;

      if (self::userHasRole(OSHA_WORKFLOW_ROLE_ADMINISTRATOR, $user)) {
        return TRUE;
      }
      return
        self::userHasRole(OSHA_WORKFLOW_ROLE_REVIEW_MANAGER, $user)
        &&
        (
          $state == OSHA_WORKFLOW_STATE_TO_BE_REVIEWED
          || $state == OSHA_WORKFLOW_STATE_FINAL_DRAFT
        );
    }
    return FALSE;
  }


  /**
   * Check user has a specified role.
   *
   * @param string $role
   *   Existing user role
   *
   * @return bool
   *   TRUE if user has role
   */
  public static function userHasRole($role, $user) {
    return in_array($role, $user->roles);
  }
}


class OshaWorkflowNotifications {

  /**
   * Notify Review Manager the content was set to final draft.
   *
   * REV_EE_US_03
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyOnChangeFromDraftToFinalDraft($node) {
    drupal_set_message("(REV_EE_US_03): Notify corresponding 'Review Manager' that node/{$node->nid} is now in final draft");
  }

  /**
   * Notify Editor the content was set to Draft.
   *
   * REV_EE_US_05
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyOnChangeToDraft($node) {
    drupal_set_message("(REV_EE_US_05): Notify Editors the node/{$node->nid} is back in draft");
  }

  /**
   * Notify Editor the content was set to Draft.
   *
   * REV_EE_US_05
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyOnChangeFromDraftOrFinalDraftToBeReviewed($node) {
    drupal_set_message("Notify the Project Manager the node/{$node->nid} is needs to be reviewed");
  }

  /**
   * Send notification to the next approver.
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyNextApproverToTakeAction($node) {
    $next = osha_workflow_get_next_approver($node->nid);
    drupal_set_message("(REV_EE_US_05): Notify next approver <b>{$next->name}</b>, the <b>node/{$node->nid}</b> is was reviewed and is his turn");
  }

  /**
   * Send notification to the next approver.
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyOnNodeApproved($node) {
    drupal_set_message("Notify 'Review Manager' and the PM about node/{$node->nid} being approved");
  }

  /**
   * Send notification to the next approver.
   *
   * @param object $node
   *   Affected node
   */
  public static function notifyOnNodeRejected($node) {
    drupal_set_message("Notify 'Review Manager' and the PM about node/{$node->nid} being rejected");
  }
}
