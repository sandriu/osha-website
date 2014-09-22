<?php
/**
 * @file
 * osha_blog.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function osha_blog_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_blog_image_caption'
  $field_bases['field_blog_image_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_blog_image_caption',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
