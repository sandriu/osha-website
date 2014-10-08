<?php
/**
 * @file
 * osha_content_edw.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_content_edw_uuid_features_default_content() {
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:29:45 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:31:48 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
);
  $nodes[] = array(
  'title' => 'OSHMail newsletter',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1410881110,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5976d8f5-cd3a-4b9c-9b25-16e6333530f6',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '',
        'summary' => NULL,
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'OSHMail newsletter',
        'format' => NULL,
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
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1411633981,
        'entity_uuid' => '5976d8f5-cd3a-4b9c-9b25-16e6333530f6',
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-09-16 15:25:10 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:25:29 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
);
  $nodes[] = array(
  'title' => 'Procurement',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1412670137,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7cd1b860-8554-45db-8f30-237e09ff614e',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.538em;">For its organisation and functioning, EU-OSHA is in constant need of goods and services. Tendering is the structured way to consult the market for the purchase of these goods and services.</span></p><p>The purpose of competitive tendering for awarding contracts is twofold:</p><ul><li><span style="line-height: 1.538em;">to ensure the transparency of operations;</span></li><li><span style="line-height: 1.538em;">to obtain the desired quality of services, supplies and works at the best possible price.&nbsp;</span></li></ul><p>The applicable regulations, namely Directive 2004/18/EC and Commission Regulation No 2342/2002, oblige EU-OSHA to guarantee the widest possible participation, on equal terms, in tender procedures and contracts.</p><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_image' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Procurement',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(
    'und' => array(
      0 => array(
        'tid' => '01207304-f92c-4964-9c37-af3b27565c80',
        'uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
      ),
    ),
  ),
  'field_archived' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_article_type' => array(
    'und' => array(
      0 => array(
        'tid' => '01207304-f92c-4964-9c37-af3b27565c80',
        'uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
      ),
    ),
  ),
  'field_expiration_date' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-10-07 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(),
  'field_thesaurus' => array(),
  'field_workflow_status' => array(),
  'field_wiki_categories' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
        'created' => 1412670137,
        'entity_uuid' => '7cd1b860-8554-45db-8f30-237e09ff614e',
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    824 => 824,
  ),
  'path' => array(
    'pid' => 120,
    'source' => 'node/55',
    'alias' => 'articles/procurement',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 58,
      'vid' => 64,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1412776844,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412776844,
    ),
    'published' => array(
      'hid' => 58,
      'vid' => 64,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1412776844,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412776844,
    ),
    'my_revision' => array(
      'hid' => 58,
      'vid' => 64,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1412776844,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412776844,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-10-07 08:22:17 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:24:58 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 13:31:12 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
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
        'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-05 23:30:10 +0000',
  'user_uuid' => 'd515948d-5953-4803-853a-6966fc6cdc58',
);
  return $nodes;
}
