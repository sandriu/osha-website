<?php

/**
 * Alter the view tmgmt_node_selection_view to show latest node state.
 *
 * Alter LEFT JOIN node_revision ON node.vid = node_revision.vid
 * to LEFT JOIN node_revision ON node.nid = node_revision.nid
 */
function osha_tmgmt_views_query_alter(&$view, &$query) {
  // Alter the query for Content tab form Workflow Dashboard.
  // Get the latest state of nodes.
  if ($view->name == 'tmgmt_node_selection_view' && $view->current_display == 'tmgmt_node_selection_view_page') {
    if (!empty($query->table_queue['node_revision'])) {
      $query->table_queue['node_revision']['join']->field = 'nid';
      $query->table_queue['node_revision']['join']->left_field = 'nid';

      // Filter out items in cart.
      $existing = array();
      $cart = tmgmt_ui_cart_get();
      foreach ($cart->getJobItemsFromCart() as $item) {
        if ($item->plugin == 'entity' && $item->item_type == 'node') {
          $existing[] = $item->item_id;
        }
      }
      if (!empty($existing)) {
        $query->where[1]['conditions'][] = array(
          'field' => 'node.nid',
          'operator' => 'not in',
          'value' => $existing,
        );
      }
    }
  }
}
