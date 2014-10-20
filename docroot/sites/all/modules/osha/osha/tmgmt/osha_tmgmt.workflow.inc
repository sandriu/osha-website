<?php

function osha_tmgmt_translation_validation_options(){
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
    $users[] = (object) $user->content;
  }
  return $users;
}

/**
 * Submit callback for Add Translation Validators Group.
 */
function osha_tmgmt_translation_validators_submit($form, &$form_state) {
  $values = &$form_state['values'];
  if (!empty($form_state['tmgmt_job'])) {
    osha_tmgmt_translation_validators_add($form_state['tmgmt_job'],
      $values['translation_validators']['translation_group']);
  }
}

/**
 * Get translation validator group for a translation job.
 */
function osha_tmgmt_get_job_translation_validators_group($tjid) {
  $group = drupal_static(__FUNCTION__, NULL);
  if (empty($group)) {
    $eid = db_select('osha_tmgmt_job_trans_validators', 'i')
      ->fields('i', array('eid'))
      ->condition('tjid', $tjid)
      ->distinct('i.eid')
      ->execute()
      ->fetchAllAssoc('eid');
    if (!empty($eid)) {
      $eid = current(array_keys($eid));
      return entity_collection_load($eid);
    }
    else {
      return NULL;
    }
  }
  return $group;
}

/**
 * Get Translation Reviews of the Translation Validators.
 */
function osha_tmgmt_get_translation_reviews($tjid) {
  $reviews = drupal_static(__FUNCTION__, NULL);
  if (empty($reviews)) {
    $reviews = db_select('osha_tmgmt_job_trans_validators', 'i')
      ->fields('i')
      ->condition('tjid', $tjid)
      ->execute()
      ->fetchAllAssoc('language');
  }
  return $reviews;
}

/**
 * Add Translation Validators to a job.
 */
function osha_tmgmt_translation_validators_add(TMGMTJob $job, $tg_eid) {
  db_delete('osha_tmgmt_job_trans_validators')
    ->condition('tjid', $job->tjid)
    ->condition('eid', $tg_eid)
    ->execute();

  $job_items = $job->getItems();
  $entity_group = entity_collection_load($tg_eid);
  $users = osha_tmgmt_get_users_from_collection($tg_eid);
  $users = osha_workflow_users_group_by_lang_skills($users, $job->source_language);
  foreach ($job_items as $job_item) {
    if ($job_item->item_type == 'node') {
      $uid = 1;
      $approved = 'approved';
      if (!empty($users[$job_item->target_language])) {
        $uid = current($users[$job_item->target_language])->uid;
        $approved = NULL;
      }
      $job_item_validator = array(
        'nid' => $job_item->item_id,
        'uid' => $uid,
        'eid' => $tg_eid,
        'tjid' => $job_item->tjid,
        'tjiid' => $job_item->tjiid,
        'approved' => $approved,
        'language' => $job_item->target_language,
      );
      db_insert('osha_tmgmt_job_trans_validators')
        ->fields($job_item_validator)
        ->execute();
    }
  }
  drupal_set_message(t('@name group of translation validators has been assigned to this node.',
    array('@name' => $entity_group->name)));
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
