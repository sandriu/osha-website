<?php

/**
 * Implements hook_views_query_alter().
 *
 * {@inheritdoc}
 */
function osha_workflow_views_query_alter(&$view, &$query) {
  if ($view->name == 'workbench_moderation' && $view->current_display == 'drafts_page') {
    $query->where[1]['conditions'][2]['value'][0] = OSHA_WORKFLOW_STATE_DRAFT;
    $query->where[1]['conditions'][2]['operator'] = 'in';
  }
  // Alter the query for Content tab form Workflow Dashboard.
  // Get the latest state of nodes.
  elseif ($view->name == 'osh_workflow_admin' && $view->current_display == 'content') {
    if (!empty($query->table_queue['node_revision'])) {
      $query->table_queue['node_revision']['join']->field = 'nid';
      $query->table_queue['node_revision']['join']->left_field = 'nid';
    }
  }
}
