<?php
/**
 * @file
 * search_and_replace.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_and_replace_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
