<?php
/**
 * @file
 * osha_seminar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osha_seminar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'seminars';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seminars';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EU-OSHA Seminars';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_seminar_location']['id'] = 'field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['table'] = 'field_data_field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['field'] = 'field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_location']['element_label_colon'] = FALSE;
  /* Field: Displayed start date */
  $handler->display->display_options['fields']['field_seminar_start_date']['id'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['field'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['ui_name'] = 'Displayed start date';
  $handler->display->display_options['fields']['field_seminar_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seminar_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
  );
  /* Field: Grouping start date */
  $handler->display->display_options['fields']['field_seminar_start_date_1']['id'] = 'field_seminar_start_date_1';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['field'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['ui_name'] = 'Grouping start date';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_seminar_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seminar_start_date_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
  );
  /* Sort criterion: Content: Start date (field_seminar_start_date) */
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['id'] = 'field_seminar_start_date_value';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['field'] = 'field_seminar_start_date_value';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seminar' => 'seminar',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_seminar_start_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start date (field_seminar_start_date) */
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['id'] = 'field_seminar_start_date_value';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['field'] = 'field_seminar_start_date_value';
  $handler->display->display_options['sorts']['field_seminar_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'seminars';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EU-OSHA Seminars';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_seminar_start_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_seminar_start_date']['id'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['field'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seminar_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_seminar_location']['id'] = 'field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['table'] = 'field_data_field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['field'] = 'field_seminar_location';
  $handler->display->display_options['fields']['field_seminar_location']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_location']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Start date for grouping */
  $handler->display->display_options['fields']['field_seminar_start_date_1']['id'] = 'field_seminar_start_date_1';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['table'] = 'field_data_field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['field'] = 'field_seminar_start_date';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['ui_name'] = 'Start date for grouping';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_seminar_start_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_seminar_start_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_seminar_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seminar_start_date_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $translatables['seminars'] = array(
    t('Master'),
    t('EU-OSHA Seminars'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['seminars'] = $view;

  return $export;
}
