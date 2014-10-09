<?php
/**
 * @file
 * osha_job_vacancies.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_job_vacancies_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Link on careers page to closed vacancies';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'vacancies_link_to_closed';
  $fe_block_boxes->body = '<p><a href="/jobs_archive">Closed vacancies</a></p>';

  $export['vacancies_link_to_closed'] = $fe_block_boxes;

  return $export;
}
