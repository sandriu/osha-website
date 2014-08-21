<?php
/**
 * @file
 * osha_job_vacancies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osha_job_vacancies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_job_vacancies';
  $strongarm->value = 0;
  $export['comment_anonymous_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_job_vacancies';
  $strongarm->value = 1;
  $export['comment_default_mode_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_job_vacancies';
  $strongarm->value = '50';
  $export['comment_default_per_page_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_job_vacancies';
  $strongarm->value = 1;
  $export['comment_form_location_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_job_vacancies';
  $strongarm->value = '1';
  $export['comment_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_job_vacancies';
  $strongarm->value = '1';
  $export['comment_preview_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_job_vacancies';
  $strongarm->value = 1;
  $export['comment_subject_field_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_job_vacancies';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__job_vacancies';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'language' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_job_vacancies';
  $strongarm->value = '4';
  $export['language_content_type_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_vacancies';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_vacancies';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_vacancies';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_vacancies';
  $strongarm->value = '1';
  $export['node_preview_job_vacancies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_vacancies';
  $strongarm->value = 1;
  $export['node_submitted_job_vacancies'] = $strongarm;

  return $export;
}
