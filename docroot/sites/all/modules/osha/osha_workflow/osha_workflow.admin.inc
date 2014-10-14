<?php

/**
 * @param $form
 * @param $form_state
 * @return array
 */
function osha_workflow_workbench_project_managers_form($form, $form_state) {
  // Set proper breadcrumb trails.
  $breadcrumb[] = t('Project Managers');
  $current = drupal_get_breadcrumb();
  $current = array_merge($current, $breadcrumb);
  drupal_set_breadcrumb($current);
  $form = array(
    '#submit' => array('osha_workflow_workbench_project_managers_form_submit'),
  );

  // Ensure that we have configured access controls.
  if (!$active = workbench_access_get_active_tree()) {
    $form['error'] = array('#markup' => workbench_access_configuration_needed_message());
    return $form;
  }

  $form['help'] = array(
    '#markup' => '<h1>' . t('Default project managers') . '</h1>' . '<p>' . t('Use this form to assign the default project managers to each section.') . '<p>',
    '#weight' => -10,
    '#attributes' => array('class' => array('container-inline')),
  );
  foreach ($active['tree'] as $access_id => $section) {
    if (!isset($active['active'][$access_id])) {
      continue;
    }
    $options = array('' => '-- Please select --') + osha_workflow_users_get_list_options();
    $form['rows'][$section['access_type_id']][$access_id] = array(
      '#title' => str_repeat('-', $section['depth']) . ' ' . $section['name'],
      '#title_display' => 'after',
      '#type' => 'select',
      '#name' => $access_id,
      '#options' => $options,
    );
  }
  $form['actions'] = array(
    '#type' => 'actions',
    '#attributes' => array('class' => array('container-inline')),
    '#weight' => 20,
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save changes'),
    ),
  );
  return $form;
}

function osha_workflow_workbench_project_managers_form_submit($form, $form_state) {
  drupal_set_message('Saving not implemented', 'error');
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
  $project_manager = osha_workflow_get_project_manager($node->nid);
  $users = osha_workflow_users_get_list_options();
  $users = array('' => t('-- Please select --')) + $users;
  $form['#attributes'] = array('class' => array('container-inline'));
  if ($project_manager) {
    $form['current'] = array(
      '#markup' => t(
        'Current project manager is set to <strong>!pm</strong>.',
        array('!pm' => $project_manager->name)
      ),
    );
    $form['project_manager'] = array(
      '#type' => 'select',
      '#title' => t('Change to'),
      '#options' => $users,
      '#default_value' => isset($project_manager->uid) ? $project_manager->uid : '',
    );
  }
  else {
    $form['current'] = array('#markup' => t('No project manager set.'));
    $form['project_manager'] = array(
      '#type' => 'select',
      '#title' => t('Set to'),
      '#options' => $users,
      '#default_value' => isset($project_manager->uid) ? $project_manager->uid : '',
    );
  }
  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 20,
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Change'),
    ),
  );
  return $form;
}

/**
 * Form validation for osha_workflow_node_review_form.
 */
function osha_workflow_node_review_form_validate($form, $form_state) {
  if (empty($form_state['values']['project_manager'])) {
    form_set_error('', t('Please assign a project manager'));
  }
}


/**
 * Form submission for osha_workflow_node_review_form.
 */
function osha_workflow_node_review_form_submit($form, $form_state) {
  $node = $form_state['node'];
  $uid = $form_state['values']['project_manager'];
  osha_workflow_set_project_manager($node->nid, $uid);
}

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
  $can_edit = OshaWorkflowPermissions::userCanEditApprovers($node);
  $form_state['node'] = $node;
  $form['#can_edit']  = $can_edit;
  $form['#tree'] = TRUE;
  $form['#theme'] = 'osha_workflow_approval_form';
  if (isset($form_state['rows'])) {
    $rows = $form_state['rows'];
  }
  else {
    $rows = osha_workflow_get_node_approvers($node->nid, FALSE);
  }
  $form_state['rows'] = $rows;
  $weight = 0;
  foreach ($rows as $uid => $row) {
    $form['rows'][$uid]['#row'] = $row;
    $form['rows'][$uid]['weight'] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => (-10 + $weight),
      '#access' => $can_edit,
      '#attributes' => array('class' => array('user-weight')),
    );
    $form['rows'][$uid]['uid'] = array(
      '#type' => 'hidden',
      '#value' => $uid,
    );
    $form['rows'][$uid]['remove'] = array(
      '#type' => 'submit',
      '#name' => $uid,
      '#value' => t('Remove'),
      '#access' => $can_edit,
      '#submit' => array('osha_workflow_admin_approvers_remove_row'),
    );
    $weight++;
  }
  $form['add']['uid'] = array(
    '#type' => 'select',
    '#multiple' => FALSE,
    '#options' => osha_workflow_users_get_list_options(),
    '#title' => t('Add another approver'),
    '#title_display' => 'invisible',
    '#access' => $can_edit,
  );
  $form['add']['submit'] = array(
    '#type' => 'submit',
    '#name' => 'adduser',
    '#value' => t('Add to queue'),
    '#access' => $can_edit,
    '#attributes' => array('class' => array('container-inline')),
    '#submit' => array('osha_workflow_admin_approvers_add_row'),
  );
  $form['help'] = array(
    '#type' => 'markup',
    '#markup' =>
      t('<div><strong>Tip:</strong> Use the drag handlers to sort the users in the order you want them to have the content reviewed. <br />** - Temporary, not yet saved</div>'),
  );
  $form['content'] = array(
    'actions' => array(
      '#type' => 'actions',
      '#weight' => 20,
      'submit' => array(
        '#type' => 'submit',
        '#value' => t('Save'),
        '#access' => $can_edit,
      ),
    ),
  );
  return $form;
}

