<?php

/**
 * Administration form for the OSHA newsletter module.
 *
 * @return array
 *   Form array
 */
function osha_newsletter_admin_form() {
  $form = array();
  $form['osha_newsletter_listserv'] = array(
    '#type' => 'textfield',
    '#title' => t('Listserv e-mail address'),
    '#default_value' => variable_get('osha_newsletter_listserv', 'test@list.osha.europa.eu'),
    '#size' => 40,
    '#attributes' => array('tabindex' => 1),
    '#maxlength' => 60,
    '#description' => t('Destination listserv account to send the newsletter for dispatch'),
    '#required' => TRUE,
  );

  $form['osha_newsletter_listserv_from'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail author'),
    '#default_value' => variable_get('osha_newsletter_listserv_from', 'news@osha.europa.eu'),
    '#attributes' => array('tabindex' => 2),
    '#size' => 40,
    '#maxlength' => 40,
    '#description' => t('E-mail sender as it will appear in the "From" header of the e-mail'),
    '#required' => TRUE,
  );

  $voc = taxonomy_vocabulary_machine_name_load('newsletter_sections');
  $tax = taxonomy_get_tree($voc->vid);
  $options = array('' => '-- Please select --');
  foreach ($tax as $term) {
    $options[$term->tid] = $term->name;
  }
  $form['osha_newsletter_coming_soon_tid'] = array(
    '#type' => 'select',
    '#attributes' => array('tabindex' => 3),
    '#title' => t('Coming soon section'),
    '#options' => $options,
    '#default_value' => variable_get('osha_newsletter_coming_soon_tid', 0),
    '#description' => t('Select which section above corresponds to the comming soon'),
    '#required' => TRUE,
  );

  $entity_info = entity_get_info('node');
  if (isset($entity_info['view modes'])) {
    $options = array();
    foreach ($entity_info['view modes'] as $machine_name => $info) {
      $options[$machine_name] = $info['label'];
    }
    $form['osha_newsletter_node_view_mode'] = array(
      '#type' => 'select',
      '#attributes' => array('tabindex' => 4),
      '#title' => t('Default view mode'),
      '#options' => $options,
      '#default_value' => variable_get('osha_newsletter_node_view_mode', 'teaser'),
      '#description' => t('Default view mode when render nodes in newsletter'),
      '#required' => FALSE,
    );
  }



  $allowed_bundles = variable_get(
    'osha_newsletter_allowed_bundles',
    array(
      // TODO:EDW: check 'event' - non existing for now.
      'publication', 'page', 'blog', 'news', 'press_release', 'highlight',
    )
  );
  $entity_info = entity_get_info();

  $options = array();
  foreach ($entity_info['node']['bundles'] as $machine_name => $setting) {
    $options[$machine_name] = $setting['label'];
  }

  $form['osha_newsletter_allowed_bundles'] = array(
    '#attributes' => array('tabindex' => 4),
    '#type' => 'checkboxes',
    '#title' => t('Add to newsletter items of the following types'),
    '#options' => $options,
    '#default_value' => $allowed_bundles,
  );

  // Set tabindex on submit button
  $ret = system_settings_form($form);
  if (isset($ret['actions']['submit'])) {
    $ret['actions']['submit']['#attributes'] = array('tabindex' => 5);
  }

  return $ret;
}

