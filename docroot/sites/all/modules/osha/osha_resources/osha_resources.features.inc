<?php
/**
 * @file
 * osha_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function osha_resources_image_default_styles() {
  $styles = array();

  // Exported image style: youtube_thumbnail.
  $styles['youtube_thumbnail'] = array(
    'name' => 'youtube_thumbnail',
    'label' => 'Youtube Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 75,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function osha_resources_node_info() {
  $items = array(
    'resources' => array(
      'name' => t('Resources'),
      'base' => 'node_content',
      'description' => t('Additional resources for other content types'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
