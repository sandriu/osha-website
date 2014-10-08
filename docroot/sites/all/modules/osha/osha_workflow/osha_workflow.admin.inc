<?php

function osha_workflow_node_approval_form($form, &$form_state, $node) {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.api');
  $form_state['node'] = $node;
  $rows = osha_workflow_get_node_moderators($node, OSHA_WORKFLOW_MODERATION_TYPE_APPROVE);
  $weight = 0;
  $options = array();
  $enabled = array();
  $form['weight'] = array('#tree' => TRUE);
  foreach ($rows as $uid => $row) {
    $options[$uid] = '';
    $enabled[] = $uid;
    $form['weight'][$uid] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => (-10 + $weight),
      '#attributes' => array('class' => array('user-weight')),
    );
    $form['name'][$uid] = array('#markup' => check_plain($row->name));
    $form['mail'][$uid] = array('#markup' => check_plain($row->mail));
    $weight++;
  }
  $form['enabled'] = array(
    '#type' => 'checkboxes',
    '#title' => t('List of moderators'),
    '#title_display' => 'invisible',
    '#options' => $options,
    '#default_value' => $enabled,
  );

  $form['help'] = array(
    '#type' => 'markup',
    '#markup' => t('<div><strong>Tips:</strong><br />Check the users you want to have the content reviewed.<br />Use the mouse to drag the users in the order you want them to have the content reviewed.</div>'),
  );

  $form['content']['actions'] = array('#type' => 'actions', '#weight' => 20);
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration'));
  $form['#theme'] = 'osha_workflow_moderation_form';
  return $form;
}

/**
 * Form builder for workflow_moderation_form.
 */
function osha_workflow_node_review_form($form, &$form_state, $node) {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.api');
  $form_state['node'] = $node;
  $rows = osha_workflow_get_node_moderators($node, OSHA_WORKFLOW_MODERATION_TYPE_REVIEW);
  $weight = 0;
  $options = array();
  $enabled = array();
  $form['weight'] = array('#tree' => TRUE);
  foreach ($rows as $uid => $row) {
    $options[$uid] = '';
    $enabled[] = $uid;
    $form['weight'][$uid] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => (-10 + $weight),
      '#attributes' => array('class' => array('user-weight')),
    );
    $form['name'][$uid] = array('#markup' => check_plain($row->name));
    $form['mail'][$uid] = array('#markup' => check_plain($row->mail));
    $weight++;
  }
  $form['enabled'] = array(
    '#type' => 'checkboxes',
    '#title' => t('List of moderators'),
    '#title_display' => 'invisible',
    '#options' => $options,
    '#default_value' => $enabled,
  );

  $form['help'] = array(
    '#type' => 'markup',
    '#markup' => t('<div><strong>Tips:</strong><br />Check the users you want to have the content reviewed.<br />Use the mouse to drag the users in the order you want them to have the content reviewed.</div>'),
  );

  $form['content']['actions'] = array('#type' => 'actions', '#weight' => 20);
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration'));
  $form['#theme'] = 'osha_workflow_moderation_form';
  return $form;
}

/**
 * Themes the workflow_moderation_form form.
 */
function theme_osha_workflow_moderation_form($variables) {
  $output = '';
  $form = $variables['form'];

  $rows = array();
  foreach (element_children($form['name']) as $uid) {
    $form['enabled'][$uid]['#title'] = t('Mark as reviewer');
    $form['enabled'][$uid]['#title_display'] = 'invisible';
    $rows[] = array(
      'data' => array(
        array('data' => drupal_render($form['enabled'][$uid]), 'align' => 'center'),
        drupal_render($form['name'][$uid]),
        drupal_render($form['mail'][$uid]),
        check_plain($uid),
        drupal_render($form['weight'][$uid]),
      ),
      'class' => array('draggable'),
    );
  }
  $table = array(
    'header' => array(
      t('Moderate'), t('Username'), t('Mail'), t('UID'), t('Order of notification'),
    ),
    'attributes' => array(
      'id' => 'osha_workflow_moderation_table',
    ),
    'rows' => $rows,
  );

  $output .= theme('table', $table);
  $output .= drupal_render($form['help']);
  $output .= drupal_render($form['actions']);
  $output .= drupal_render_children($form);

  drupal_add_tabledrag('osha_workflow_moderation_table', 'order', 'sibling', 'user-weight');

  return $output;
}

/**
 * Implements hook_form_submit().
 */
function osha_workflow_node_review_form_submit($form, $form_state) {
  $data = $form_state['values'];
  $users = array();
  foreach ($data['enabled'] as $k => $v) {
    if (!empty($v)) {
      $weight = $data['weight'][$k];
      $users[$weight] = $v;
    }
  }
  $node = $form_state['node'];
  ksort($users);
  osha_workflow_set_node_moderators($node, $users, OSHA_WORKFLOW_MODERATION_TYPE_REVIEW);
}

/**
 * Implements hook_form_submit().
 */
function osha_workflow_node_approval_form_submit($form, $form_state) {
  $data = $form_state['values'];
  $users = array();
  foreach ($data['enabled'] as $k => $v) {
    if (!empty($v)) {
      $weight = $data['weight'][$k];
      $users[$weight] = $v;
    }
  }
  $node = $form_state['node'];
  ksort($users);
  osha_workflow_set_node_moderators($node, $users, OSHA_WORKFLOW_MODERATION_TYPE_APPROVE);
}
