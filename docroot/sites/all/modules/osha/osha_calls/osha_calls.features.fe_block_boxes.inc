<?php
/**
 * @file
 * osha_calls.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_calls_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Link on procurement page to archive';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'calls_link_to_archive';
  $fe_block_boxes->body = '<p><a href="/calls_archive">Archive</a></p>';

  $export['calls_link_to_archive'] = $fe_block_boxes;

  return $export;
}
