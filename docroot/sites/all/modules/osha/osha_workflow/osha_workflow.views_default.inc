<?php
/**
 * @file
 * osha_workflow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osha_workflow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'osh_workflow_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Osh Workflow Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Approvals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Node approval */
  $handler->display->display_options['relationships']['osha_workflow_node_approval']['id'] = 'osha_workflow_node_approval';
  $handler->display->display_options['relationships']['osha_workflow_node_approval']['table'] = 'node';
  $handler->display->display_options['relationships']['osha_workflow_node_approval']['field'] = 'osha_workflow_node_approval';
  $handler->display->display_options['relationships']['osha_workflow_node_approval']['required'] = TRUE;
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Workbench Access: Section */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['relationship'] = 'nid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Node approval: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'osha_workflow_node_approval';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'osha_workflow_node_approval';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node approval: Next */
  $handler->display->display_options['filters']['next']['id'] = 'next';
  $handler->display->display_options['filters']['next']['table'] = 'osha_workflow_node_approval';
  $handler->display->display_options['filters']['next']['field'] = 'next';
  $handler->display->display_options['filters']['next']['relationship'] = 'osha_workflow_node_approval';
  $handler->display->display_options['filters']['next']['value']['value'] = '1';
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';

  /* Display: My Approvals */
  $handler = $view->new_display('page', 'My Approvals', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'use osh approvals tab';
  $handler->display->display_options['path'] = 'admin/workbench/approve';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Approvals';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs Review */
  $handler = $view->new_display('page', 'Needs Review', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Needs Review';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'use osh needs review tab';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Node project manager */
  $handler->display->display_options['relationships']['osha_workflow_node_project_managers']['id'] = 'osha_workflow_node_project_managers';
  $handler->display->display_options['relationships']['osha_workflow_node_project_managers']['table'] = 'node';
  $handler->display->display_options['relationships']['osha_workflow_node_project_managers']['field'] = 'osha_workflow_node_project_managers';
  $handler->display->display_options['relationships']['osha_workflow_node_project_managers']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['osha_workflow_node_project_managers']['required'] = TRUE;
  /* Relationship: Workbench Moderation: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node project manager: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'osha_workflow_node_project_managers';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'osha_workflow_node_project_managers';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['path'] = 'admin/workbench/manager';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Needs Review';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['osh_workflow_admin'] = array(
    t('Master'),
    t('My Approvals'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Node approval'),
    t('Node'),
    t('author'),
    t('Title'),
    t('Type'),
    t('Section'),
    t('Name'),
    t('State'),
    t('All'),
    t('Needs Review'),
    t('Node project manager'),
  );
  $export['osh_workflow_admin'] = $view;

  return $export;
}
