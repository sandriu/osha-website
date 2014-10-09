<?php

/**
 * Form builder for workflow_moderation_form (approval).
 *
 * @param array $form
 *   Form to modify
 * @param array $form_state
 *   Form state
 * @param object $node
 *   Current node
 *
 * @return array
 *   Form array
 */
function osha_workflow_node_approval_form($form, &$form_state, $node) {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.api');
  $form_state['node'] = $node;
  $rows = osha_workflow_get_node_moderators($node, OSHA_WORKFLOW_MODERATION_TYPE_APPROVE);
  $options = array();
  $enabled = array();

  $form['weight'] = array('#tree' => TRUE);
  osha_workflow_admin_build_users_table($form, $rows, $enabled, $options, OSHA_WORKFLOW_MODERATION_TYPE_APPROVE);
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
 * Form builder for workflow_moderation_form (review).
 *
 * @param array $form
 *   Form to modify
 * @param array $form_state
 *   Form state
 * @param object $node
 *   Current node
 *
 * @return array
 *   Form array
 */
function osha_workflow_node_review_form($form, &$form_state, $node) {
  module_load_include('inc', 'osha_workflow', 'osha_workflow.api');
  $form_state['node'] = $node;
  $rows = osha_workflow_get_node_moderators($node, OSHA_WORKFLOW_MODERATION_TYPE_REVIEW);
  $options = array();
  $enabled = array();

  $form['weight'] = array('#tree' => TRUE);
  osha_workflow_admin_build_users_table($form, $rows, $enabled, $options, OSHA_WORKFLOW_MODERATION_TYPE_REVIEW);
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
 * Build the table with moderators.
 *
 * @param array $form
 *   Form to alter
 * @param array $rows
 *   Array of user objects
 * @param array $enabled
 *   Array with enabled users
 * @param array $options
 *   Array with items checked in the table
 * @param string $moderation_type
 *   Type of moderation
 */
function osha_workflow_admin_build_users_table(&$form, $rows, &$enabled, &$options, $moderation_type) {
  $weight = 0;
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
    if (!empty($row->moderation[$moderation_type])) {
      $moderation = $row->moderation[$moderation_type];
      $form['next'][$uid] = array('#markup' => !empty($moderation->next) ? t('Yes') : '');
      if ($moderation->approved === NULL) {
        $status = t('Waiting approval');
      }
      elseif ($moderation->approved == 1) {
        $status = t('Approved');
      }
      else {
        $status = t('Rejected');
      }
      $form['status'][$uid] = array('#markup' => $status);
    }
    else {
      $form['next'][$uid] = array('#markup' => '');
      $form['status'][$uid] = array('#markup' => '');
    }
    $weight++;
  }
}

/**
 * Themes the workflow_moderation_form form.
 *
 * @param array $variables
 *   Form variables
 *
 * @return string
 *   Form HTML
 */
function theme_osha_workflow_moderation_form($variables) {
  $output = '';
  $form = $variables['form'];

  $rows = array();
  if (!empty($form['name'])) {
    foreach (element_children($form['name']) as $uid) {
      $form['enabled'][$uid]['#title'] = t('Mark as reviewer');
      $form['enabled'][$uid]['#title_display'] = 'invisible';
      $rows[] = array(
        'data' => array(
          array(
            'data' => drupal_render($form['enabled'][$uid]),
            'align' => 'center',
          ),
          drupal_render($form['name'][$uid]),
          drupal_render($form['mail'][$uid]),
          check_plain($uid),
          drupal_render($form['status'][$uid]),
          drupal_render($form['next'][$uid]),
          drupal_render($form['weight'][$uid]),
        ),
        'class' => array('draggable'),
      );
    }
    $table = array(
      'header' => array(
        t('Moderate'),
        t('Username'),
        t('Mail'),
        t('UID'),
        t('Status'),
        t('Next in line'),
        t('Order of notification'),
      ),
      'attributes' => array(
        'id' => 'osha_workflow_moderation_table',
      ),
      'rows' => $rows,
    );
    if (isset($form['moderation'])) {
      $output .= drupal_render($form['moderation']);
    }
    $output .= theme('table', $table);
    $output .= drupal_render($form['help']);
    $output .= drupal_render($form['actions']);
    $output .= drupal_render_children($form);
    drupal_add_tabledrag('osha_workflow_moderation_table', 'order', 'sibling', 'user-weight');
  }
  else {
    $output = t('No users available to select for moderation. Please check user assignments for Default approvers/reviewers, or contact technical support.');
  }
  return $output;
}

/**
 * Implements hook_form_validate().
 */
function osha_workflow_node_review_form_validate($form, $form_state) {
  $data = array_filter(
    $form_state['values']['enabled'],
    function($uid) {
    return $uid > 0;
    }
  );
  if (empty($data)) {
    form_set_error('enabled', t('Cannot have an empty moderation queue! Add at least one user or switch to another state!'));
  }
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
 * Implements hook_form_validate().
 */
function osha_workflow_node_approval_form_validate($form, $form_state) {
  $data = array_filter(
    $form_state['values']['enabled'],
    function($uid) {
    return $uid > 0;
    }
  );
  if (empty($data)) {
    form_set_error('enabled', t('Cannot have an empty moderation queue! Add at least one user or switch to another state!'));
  }
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
