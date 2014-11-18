<?php

/* Add new stuff for deployment of sprint-5 branch here. To avoid conflicts, add them after your name 
 * Also include the ticket number, see example below
 */
// andrei
// cristi
// dragos
// claudia

osha_add_menu_position_rules();
delete_extra_fields();
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

// radu
drush_log('Dropping field: field_flickr_tags', 'ok');
field_delete_field('field_flickr_tags');

function delete_extra_fields() {
  if ($instance = field_info_instance('node', 'field_related_oshwiki_articles', 'highlight')) {
    field_delete_instance($instance);
  }
  if ($instance = field_info_instance('node', 'field_related_oshwiki_articles', 'news')) {
    field_delete_instance($instance);
  }
  if ($instance = field_info_instance('node', 'field_file', 'seminar')) {
    field_delete_instance($instance);
  }
  if ($instance = field_info_instance('node', 'field_author', 'guideline')) {
    field_delete_instance($instance);
  }
  if ($instance = field_info_instance('node', 'field_author', 'directive')) {
    field_delete_instance($instance);
  }
}