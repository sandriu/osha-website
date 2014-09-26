<?php
/**
 * @file
 * osha_seminar.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_seminar_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'EU-OSHA Seminars',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1411653475,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e4f3c794-16cc-4148-a7d1-dc8fdb0d5c8c',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<div><img src="http://dummyimage.com/800x250/000000/fff" alt="" width="800" height="250" /></div><p><span style="font-family: Arial, Helvetica, sans; font-size: 11px; line-height: 14px; text-align: justify;">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi vitae diam diam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec fermentum mi ac arcu aliquam euismod. Praesent vulputate gravida arcu sit amet laoreet. Suspendisse nisl sapien, pretium ac pharetra eget, bibendum et ex. Sed eget lorem eu arcu pharetra ultricies. Morbi eget venenatis tortor. Ut laoreet suscipit tempus. Curabitur commodo laoreet porttitor. Vivamus feugiat maximus vestibulum. Vivamus ultricies nulla eget ipsum imperdiet, eu facilisis nibh vulputate. Phasellus malesuada sed turpis nec viverra. Nunc placerat turpis a facilisis dignissim.</span></p><div>&nbsp;</div><div><span style="font-family: Arial, Helvetica, sans; font-size: 11px; line-height: 14px; text-align: justify;">Maecenas at nibh eget leo tincidunt tempus at vitae ante. Mauris venenatis non turpis eu varius. Etiam maximus eros at mauris pulvinar eleifend vitae tempor justo. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Vestibulum eu orci cursus, ullamcorper tellus in, pulvinar purus. Aliquam eget congue lacus. Aenean malesuada blandit lorem, eu mollis velit tempus quis. Pellentesque semper cursus ipsum, bibendum convallis urna mattis eget. Vestibulum convallis diam orci, eu mollis nibh faucibus vel.</span></div>',
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
        'value' => 'EU-OSHA Seminars',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(
    'und' => array(
      0 => array(
        'tid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
        'uuid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
      ),
    ),
  ),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-25 00:00:00',
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
        'created' => 1411653475,
        'entity_uuid' => 'e4f3c794-16cc-4148-a7d1-dc8fdb0d5c8c',
        'user_uuid' => 'a6406385-a23f-4e2b-a4e6-708215f7f35c',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    666 => 666,
  ),
  'path' => array(
    'pid' => 139,
    'source' => 'node/54',
    'alias' => 'articles/eu-osha-seminars',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 975,
      'vid' => 1206,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1411742649,
      'published' => 1,
      'current' => 1,
      'title' => 'EU-OSHA Seminars',
      'timestamp' => 1411742649,
    ),
    'published' => array(
      'hid' => 975,
      'vid' => 1206,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1411742649,
      'published' => 1,
      'current' => 1,
      'title' => 'EU-OSHA Seminars',
      'timestamp' => 1411742649,
    ),
    'my_revision' => array(
      'hid' => 975,
      'vid' => 1206,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1411742649,
      'published' => 1,
      'current' => 1,
      'title' => 'EU-OSHA Seminars',
      'timestamp' => 1411742649,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-25 13:57:55 +0000',
  'user_uuid' => 'a6406385-a23f-4e2b-a4e6-708215f7f35c',
);
  return $nodes;
}
