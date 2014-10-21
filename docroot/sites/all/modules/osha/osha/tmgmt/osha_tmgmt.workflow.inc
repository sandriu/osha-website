<?php

/**
 * This method creates the user roles required by the workflow.
 */
function osha_tmgmt_workflow_create_roles() {
  // module_load_include('inc', 'osha_workflow', 'osha_workflow.permissions');

  // translate content
  // translate any entity
  // translate node entities
  // translate taxonomy_term entities
  // accept translation jobs

  // Local Translator??

  $roles = array(
    'Translation Manager' => array(
      'create translation jobs',
      'submit translation jobs',
    ),
    'Translation Liaison' => array(),
    'Layout Validator' => array(
      'preview layout validation',
    ),
    'Content Validator' => array(),
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
 * Hook menu that allows to see layout validation of a node from a job item.
 *
 * @param object $node
 *   Node to render
 * @param object $job_item
 *   Associated job item
 *
 * @return string
 *   Renderable array
 */
function osha_tmgmt_layout_validation_node_preview($node, $job_item) {
  $target_language = $job_item->target_language;
  tmgmt_field_populate_entity($node->type, $node, $target_language, $job_item->getData());
  $renderable_node = node_view($node, 'full', $target_language);
  return drupal_render($renderable_node);
}

function osha_tmgmt_translation_validation_options() {
  return array(
    'approved' => 'Approved',
    'rejected' => 'Rejected',
  );
}

/**
 * Get Groups of Translation Validators.
 */
function osha_tmgmt_get_translators_groups() {
  $entities = entity_collection_load_all();
  $return = array();
  foreach ($entities as $entity) {
    if ($entity->bundle == OSHA_TMGMT_TRANS_VALID_GROUP) {
      $return[] = $entity;
    }
  }
  return $return;
}

/**
 * Returns options array for select forms.
 */
function osha_tmgmt_get_translators_groups_as_options() {
  $translators_groups = osha_tmgmt_get_translators_groups();
  $options = array();
  foreach ($translators_groups as $group) {
    $options[$group->eid] = $group->name;
  }
  return $options;
}

/**
 * Get users of a Collection Translation Validators.
 */
function osha_tmgmt_get_users_from_collection($tg_eid) {
  $entity_group = entity_collection_load($tg_eid);
  $users_tree_node = entity_collection_load_content(OSHA_TMGMT_TRANS_VALID_GROUP, $entity_group)->list;
  $users = array();
  foreach ($users_tree_node as $user) {
    $users[$user->content->uid] = $user->content;
  }
  return $users;
}

/**
 * Submit callback for Add Translation Validators Group.
 */
function osha_tmgmt_translation_validators_submit($form, &$form_state) {
  if (!empty($form_state['values']['translation_validators']['translation_group'])) {
    foreach ($form_state['tmgmt_job_items'] as $job_item) {
      $group_id = $form_state['values']['translation_validators']['translation_group'];
      $users = osha_tmgmt_get_users_from_collection($group_id);
      $users = osha_workflow_users_group_by_lang_skills($users, $job_item->source_language);
      if (!empty($users[$job_item->target_language])) {
        $uid = current($users[$job_item->target_language])->uid;
        $job_item->uid = $uid;
        $job_item->approved = NULL;
      }
      else {
        $job_item->approved = OSHA_TMGMT_TRANS_VALID_APPROVED;
      }
      $job_item->eid = $group_id;
      $job_item->save();
    }
  }
}

/**
 * Get translation validator group.
 */
function osha_tmgmt_get_job_translation_validators_group($eid) {
  return entity_collection_load($eid);
}

/**
 * Group an array of users by their language skills.
 *
 * return array
 *   Indexed by target language
 */
function osha_workflow_users_group_by_lang_skills($users, $from_lang = 'en') {
  $return = array();
  if (!empty($users)) {
    foreach ($users as $user) {
      if (!empty($user->tmgmt_translation_skills)) {
        foreach ($user->tmgmt_translation_skills[LANGUAGE_NONE] as $skill) {
          if ($skill['language_from'] == $from_lang) {
            $return[$skill['language_to']][] = $user;
          }
        }
      }
    }
  }
  return $return;
}
