<?php
/**
 * @file
 * osha.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "entity_collection" && $api == "entity_collection_bundles_default") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osha_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_collection().
 */
function osha_default_entity_collection() {
  $items = array();
  $items['translators_group_2'] = entity_import('entity_collection', '{
    "type" : null,
    "name" : "translators_group_2",
    "bid" : null,
    "title" : "translators_group_2",
    "cache" : null,
    "requiredcontexts" : [],
    "contexts" : [],
    "bundle" : "translators_group",
    "style" : "entity_collection_style_flat",
    "row" : "entity_collection_row_view_mode",
    "settings" : {
      "row_settings" : { "style_per_row" : 1 },
      "style_settings" : [],
      "allowed_bundles" : {
        "node" : [],
        "taxonomy_term" : [],
        "comment" : [],
        "entity_collection" : [],
        "i18n_translation" : [],
        "redirect" : [],
        "search_api_server" : [],
        "search_api_index" : [],
        "file" : [],
        "taxonomy_vocabulary" : [],
        "tmgmt_job" : [],
        "tmgmt_job_item" : [],
        "tmgmt_message" : [],
        "tmgmt_translator" : [],
        "tmgmt_remote" : [],
        "tmgmt_local_task" : [],
        "tmgmt_local_task_item" : [],
        "user" : [ "user" ],
        "wysiwyg_profile" : [],
        "workbench_moderation_transition" : [],
        "node_project_managers" : [],
        "node_approval" : [],
        "rules_config" : []
      }
    },
    "rdf_mapping" : []
  }');
  $items['translators_group_3'] = entity_import('entity_collection', '{
    "type" : null,
    "name" : "translators_group_3",
    "bid" : null,
    "title" : "translators_group_3",
    "cache" : null,
    "requiredcontexts" : [],
    "contexts" : [],
    "bundle" : "translators_group",
    "style" : "entity_collection_style_flat",
    "row" : "entity_collection_row_view_mode",
    "settings" : {
      "row_settings" : { "style_per_row" : 1 },
      "style_settings" : [],
      "allowed_bundles" : {
        "node" : [],
        "taxonomy_term" : [],
        "comment" : [],
        "entity_collection" : [],
        "i18n_translation" : [],
        "redirect" : [],
        "search_api_server" : [],
        "search_api_index" : [],
        "file" : [],
        "taxonomy_vocabulary" : [],
        "tmgmt_job" : [],
        "tmgmt_job_item" : [],
        "tmgmt_message" : [],
        "tmgmt_translator" : [],
        "tmgmt_remote" : [],
        "tmgmt_local_task" : [],
        "tmgmt_local_task_item" : [],
        "user" : [ "user" ],
        "wysiwyg_profile" : [],
        "workbench_moderation_transition" : [],
        "node_project_managers" : [],
        "node_approval" : [],
        "rules_config" : []
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function osha_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
