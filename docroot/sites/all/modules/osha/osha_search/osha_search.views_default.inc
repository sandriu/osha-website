<?php
/**
 * @file
 * osha_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osha_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'solr_autocomplete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'solr_autocomplete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Solr autocomplete';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'search_autocomplete';
  $handler->display->display_options['style_options']['group_by'] = 'bundle_name';
  $handler->display->display_options['style_options']['input_label'] = 'sm_title_field';
  $handler->display->display_options['style_options']['input_link'] = 'url';
  $handler->display->display_options['style_options']['output_fields'] = array(
    'sm_title_field' => 'sm_title_field',
  );
  /* Field: Apache Solr: sm_title_field */
  $handler->display->display_options['fields']['sm_title_field']['id'] = 'sm_title_field';
  $handler->display->display_options['fields']['sm_title_field']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_title_field']['field'] = 'sm_title_field';
  $handler->display->display_options['fields']['sm_title_field']['label'] = '';
  $handler->display->display_options['fields']['sm_title_field']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: bundle_name */
  $handler->display->display_options['fields']['bundle_name']['id'] = 'bundle_name';
  $handler->display->display_options['fields']['bundle_name']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['bundle_name']['field'] = 'bundle_name';
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">[sm_title_field]</a>';
  /* Filter criterion: Apache Solr: content */
  $handler->display->display_options['filters']['content']['id'] = 'content';
  $handler->display->display_options['filters']['content']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['content']['field'] = 'content';
  $handler->display->display_options['filters']['content']['operator'] = 'allwords';
  $handler->display->display_options['filters']['content']['exposed'] = TRUE;
  $handler->display->display_options['filters']['content']['expose']['operator_id'] = 'content_op';
  $handler->display->display_options['filters']['content']['expose']['label'] = 'content';
  $handler->display->display_options['filters']['content']['expose']['operator'] = 'content_op';
  $handler->display->display_options['filters']['content']['expose']['identifier'] = 'filter';
  $handler->display->display_options['filters']['content']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'autocomplete/solr';
  $translatables['solr_autocomplete'] = array(
    t('Master'),
    t('Solr autocomplete'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('bundle_name'),
    t('url'),
    t('<a href="[url]">[sm_title_field]</a>'),
    t('content'),
    t('Page'),
  );
  $export['solr_autocomplete'] = $view;

  return $export;
}