function osha_workflow_admin_approvers_remove_row($form, &$form_state) {
  if (isset($form_state['triggering_element'])) {
    $triggering_element = $form_state['triggering_element'];
    if (isset($triggering_element['#name'])) {
      $uid = $triggering_element['#name'];
      unset($form_state['rows'][$uid]);
      unset($form_state['values']['rows'][$uid]);
      drupal_set_message(t('Changes made in this table will not be saved until you press Save'), 'warning');
      $form_state['rebuild'] = TRUE;
    }
  }
}

function osha_workflow_admin_approvers_add_row($form, &$form_state) {
  if (!empty($form_state['input']['add']['uid'])) {
    $moderator = user_load($form_state['input']['add']['uid']);
    $moderator->osha_workflow_node_approval_saved = FALSE;
    $form_state['rows'][$moderator->uid] = $moderator;
    drupal_set_message(t('Changes made in this table will not be saved until you press Save'), 'warning');
    $form_state['rebuild'] = TRUE;
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
function theme_osha_workflow_approval_form($variables) {
  $output = '';
  $form = $variables['form'];
  $rows = array();
  if (!empty($form['rows'])) {
    foreach (element_children($form['rows']) as $uid) {
      $moderator = $form['rows'][$uid]['#row'];
      $status = '';
      if (isset($moderator->osha_workflow_node_approval)) {
        $val = $moderator->osha_workflow_node_approval->approved;
        if ($val === NULL) {
          // NULL - not reviewed yet.
          // $status = t('Waiting to approve');
        }
        else {
          $status = t('User created a new revision');
        }
      }
      $row = array();
      $name = check_plain($moderator->name);
      if (empty($moderator->osha_workflow_node_approval_saved)) {
        $name .= '<sup>**</sup>';
      }
      $row[] = $name;
      $row[] = check_plain($moderator->mail);
      $row[] = $status;
      $row[] = drupal_render($form['rows'][$uid]['remove']);
      $row[] = drupal_render($form['rows'][$uid]['weight']);
      $rows[] = array('data' => $row, 'class' => array('draggable'));
    }
  }
  $row = array(
    drupal_render($form['add']['uid']),
    drupal_render($form['add']['submit']),
    '',
    '',
    '',
  );
  $rows[] = $row;
  $caption = t('List of approvers');

  $header = array(
    t('User'),
    t('Mail'),
    t('Status'),
    '',
  );
  if ($form['#can_edit']) {
    array_push($header, t('Order of notification'));
  }
  $table = array(
    '#theme' => 'table',
    '#caption' => $caption,
    '#header' => $header,
    '#attributes' => array(
      'id' => 'approvers_table',
    ),
    '#rows' => $rows,
  );
  if (isset($form['moderation'])) {
    $output .= drupal_render($form['moderation']);
  }
  $output .= drupal_render($table);
  //$form['content']['actions']['submit']['#access'] = FALSE;
  //hide($form['content']['actions']['submit']);
  $output .= drupal_render_children($form);
  if ($form['#can_edit']) {
    drupal_add_tabledrag('approvers_table', 'order', 'sibling', 'user-weight');
  }
  return $output;
}

/**
 * Implements hook_form_validate().
 */
function osha_workflow_node_approval_form_validate($form, $form_state) {
  if (empty($form_state['rows']) && $form_state['triggering_element']['#name'] != 'adduser') {
    form_set_error('enabled', t('Cannot have an empty moderation queue. Add at least one user or switch to another state!'));
  }
}

/**
 * Implements hook_form_submit().
 */
function osha_workflow_node_approval_form_submit($form, $form_state) {
  $users = array();
  $node = $form_state['node'];
  if (!empty($form_state['values']['rows'])) {
    $data = $form_state['values']['rows'];
    foreach ($data as $uid => $cfg) {
      $weight = $cfg['weight'];
      $users[$weight] = $uid;
    }
    ksort($users);
  }
  osha_workflow_set_node_approvers($node->nid, $users);
}

/**
 * Build the list of users as options for select.
 * @return array
 *   Array of user accounts.
 */
function osha_workflow_users_get_list_options() {
  $ret = array();
  $results = db_select('users', 'u')
    ->fields('u', array('uid', 'name'))
    ->condition('uid', 0, '!=')
    ->orderBy('name')
    ->execute();
  while ($record = $results->fetchAssoc()) {
    $ret[$record['uid']] = $record['name'];
  };
  return $ret;
}
