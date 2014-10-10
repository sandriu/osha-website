<?php

/**
 * Retrieve the list of default moderators stored in entity_collection.
 *
 * @param string $type
 *   Type of moderators (see moderation_item.type)
 *
 * @return mixed
 *   Array of user accounts, ordered by weight in the collection.
 */
function osha_workflow_get_moderators($type) {
  $entity_collection = entity_collection_load($type);
  $contexts = _entity_collection_get_contexts($entity_collection);
  $tree = EntityCollectionStorage::getBundleStorage($entity_collection->bundle)->retrieve($entity_collection, $contexts);
  $rows = $tree->getFlat();
  $uids = array();
  foreach ($rows as $row) {
    $uids[] = $row->entity_id;
  }
  return user_load_multiple($uids);
}

/**
 * This method creates the user roles required by the workflow.
 */
function osha_workflow_create_roles() {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.permissions');
  $roles = array(
    'Editor' => osha_workflow_editor_permissions(),
    'Review Manager' => array(),
    'Project Manager' => array(),
    'Approver' => array(),
    'Content Administrator' => array(),
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
 * Assign users to the node workflow.
 *
 * Users are assigned from the default entity_collection or if already assigned,
 * their status is reset.
 *
 * @param object $node
 *   Node object
 * @param string $moderation_type
 *   Type of moderation
 */
function osha_workflow_assign_users($node, $moderation_type) {
  $moderators = osha_workflow_get_node_moderators($node, $moderation_type, TRUE);
  $weight = 0;
  $transaction = db_transaction();
  try {
    foreach ($moderators as $user) {
      $data = array(
        'nid' => $node->nid,
        'vid' => $node->vid,
        'moderation_type' => $moderation_type,
        'uid' => $user->uid,
        'approved' => NULL,
        'weight' => $weight,
      );
      db_merge('moderation_item')
        ->key(array(
          'nid' => $node->nid,
          'vid' => $node->vid,
          'moderation_type' => $moderation_type,
          'uid' => $user->uid,
        ))
        ->fields($data)
        ->execute();
      $weight++;
    }
  }
  catch (Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
}

/**
 * Retrieve the list of moderators for a node.
 *
 * @param object $node
 *   Node object to get the data
 * @param string $moderation_type
 *   Type of moderation (i.e. approve)
 * @param bool $default
 *   If not set yet, return the default values stored in the entity collection.
 *
 * @return array|mixed
 *   Array of users.
 */
function osha_workflow_get_node_moderators($node, $moderation_type, $default = TRUE) {
  $ret = array();
  $query = new EntityFieldQuery();
  $moderators = $query->entityCondition('entity_type', 'moderation_item')
    ->propertyCondition('nid', $node->nid)
    ->propertyCondition('vid', $node->vid)
    ->propertyCondition('moderation_type', $moderation_type)
    ->propertyOrderBy('weight')
    ->execute();
  if (!empty($moderators['moderation_item'])) {
    $ids = array_keys($moderators['moderation_item']);
    $rows = osha_workflow_moderation_item_load_multiple($ids);
    $uids = array();
    foreach ($rows as $row) {
      $uids[] = $row->uid;
    }
    $users = user_load_multiple($uids);
    foreach ($rows as $row) {
      $user = &$users[$row->uid];
      $user->moderation = array($moderation_type => $row);
    }
    return $users;
  }
  elseif ($default) {
    $ret = osha_workflow_get_moderators('reviewers');
  }
  return $ret;
}

/**
 * Assign the list of moderators to a node.
 *
 * @param object $node
 *   Node to assign
 * @param array $moderators
 *   Associative array of user accounts. Keys are weights, values are uids.
 * @param $moderation_type
 *   Type of moderation (approve, review).
 */
function osha_workflow_set_node_moderators($node, $moderators, $moderation_type) {
  $transaction = db_transaction();
  try {
    // Delete old records for this node.
    $and = db_and()
      ->condition('nid', $node->nid)
      ->condition('vid', $node->vid)
      ->condition('moderation_type', $moderation_type);
    db_delete('moderation_item')->condition($and)->execute();

    $query = db_insert('moderation_item')
      ->fields(array('nid', 'vid', 'moderation_type', 'uid', 'next', 'weight'));
    $i = 0;
    foreach ($moderators as $weight => $uid) {
      $record = array(
        'nid' => $node->nid,
        'vid' => $node->vid,
        'moderation_type' => $moderation_type,
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
 * Find the next moderator in the line for a node/revision.
 *
 * @param object $node
 *   Node to retrieve info.
 * @param string $moderation_type
 *   Type of moderation.
 *
 * @return mixed|null
 *   User account
 */
function osha_workflow_get_next_moderator($node, $moderation_type) {
  $ret = NULL;
  $query = new EntityFieldQuery();
  $moderators = $query->entityCondition('entity_type', 'moderation_item')
    ->propertyCondition('nid', $node->nid)
    ->propertyCondition('vid', $node->vid)
    ->propertyCondition('next', 1)
    ->propertyCondition('moderation_type', $moderation_type)
    ->range(0, 1)
    ->execute();
  if (!empty($moderators['moderation_item'])) {
    $rows = osha_workflow_moderation_item_load_multiple(array_keys($moderators['moderation_item']));
    $task = current($rows);
    $ret = user_load($task->uid);
  }
  return $ret;
}

/**
 * Record the user's vote and move the record to the next in queue.
 *
 * @param object $node
 *   Node object
 * @param string $moderation_type
 *   Type of moderation
 * @param integer $vote
 *   User's vote (1 - Accept, 0 - Reject)
 * @param string $message
 *   User's message
 * @param object $voter
 *   User who vote, if NULL assuming current user.
 *
 * @return bool
 *   Returns TRUE if this was the last user in the moderation process.
 */
function osha_workflow_moderate($node, $moderation_type, $vote, $message = NULL, $voter = NULL) {
  if (empty($voter)) {
    global $user;
    $voter = $user;
  }
  $transaction = db_transaction();
  try {
    $query = new EntityFieldQuery();
    $miids = $query->entityCondition('entity_type', 'moderation_item')
      ->propertyCondition('nid', $node->nid)
      ->propertyCondition('vid', $node->vid)
      ->propertyCondition('moderation_type', $moderation_type)
      ->propertyOrderBy('weight')
      ->execute();
    if (isset($miids['moderation_item'])) {
      $rows = osha_workflow_moderation_item_load_multiple(array_keys($miids['moderation_item']));
      $last = end($rows);
      reset($rows);
      $mark_next = FALSE;
      foreach ($rows as $row) {
        if ($row->uid == $voter->uid && $row->next == 1) {
          $mark_next = TRUE;
          $row->next = 0;
          $row->approved = intval($vote);
          $row->mesage = $message;
          entity_save('moderation_item', $row);
          if ($last->uid == $row->uid) {
            return TRUE;
          }
          continue;
        }
        if ($mark_next) {
          $row->next = 1;
          entity_save('moderation_item', $row);
          if ($last->uid == $row->uid) {
            return TRUE;
          }
          break;
        }
      }
    }
  }
  catch(Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
  return FALSE;
}
