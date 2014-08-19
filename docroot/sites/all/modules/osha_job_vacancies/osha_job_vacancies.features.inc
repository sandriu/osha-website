<?php
/**
 * @file
 * osha_job_vacancies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_job_vacancies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function osha_job_vacancies_node_info() {
  $items = array(
    'job_vacancies' => array(
      'name' => t('Job vacancies'),
      'base' => 'node_content',
      'description' => t('Job vacancies content-type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
