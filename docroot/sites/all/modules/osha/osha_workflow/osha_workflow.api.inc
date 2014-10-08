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
    'Final Approver' => array(),
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
    return user_load_multiple($uids);
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
      ->fields(array('nid', 'vid', 'moderation_type', 'uid', 'weight'));
    foreach ($moderators as $weight => $uid) {
      $record = array(
        'nid' => $node->nid,
        'vid' => $node->vid,
        'moderation_type' => $moderation_type,
        'uid' => $uid,
        'weight' => $weight,
      );
      $query->values($record);
    }
    $query->execute();
  }
  catch(Exception $e) {
    $transaction->rollback();
    drupal_set_message($e->getMessage(), 'error');
  }
}
