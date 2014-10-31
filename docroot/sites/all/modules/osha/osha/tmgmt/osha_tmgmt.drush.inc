<?php

/**
 * Implements COMMANDFILE_drush_command().
 */
function osha_tmgmt_drush_command() {
  $items = array();
  $items['osha-tmgmt-statistics'] = array(
    'description' => 'Generate character/page count statistics for nodes',
    'aliases' => array('oshstats'),
    'examples' => array(),
    'arguments' => array(),
    'options' => array(),
    'sections' => array(),
  );
  $items['osha-tmgmt-retranslate-validate'] = array(
    'description' => 'Check if all translations of node have the same structure',
    'aliases' => array('oshrtv'),
    'examples' => array(),
    'arguments' => array('nid' => 'The node id'),
    'options' => array(),
    'sections' => array(),
  );
  return $items;
}

/**
 * Implements COMMANDFILE_drush_help().
 */
function osha_tmgmt_drush_help($section) {
  switch ($section) {
    case 'osha-tmgmt-statistics':
      return 'This command will create a group of test users assigned to the workflow roles';
    case 'osha-tmgmt-retranslate-validate':
      return 'This command will check if all translations of a node have a the same HTML structure of the body field';
  }
  return NULL;
}

function drush_osha_tmgmt_statistics() {
  $rows = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', array(
        'article', 'banner', 'page', 'blog', 'calls', 'highlight',
        'job_vacancies', 'news', 'press_release', 'publication', 'seminar',
      )
    )
    ->execute()
    ->fetchAllAssoc('nid');
  drush_log(
    sprintf(
      'Computing character/page count for %s nodes, this might take a while ...',
      count($rows)
    ), 'warning'
  );
  foreach ($rows as $row) {
    $node = node_load($row->nid);
    OshaTMGMTStatistics::computeEntityStatistics($node, 'node');
    $fake = new stdClass();
    $fake->id = $node->nid;
    $fake->nid = $node->nid;
    $fake->vid = $node->vid;
    $fake->field_character_count[LANGUAGE_NONE][0]['value'] = $node->character_count;
    $fake->field_page_count[LANGUAGE_NONE][0]['value'] = $node->page_count;
    $fake->bundle = $node->type;
    $fake->type = $node->type;
    field_attach_update('node', $fake);
  }
}

function drush_osha_tmgmt_retranslate_validate($nid) {
  $vid = OshaTMGMTRetranslate::get_latest_clean_revision($nid);
  $node = node_load($nid, $vid);
  $orig_lang = $node->translations->original;
  $orig_structure = OshaTMGMTRetranslate::getHTMLStructure($node->body[$orig_lang][0]['value']);
  foreach (array_keys($node->body) as $lang) {
    $html = $node->body[$lang][0]['value'];
    $diffs = array_diff_assoc($orig_structure, OshaTMGMTRetranslate::getHTMLStructure($html));
    if (!empty($diffs)) {
      $first_diff = current(array_keys($diffs));
      drush_log(
        sprintf(
          'Node %s, revision %s cannot be re-translated in language %s. Different structure starting at %s[id="%s"].',
          $nid, $vid, $lang, $diffs[$first_diff], $first_diff
      ), 'warning');
    }
  }
}