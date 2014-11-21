<?php
/**
 * @file
 * osha_events.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function osha_events_user_default_roles() {
  $roles = array();

  // Exported role: Events Coordinator.
  $roles['Events Coordinator'] = array(
    'name' => 'Events Coordinator',
    'weight' => 11,
  );

  return $roles;
}
