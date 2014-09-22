<?php
/**
 * @file
 * osha_newsletter.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_newsletter_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'OSHMail newsletter',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '927aecd5-0b94-4d01-8745-61afa8d34ca7',
  'type' => 'page',
  'language' => 'en',
  'created' => 1410881110,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5976d8f5-cd3a-4b9c-9b25-16e6333530f6',
  'revision_uid' => 0,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'full_html',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'OSHMail newsletter',
        'format' => NULL,
        'safe_value' => 'OSHMail newsletter',
      ),
    ),
  ),
  'field_activity' => array(),
  'field_workflow_status' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 20,
        'language' => 'en',
        'source' => '',
        'uid' => 0,
        'status' => 1,
        'translate' => 0,
        'created' => 1410881110,
        'changed' => 1410881110,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-09-16 15:25:10 +0000',
);
  return $nodes;
}
