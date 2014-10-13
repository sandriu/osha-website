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
}
