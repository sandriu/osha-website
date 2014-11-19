<?php

/* Add new stuff for deployment of sprint-5 branch here. To avoid conflicts, add them after your name 
 * Also include the ticket number, see example below
 */

osha_add_menu_position_rules();
delete_extra_fields();

variable_set('chosen_minimum_multiple', '32');
variable_set('chosen_minimum_single', '32');
variable_set('chosen_minimum_width', '300');

/**
 * Add menu position rules.
 */
function osha_add_menu_position_rules() {
  if (module_exists('osha') && module_load_include('inc', 'osha', 'osha.utils')) {
    // Menu position rule for Press Release content type.
    $parent_menu = '------ Press room';
    $condition = array('content_type' => array('press_release' => 'press_release'));
    osha_add_menu_position_rule('Press room Menu Rule', $parent_menu, $condition);
    
    // Menu position rule for See all Press Releases Menu Rule.
    $condition = array('pages' => 'press-releases');
    osha_add_menu_position_rule('See all Press Releases Menu Rule', $parent_menu, $condition);

    // Menu position rule for Publication content type
    $condition = array('content_type' => array('publication' => 'publication'));
    osha_add_menu_position_rule('Publications Menu Rule', '------ Publications', $condition);

    // Menu position rule for Seminar content type
    $condition = array('content_type' => array('seminar' => 'seminar'));
    osha_add_menu_position_rule('Seminar Menu Rule', '------ Our seminars', $condition);

    // Menu position rule for Calls content type
    $condition = array('content_type' => array('calls' => 'calls'));
    osha_add_menu_position_rule('Calls Menu Rule', '------ Procurement', $condition);

    // Menu position rule for Job vacancies content type
    $condition = array('content_type' => array('job_vacancies' => 'job_vacancies'));
    osha_add_menu_position_rule('Job vacancies Menu Rule', '------ Careers', $condition);
  }
}


function delete_extra_fields() {

  drush_log('Dropping field: field_flickr_tags', 'ok');
  field_delete_field('field_flickr_tags');
  safe_delete_field_instance('field_related_oshwiki_articles', 'highlight');
  safe_delete_field_instance('field_related_oshwiki_articles', 'news');
  safe_delete_field_instance('field_file', 'seminar');
  safe_delete_field_instance('field_author', 'guideline');
  safe_delete_field_instance('field_author', 'directive');
  // CW-415 extra fields from seminars
  safe_delete_field_instance('field_summary', 'seminar');
  drush_log('Dropping extra fields from seminars', 'ok');
  field_delete_field('field_sem_date_to_be_confirmed');
  field_delete_field('field_seminar_attendees');
  field_delete_field('field_seminar_event_url');
  field_delete_field('field_seminar_contact_name');
  field_delete_field('field_seminar_contact_phone');
  field_delete_field('field_seminar_contact_email');
  field_delete_field('field_seminar_attachment');
  field_delete_field('field_seminar_conclusions');
  field_delete_field('field_seminar_further_actions');
  field_delete_field('field_seminar_show_roster_hour');
}

function safe_delete_field_instance($field_base, $bundle) {
  if ($instance = field_info_instance('node', $field_base, $bundle)) {
    field_delete_instance($instance);
  }
}