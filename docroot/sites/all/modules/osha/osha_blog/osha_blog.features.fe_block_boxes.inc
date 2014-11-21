<?php
/**
 * @file
 * osha_blog.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_blog_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog feeds';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'blog_feed';
  $fe_block_boxes->body = '<p><a href="/blog/feed">Click here for the RSS Feed</a></p>';

  $export['blog_feed'] = $fe_block_boxes;

  return $export;
}
