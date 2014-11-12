<?php


/* Add new stuff for deployment of sprint-4 branch here. To avoid conflicts, add them after your name
 * Also include the ticket number, see example below
 */
// andrei

// CW-526
drush_log('Dropping field: field_related_man_pubs', 'ok');
field_delete_field('field_related_man_pubs');

drush_log('Dropping field: field_workflow_status', 'ok');
field_delete_field('field_workflow_status');

drush_log('Dropping field: field_needs_retranslation', 'ok');
field_delete_field('field_needs_retranslation');

// cristi
// dragos
drush_log('Dropping field: field_pr_related_links', 'ok');
field_delete_field('field_pr_related_links');

drush_log('Dropping field: field_pr_release_date', 'ok');
field_delete_field('field_pr_release_date');
if (module_exists('aggregator') && module_load_include('inc', 'aggregator', 'aggregator.admin')) {
  drupal_set_message('Add press releases rss feed ...');

  $form_state = array(
    'values' => array(
      'title' => 'EU-OSHA in the media',
      'url' => 'http://portal.kantarmedia.de/rss/index/1002043/100000063/1024803/9a7b629357e748080ff47e4d0db7ec57cffff3fe',
      'refresh' => 900,
      'block' => 2,
      'op' => 'Save',
    ),
  );

  drupal_form_submit('aggregator_form_feed', $form_state);
}
// claudia
// radu
