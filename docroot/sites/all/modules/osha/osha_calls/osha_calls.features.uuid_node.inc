<?php
/**
 * @file
 * osha_calls.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_calls_uuid_features_default_content() {
  $nodes = array();

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
        'tid' => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
        'uuid' => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
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
        'tid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
        'uuid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
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
        'user_uuid' => '41714f33-79ca-4cd9-ac7d-573609636be8',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    824 => 824,
  ),
  'path' => array(
    'pid' => 673,
    'source' => 'node/87',
    'alias' => 'articles/procurement',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 81,
      'vid' => 88,
      'nid' => 87,
      'from_state' => 'published',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1412670189,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412670189,
    ),
    'published' => array(
      'hid' => 81,
      'vid' => 88,
      'nid' => 87,
      'from_state' => 'published',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1412670189,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412670189,
    ),
    'my_revision' => array(
      'hid' => 81,
      'vid' => 88,
      'nid' => 87,
      'from_state' => 'published',
      'state' => 'published',
      'uid' => 1,
      'stamp' => 1412670189,
      'published' => 1,
      'current' => 1,
      'title' => 'Procurement',
      'timestamp' => 1412670189,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-10-07 08:22:17 +0000',
  'user_uuid' => '41714f33-79ca-4cd9-ac7d-573609636be8',
);
  return $nodes;
}
