<?php
/**
 * @file
 * osha_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function osha_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear import_events feeds'.
  $permissions['clear import_events feeds'] = array(
    'name' => 'clear import_events feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create events content'.
  $permissions['create events content'] = array(
    'name' => 'create events content',
    'roles' => array(
      'Editor' => 'Editor',
      'Events Coordinator' => 'Events Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any events content'.
  $permissions['delete any events content'] = array(
    'name' => 'delete any events content',
    'roles' => array(
      'Editor' => 'Editor',
      'Events Coordinator' => 'Events Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own events content'.
  $permissions['delete own events content'] = array(
    'name' => 'delete own events content',
    'roles' => array(
      'Editor' => 'Editor',
      'Events Coordinator' => 'Events Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any events content'.
  $permissions['edit any events content'] = array(
    'name' => 'edit any events content',
    'roles' => array(
      'Editor' => 'Editor',
      'Events Coordinator' => 'Events Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own events content'.
  $permissions['edit own events content'] = array(
    'name' => 'edit own events content',
    'roles' => array(
      'Editor' => 'Editor',
      'Events Coordinator' => 'Events Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import import_events feeds'.
  $permissions['import import_events feeds'] = array(
    'name' => 'import import_events feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper import_events'.
  $permissions['tamper import_events'] = array(
    'name' => 'tamper import_events',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock import_events feeds'.
  $permissions['unlock import_events feeds'] = array(
    'name' => 'unlock import_events feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
