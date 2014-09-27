<?php
/**
 * @file
 * osha_content.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function osha_content_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'osh_news';
  $path_breadcrumb->name = 'OSH news';
  $path_breadcrumb->path = 'oshnews';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'OSH news',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['osh_news'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'osh_publications';
  $path_breadcrumb->name = 'Publications';
  $path_breadcrumb->path = 'publications';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Tools and resources',
      1 => 'Publications',
    ),
    'paths' => array(
      0 => 'articles/tools-and-resources',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['osh_publications'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'oshmail_newsletter';
  $path_breadcrumb->name = 'OSHMAIL newsletter';
  $path_breadcrumb->path = 'oshmail_newsletter';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'OSHMAIL newsletter',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['oshmail_newsletter'] = $path_breadcrumb;

  return $export;
}
