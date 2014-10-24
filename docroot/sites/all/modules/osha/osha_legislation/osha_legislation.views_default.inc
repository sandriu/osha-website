<?php
/**
 * @file
 * osha_legislation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osha_legislation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'legislation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Legislation Directives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Legislation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_directive_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_directive_type' => 'field_directive_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directive_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Legislation category (field_legislation_category) */
  $handler->display->display_options['relationships']['field_legislation_category_tid']['id'] = 'field_legislation_category_tid';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['table'] = 'field_data_field_legislation_category';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['field'] = 'field_legislation_category_tid';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['required'] = TRUE;
  /* Relationship: Content: Directive Type (field_directive_type) */
  $handler->display->display_options['relationships']['field_directive_type_tid']['id'] = 'field_directive_type_tid';
  $handler->display->display_options['relationships']['field_directive_type_tid']['table'] = 'field_data_field_directive_type';
  $handler->display->display_options['relationships']['field_directive_type_tid']['field'] = 'field_directive_type_tid';
  $handler->display->display_options['relationships']['field_directive_type_tid']['required'] = TRUE;
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['relationships']['nid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid_1']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid_1']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Directive Type */
  $handler->display->display_options['fields']['field_directive_type']['id'] = 'field_directive_type';
  $handler->display->display_options['fields']['field_directive_type']['table'] = 'field_data_field_directive_type';
  $handler->display->display_options['fields']['field_directive_type']['field'] = 'field_directive_type';
  $handler->display->display_options['fields']['field_directive_type']['label'] = '';
  $handler->display->display_options['fields']['field_directive_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directive_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Directive Category Code (field_directive_category_code) */
  $handler->display->display_options['arguments']['field_directive_category_code_value']['id'] = 'field_directive_category_code_value';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['table'] = 'field_data_field_directive_category_code';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['field'] = 'field_directive_category_code_value';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['relationship'] = 'field_legislation_category_tid';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_directive_category_code_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['relationship'] = 'nid';
  $handler->display->display_options['filters']['current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'legislation/directives/%';
  $translatables['legislation'] = array(
    t('Master'),
    t('Legislation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_legislation_category'),
    t('term from field_directive_type'),
    t('Node'),
    t('Get the actual content from a content revision.'),
    t('All'),
    t('Page'),
  );
  $export['legislation'] = $view;

  $view = new view();
  $view->name = 'legislation_guidelines';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Legislation Guidelines';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Legislation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Legislation category (field_legislation_category) */
  $handler->display->display_options['relationships']['field_legislation_category_tid']['id'] = 'field_legislation_category_tid';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['table'] = 'field_data_field_legislation_category';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['field'] = 'field_legislation_category_tid';
  $handler->display->display_options['relationships']['field_legislation_category_tid']['required'] = TRUE;
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['relationships']['nid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid_1']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid_1']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Legislation category */
  $handler->display->display_options['fields']['field_legislation_category']['id'] = 'field_legislation_category';
  $handler->display->display_options['fields']['field_legislation_category']['table'] = 'field_data_field_legislation_category';
  $handler->display->display_options['fields']['field_legislation_category']['field'] = 'field_legislation_category';
  $handler->display->display_options['fields']['field_legislation_category']['label'] = '';
  $handler->display->display_options['fields']['field_legislation_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legislation_category']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Guideline Category Code (field_guideline_category_code) */
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['id'] = 'field_guideline_category_code_value';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['table'] = 'field_data_field_guideline_category_code';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['field'] = 'field_guideline_category_code_value';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['relationship'] = 'field_legislation_category_tid';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_guideline_category_code_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['relationship'] = 'nid';
  $handler->display->display_options['filters']['current']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'guideline' => 'guideline',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'legislation/guidelines/%';
  $translatables['legislation_guidelines'] = array(
    t('Master'),
    t('Legislation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_legislation_category'),
    t('Node'),
    t('Get the actual content from a content revision.'),
    t('All'),
    t('Page'),
  );
  $export['legislation_guidelines'] = $view;

  return $export;
}
