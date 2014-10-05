<?php
/**
 * @file
 * osha_homepage.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_homepage_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'OiRA',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412515908,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '261d7273-32ed-4458-9b82-b3c6643cd9f2',
  'field_banner_link' => array(
    'en' => array(
      0 => array(
        'url' => 'http://www.oiraproject.eu',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => '6e61e86d-72ab-480c-9815-96e875278458',
        'width' => 195,
        'height' => 160,
      ),
    ),
  ),
  'field_show_in_footer' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_show_in_top_banner' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'OiRA',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412515908,
        'entity_uuid' => '261d7273-32ed-4458-9b82-b3c6643cd9f2',
        'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    'main-menu' => 'main-menu',
  ),
  'date' => '2014-10-05 13:31:48 +0000',
  'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
);
  $nodes[] = array(
  'title' => 'Making Europe a more productive place to work',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412515498,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'df711256-ced1-45ec-9878-5d3a491e225a',
  'field_banner_link' => array(
    'en' => array(
      0 => array(
        'url' => 'http://osha.europa.eu',
        'title' => 'Want to know how?',
        'attributes' => array(),
      ),
    ),
  ),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => '10c5c044-6113-4c38-85f3-b7231f4887f4',
        'width' => 820,
        'height' => 286,
      ),
    ),
  ),
  'field_show_in_footer' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_show_in_top_banner' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Making Europe a more productive place to work',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412515498,
        'entity_uuid' => 'df711256-ced1-45ec-9878-5d3a491e225a',
        'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    'main-menu' => 'main-menu',
  ),
  'date' => '2014-10-05 13:24:58 +0000',
  'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
);
  $nodes[] = array(
  'title' => 'OSHWiki',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412515872,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e78930ab-55aa-4f1c-be2b-d1dd82d95a82',
  'field_banner_link' => array(
    'en' => array(
      0 => array(
        'url' => 'http://oshwiki.eu',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => 'd07b95bc-a53b-4d55-8ac1-da18a2833107',
        'width' => 195,
        'height' => 160,
      ),
    ),
  ),
  'field_show_in_footer' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_show_in_top_banner' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'OSHWiki',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412515872,
        'entity_uuid' => 'e78930ab-55aa-4f1c-be2b-d1dd82d95a82',
        'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    'main-menu' => 'main-menu',
  ),
  'date' => '2014-10-05 13:31:12 +0000',
  'user_uuid' => '4d2e9a9e-45f6-4790-9e09-fb37fb2502ec',
);
  return $nodes;
}
