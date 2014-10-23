<?php

/**
 * Define the permissions for Translation Manager role.
 *
 * @return array
 *   Array of permissions
 */
function osha_tmgmt_workflow_permissions_role_translation_manager() {
  // translate content
  // translate any entity
  // translate node entities
  // translate taxonomy_term entities
  // accept translation jobs

  // Local Translator??
  return array(
    'create translation jobs',
    'submit translation jobs',

    'access user profiles',
  );
}

/**
 * Define the permissions for Translation Liaison role.
 *
 * @return array
 *   Array of permissions
 */
function osha_tmgmt_workflow_permissions_role_translation_liaison() {
  return array(

  );
}

/**
 * Define the permissions for Translation Liaison role.
 *
 * @return array
 *   Array of permissions
 */
function osha_tmgmt_workflow_permissions_role_layout_validator() {
  return array(
    'preview layout validation',
  );
}

/**
 * Define the permissions for Content Validator role.
 *
 * @return array
 *   Array of permissions
 */
function osha_tmgmt_workflow_permissions_role_content_validator() {
  return array(
  );
}
