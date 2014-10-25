<?php
/**
 * @file
 * osha.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function osha_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer scanner settings'.
  $permissions['administer scanner settings'] = array(
    'name' => 'administer scanner settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scanner',
  );

  // Exported permission: 'perform search and replace'.
  $permissions['perform search and replace'] = array(
    'name' => 'perform search and replace',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scanner',
  );

  return $permissions;
}
