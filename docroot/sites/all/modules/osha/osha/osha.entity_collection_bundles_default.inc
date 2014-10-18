<?php
/**
 * @file
 * osha.entity_collection_bundles_default.inc
 */

/**
 * Implements hook_entity_collection_bundles_default().
 */
function osha_entity_collection_bundles_default() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'translators_group';
  $preset->storage = 'entity_collection_storage_db';
  $preset->label = 'Translators Group';
  $preset->description = '';
  $preset->settings = array(
    'store_entity' => 0,
  );
  $export['translators_group'] = $preset;

  return $export;
}
