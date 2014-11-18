<?php
/**
 * @file
 * osha_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osha_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month';
  $strongarm->value = 'F';
  $export['date_format_month'] = $strongarm;

  return $export;
}
