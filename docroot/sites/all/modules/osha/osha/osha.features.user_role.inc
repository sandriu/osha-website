<?php
/**
 * @file
 * osha.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function osha_user_default_roles() {
  $roles = array();

  // Exported role: Translation Validator.
  $roles['Translation Validator'] = array(
    'name' => 'Translation Validator',
    'weight' => 7,
  );

  return $roles;
}
