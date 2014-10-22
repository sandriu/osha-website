<?php

function osha_tmgmt_workflow_permissions_common() {
  return array(
    'access dashboard',
    'view the administration theme',
    'access toolbar',

    //@todo: remove
    'access devel information',
  );
}

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
  );
}

/**
 * Define the permissions for Translation Liaison role.
 *
 * @return array
 *   Array of permissions
 */
function osha_tmgmt_workflow_permissions_role_translation_liaison() {
  return array_merge(
    array(
      'view translation job',
    ),
    osha_tmgmt_workflow_permissions_common()
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
