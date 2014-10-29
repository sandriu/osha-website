<?php
/**
 * @file
 * search_and_replace.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function search_and_replace_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_article';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_field_summary_field_revision_field_summary_article';
  $strongarm->value = 1;
  $export['scanner_field_summary_field_revision_field_summary_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_mode';
  $strongarm->value = 0;
  $export['scanner_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_published';
  $strongarm->value = 1;
  $export['scanner_published'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_regex';
  $strongarm->value = 0;
  $export['scanner_regex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_field_field_revision_title_field_article';
  $strongarm->value = 1;
  $export['scanner_title_field_field_revision_title_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_article';
  $strongarm->value = 0;
  $export['scanner_title_node_revision_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_wholeword';
  $strongarm->value = 0;
  $export['scanner_wholeword'] = $strongarm;

  return $export;
}
