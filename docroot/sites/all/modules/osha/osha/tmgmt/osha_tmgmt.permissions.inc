<?php

function osha_tmgmt_workflow_permissions_common() {
  return array(
    'access dashboard',
    'view the administration theme',
    'access toolbar',
    'view translation content validators',

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

    'access user profiles',
    'edit translation content validators',
    'set job item to require content validation state',
    'set job item to ready to publish state',
    'abort job item',
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
      'view translation job item',
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
  return array_merge(
    array(
      'abort job item',
      'view translation job',
      'preview layout validation',
      'set job item to translated state',
    ),
    osha_tmgmt_workflow_permissions_common()
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
    'abort job item',
  );
}
