<?php
/**
 * @file
 * osha_alert_service.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function osha_alert_service_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['osha_alert_service-osha_alert_block_front_view'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'osha_alert_block_front_view',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'osha_alert_service',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -28,
      ),
      'osha_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osha_admin',
        'weight' => -28,
      ),
      'osha_frontend' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'osha_frontend',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['osha_alert_service-osha_alert_service_subscribe'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'osha_alert_service_subscribe',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'osha_alert_service',
    'node_types' => array(),
    'pages' => 'alertservice
node/5326',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'osha_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'osha_admin',
        'weight' => 0,
      ),
      'osha_frontend' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'osha_frontend',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
