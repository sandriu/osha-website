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
  'title' => 'Healthy Workplaces Campaign',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412551785,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0e63681d-c269-4c31-9341-11543b3df00f',
  'field_banner_link' => array(),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => '3f1b3940-7699-4e24-9012-8ffb68ae40ca',
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
        'value' => 'Healthy Workplaces Campaign',
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
        'created' => 1412551785,
        'entity_uuid' => '0e63681d-c269-4c31-9341-11543b3df00f',
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:29:45 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
);
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
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:31:48 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
);
  $nodes[] = array(
  'title' => 'E-Guide on Managing Stress',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412551529,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5a2cfca1-c5d4-46ba-8519-f77f036d5f98',
  'field_banner_link' => array(),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => '264ed26f-a731-48b0-9f23-5d224b537f63',
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
        'value' => 'E-Guide on Managing Stress',
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
        'created' => 1412551529,
        'entity_uuid' => '5a2cfca1-c5d4-46ba-8519-f77f036d5f98',
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:25:29 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
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
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:24:58 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
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
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:31:12 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
);
  $nodes[] = array(
  'title' => 'Napo',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'banner',
  'language' => 'en',
  'created' => 1412551810,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e9364c32-88bb-4ab4-bba0-26380c511930',
  'field_banner_link' => array(),
  'field_image' => array(
    'en' => array(
      0 => array(
        'file_uuid' => 'cfeca8e6-f668-428c-b613-f4d2c6b3cd47',
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
        'value' => 'Napo',
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
        'created' => 1412551810,
        'entity_uuid' => 'e9364c32-88bb-4ab4-bba0-26380c511930',
        'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:30:10 +0000',
  'user_uuid' => 'a9631782-b58b-4486-a8f5-216f2b5893b2',
);
  return $nodes;
}
