<?php
/**
 * @file
 * osha_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function osha_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Ageing and OSH',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859331,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '106bb0f7-5519-42a4-8310-5773d228a335',
  'body' => array(),
  'field_tags' => array(),
  'field_image' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Ageing and OSH',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-05 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'will be sent by Katalin by 12 Sept.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411637675,
        'entity_uuid' => '106bb0f7-5519-42a4-8310-5773d228a335',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 1,
    'source' => 'node/37',
    'alias' => 'articles/ageing-and-osh',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 1,
      'vid' => 37,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'Ageing and OSH',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 1,
      'vid' => 37,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'Ageing and OSH',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 1,
      'vid' => 37,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'Ageing and OSH',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:22:11 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Safety and Health legislation',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859186,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18ee1aad-eadb-43f9-b9de-ee47ba5d1be4',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>European Directives set out minimum requirements<a id="_anchor_1" name="_msoanchor_1" href="#_msocom_1"></a> and fundamental principles, such as the principle of prevention and risk assessment, as well as the responsibilities of employers and employees. A series of European guidelines aims to facilitate the implementation of European directives as well as European standards which are adopted by European standardisation organisations.</p><p><strong>The following sections provide information on European legislation, its implementation and other practical documents on safety and health at work arranged by topic.</strong></p><p>Further information on safety and health at work can also be found at the website of the <a href="http://ec.europa.eu/social/main.jsp?catId=148&amp;langId=en" target="_blank"><strong>European Commission, DG Employment and Social Affairs</strong></a>.</p><p>The <a href="http://eur-lex.europa.eu/legal-content/EN/TXT/?uri=COM:2014:332:FIN"><strong>EU Strategic Framework on safety and health at work</strong></a> 2014–2020 defines key strategic objectives with a view to reducing occupational accidents and diseases in the EU.</p><div>&nbsp;</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '01207304-f92c-4964-9c37-af3b27565c80',
        'uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
      ),
    ),
  ),
  'field_image' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Safety and Health legislation',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'A wide variety of Community measures in the field of safety and health at work have been adopted on the basis of Article 153 of the Treaty on the Functioning of the European Union. European directives are legally binding and have to be transposed into national laws by the Member States. ',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '18ee1aad-eadb-43f9-b9de-ee47ba5d1be4',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(
    227 => 227,
  ),
  'path' => array(
    'pid' => 2,
    'source' => 'node/38',
    'alias' => 'articles/safety-and-health-legislation',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 2,
      'vid' => 38,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Safety and Health legislation',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 2,
      'vid' => 38,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Safety and Health legislation',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 2,
      'vid' => 38,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Safety and Health legislation',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:19:46 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Emerging Risks',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859354,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20e2c054-60f4-41a6-beaf-9c083ff05a63',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>The&nbsp;<strong>European Risk Observatory</strong>&nbsp;monitors safety and health in workplaces across Europe to pick up trends, anticipate change and identify potential new risks. This information allows policy-makers to evaluate changes in technology and society and their likely impact on work. Researchers can then prioritise the emerging risks and develop prevention strategies. This means that OSH policy can adapt quickly.</p><p>Learn more about the work of the&nbsp;<a href="articles/european-risk-observatory">European Risk Observatory</a>.</p>',
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
        'value' => 'Emerging Risks',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Effective prevention of new and emerging risks requires rapid and reliable identification.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '20e2c054-60f4-41a6-beaf-9c083ff05a63',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 3,
    'source' => 'node/39',
    'alias' => 'articles/emerging-risks',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 3,
      'vid' => 39,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Emerging Risks',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 3,
      'vid' => 39,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Emerging Risks',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 3,
      'vid' => 39,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Emerging Risks',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:22:34 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Awards',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859325,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2c1489e8-077b-4b33-8e6b-f842f4363cba',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Awards Body</p>',
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
        'value' => 'Awards',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Awards summary',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '2c1489e8-077b-4b33-8e6b-f842f4363cba',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 4,
    'source' => 'node/40',
    'alias' => 'articles/awards',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 4,
      'vid' => 40,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Awards',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 4,
      'vid' => 40,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Awards',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 4,
      'vid' => 40,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Awards',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:22:05 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Surveys and statistics on OSH',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859177,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '387191b6-0baf-4823-906d-55c6b560c388',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>The surveys are the cornerstone of our work, and the results help policy-makers and researchers to identify emerging trends.</p><p>You will also find useful statistics on safety and health in the workplace in the following sources: [IT WOULD BE BETTER IF THIS 2 PARAGRAPH COULD BE MOVED BELOW THE SUBSECTIONS]</p><ul><li><a href="http://epp.eurostat.ec.europa.eu/portal/page/portal/eurostat/home//portal/page/portal/eurostat/home//portal/page/portal/eurostat/home/" target="_blank">EUROSTAT</a> website and EUROSTAT <a href="http://epp.eurostat.ec.europa.eu/portal/page/portal/eurostat/home//portal/page/portal/eurostat/home//portal/page/portal/product_details/publication?p_product_code=KS-SF-09-063" target="_blank">Labour Force Survey 2007 ad hoc module on accidents at work and work-related health problems</a></li><li>European Foundation for the Improvement of Working and Living Conditions (EUROFUND): <a href="http://www.eurofound.europa.eu/ewco/surveys/index.htm" target="_blank">European Working Conditions Surveys</a> and <a href="http://www.eurofound.europa.eu/surveys/index.htm" target="_blank">other surveys</a></li><li>DG Employment, Social Affairs and Equal Opportunities: <a href="http://ec.europa.eu/social/main.jsp?catId=706&amp;langId=en" target="_blank">improving working conditions</a></li><li><a href="http://www.meadow-project.eu/" target="_blank">MEADOW</a> - a European project (closed in 2010) designed to set out Guidelines for collecting and interpreting harmonised data at the European level on organisational change and its economic and social impacts.</li><li><a href="http://www.ilo.org/global/statistics-and-databases/lang--en/index.htm" target="_blank">ILO International Labour Organisation </a></li><li>Hämäläinen P, Saarela KL, Takala J: <a href="https://osha.europa.eu/en/press/articles/estimates-fatal-work-diseased/view">Global trend according to estimated number of occupational accidents and fatal work-related diseases at region and country level</a></li></ul><p>[LINKS TO BE CHECKED]</p>',
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
        'value' => 'Surveys and statistics on OSH',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Here you will find the results of our European surveys and opinion polls. These provide a snapshot of how workplace risks are managed and how people feel about their work environment.
',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '387191b6-0baf-4823-906d-55c6b560c388',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 5,
    'source' => 'node/41',
    'alias' => 'articles/surveys-and-statistics-osh',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 5,
      'vid' => 41,
      'nid' => 41,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Surveys and statistics on OSH',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 5,
      'vid' => 41,
      'nid' => 41,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Surveys and statistics on OSH',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 5,
      'vid' => 41,
      'nid' => 41,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Surveys and statistics on OSH',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:19:37 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'National legislation',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859193,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4e4c748b-77be-443c-843e-194de4e7a3c1',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Member States may adopt stricter rules to protect workers — but their legislation must comply with the minimum standards. As a result, national safety and health legislation varies across Europe.</p><p class="Textfo">A list of the <strong>national implementation measures</strong> can be found at the end of each directive’s abstract<a id="_anchor_1" name="_msoanchor_1" href="#_msocom_1"></a> in the EU-OSHA section on European directives [LINK]. For example, if you select the OSH framework directive (LINK<a id="_anchor_2" name="_msoanchor_2" href="#_msocom_2"></a>) you will find at the bottom of the page a link to the EUR-Lex website listing the national implementing laws for this directive.</p><p class="Textfo">More information on national occupational safety and health laws is also available in the <strong><a href="http://oshwiki.eu/wiki/Category:Main_OSH_players_-_organisations">OSHwiki articles on national systems</a></strong>.</p><p class="Textfo">Find out more about national legislation by <strong>contacting the relevant EU-OSHA Focal Point</strong> of the Member State you are interested in.</p><p class="Textfo">&nbsp;</p><p class="Textfo"><strong>&gt;&gt;&gt; create LINKs to FOPs, directives, OSH framework directive</strong></p>',
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
        'value' => 'National legislation',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'European directives set out the minimum standards for safety and health in the workplace. The EU directives are implemented through the national legislation of Member States.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411637675,
        'entity_uuid' => '4e4c748b-77be-443c-843e-194de4e7a3c1',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 6,
    'source' => 'node/42',
    'alias' => 'articles/national-legislation',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 6,
      'vid' => 42,
      'nid' => 42,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'National legislation',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 6,
      'vid' => 42,
      'nid' => 42,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'National legislation',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 6,
      'vid' => 42,
      'nid' => 42,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 0,
      'current' => 1,
      'title' => 'National legislation',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:19:53 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'European Standards',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859239,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '57d9e0dc-976e-4e5d-b792-ba007ccb98a9',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Migrate here this content</p><p>https://osha.europa.eu/en/legislation/standards</p>',
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
        'value' => 'European Standards',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
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
        'created' => 1411486704,
        'entity_uuid' => '57d9e0dc-976e-4e5d-b792-ba007ccb98a9',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 7,
    'source' => 'node/43',
    'alias' => 'articles/european-standards',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 7,
      'vid' => 43,
      'nid' => 43,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Standards',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 7,
      'vid' => 43,
      'nid' => 43,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Standards',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 7,
      'vid' => 43,
      'nid' => 43,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Standards',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:20:39 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Mainstreaming OSH into education',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859208,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5845537c-3225-403e-af90-55814b352b65',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<h2>Start young, stay safe</h2><p class="Textfo">If children start learning about safety and health as they learn to read and write, it becomes a natural part of how they work, play and live. They develop a good attitude to safety and health that will stay with them throughout their working lives.</p><div class="wysiwyg_accordion"><h3>Successful OSH education</h3><p class="Textfo">OSH is best integrated into individual subjects rather than taught as a stand-alone topic. Activity-based learning and real-life examples will help bring the message home to children and young people. Key messages can be repeated in different ways for different age-groups, whether in primary schools or vocational training colleges.</p><p class="Textfo">The <a href="publications/reports/occupational-safety-and-health-and-education-a-whole-school-approach">whole-school approach</a> is the ideal model.</p><h3>Integrating OSH into school life</h3><p class="Textfo">The whole-school approach combines education and school management. Pupils and staff work together to make the school a safe and healthy place to work and learn through:</p><ul><li>Risk education and OSH management, e.g. involving pupils in hazard spotting</li><li>Health education and promotion, e.g. healthy schools initiatives</li><li>Promoting dignity and respect for all, e.g. anti-bullying campaigns</li><li>Caring for the environment, e.g. reusing and recycling</li></ul><h3>Tips for successful integration</h3><p class="Textfo">From case studies we know what helps to make the whole-school approach work:</p><ul><li>Leadership from the head teacher to motivate staff and pupils</li><li>Involving pupils, parents and staff</li><li>Providing practical support and tools;&nbsp; the ‘<a href="http://www.napofilm.net/en/napo-for-teachers">Napo for teachers</a>’ resource has been helpful here</li><li><a href="publications/factsheets/103">Training for teachers</a></li><li>Networking between schools</li><li>Cooperation between OSH and education authorities</li><li>Being practical and linking &nbsp;risk education to subjects being taught</li></ul></div><h2>Beyond school</h2><p class="Textfo">The integration of OSH into further education is more difficult and less well developed, particularly in <a href="https://osha.europa.eu/en/publications/factsheets/91/view">universities</a>. However, the same ‘whole-institute’ model applies. Networking and working in partnership with OSH authorities are key contributors to successful integration.</p><h2>Resources</h2><p class="Textfo"><a href="http://oshwiki.eu/wiki/Mainstreaming_OSH_into_education">Read more about mainstreaming OSH into education</a>.</p><p class="Textfo"><a href="https://osha.europa.eu/en/publications/factsheets/82/view">Read our report on mainstreaming OSH into the school curriculum programmes</a></p><p class="Textfo"><a href="http://www.enetosh.net/">Network with other professionals through ENETOSH</a>.</p><p class="Textfo"><a href="http://www.napofilm.net/en/napo-for-teachers">Use Napo for teachers</a></p><p>&nbsp;</p><p><span style="font-size: large;"><strong>&gt;&gt;&gt; THE LAST PARAGRAPH SHOULD DISAPPEAR AS IT WILL BE DISPLAYED</strong></span></p><p><span style="font-size: large;"><strong>IN THE RIGHT HAND PORTLET,</strong></span></p><p><span style="font-size: large;"><strong>TO BE CONFIRMED BY PROJECT MANAGER</strong></span></p>',
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
        'value' => 'Mainstreaming OSH into education',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-05 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Mainstreaming — or integrating — OSH into education means including it systematically in classroom lessons. Ideally it become part of everyday life for pupils, students and staff. ',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '5845537c-3225-403e-af90-55814b352b65',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 8,
    'source' => 'node/44',
    'alias' => 'articles/mainstreaming-osh-education',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 8,
      'vid' => 44,
      'nid' => 44,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mainstreaming OSH into education',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 8,
      'vid' => 44,
      'nid' => 44,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mainstreaming OSH into education',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 8,
      'vid' => 44,
      'nid' => 44,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mainstreaming OSH into education',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:20:08 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
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
        'created' => 1411637675,
        'entity_uuid' => '5976d8f5-cd3a-4b9c-9b25-16e6333530f6',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-09-16 15:25:10 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'European Directives ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859279,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6f6f90f0-e453-40af-b0bd-593af4da286f',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Article&nbsp;153 of the <a href="http://eur-lex.europa.eu/collection/eu-law/treaties.html" target="_blank">Treaty on the Functioning of the European Union</a> gives the EU the authority to adopt directives in the field of safety and health at work. The Framework Directive [LINK]<strong>,</strong> with its wide scope of application, and further directives focusing on specific aspects of safety and health at workare the fundamentals of European safety and health legislation.</p><p>Member States are free to adopt stricter rules for the protection of workers when transposing EU directives into national law. Therefore, legislative requirements in the field of safety and health at work can vary across EU Member States.</p><p>Information about EU directives in this section is arranged by topic. To read a specific EU directive, please click on one of the categories below.</p><p><strong>The OSH Framework Directive</strong></p><p><strong>Workplaces, equipment, signs, personal protective equipment</strong></p><p><strong>Exposure to chemical agents and chemical safety</strong></p><p><strong>Exposure to physical hazards</strong></p><p><strong>Exposure to biological agents</strong></p><p><strong>Provisions on workload, ergonomical and psychosocial risks</strong></p><p><strong>Sector specific and worker related provisions</strong></p><p><strong>Directive summaries are available only in English, </strong>but links at the end of each summary lead to the full text of the directive in all EU languages.</p><p>In addition to the Framework Directive [link], a series of <strong>individual directives</strong> focusing on specific aspects of safety and health at work were adopted. Nevertheless, the Framework Directive continues to apply to all areas covered by the individual directives. Where individual directives contain more stringent and specific provisions, these special provisions prevail. Individual directives tailor the principles of the Framework Directive to:</p><ul type="disc"><li>specific tasks (e.g. manual handling of loads)</li><li>specific hazards at work (e.g. exposure to dangerous substances or physical agents)</li><li>specific workplaces and sectors (e.g. temporary work sites, extractive industries, fishing vessels)</li><li>specific groups of workers (e.g. pregnant women, young workers, workers with a fixed duration employment contract)</li><li>certain work-related aspects (e.g. organisation of working time)</li></ul><p>The individual directives define how to assess these risks and, in some instances, set limit values for certain substances or agents.</p><p>In addition, a series of EU directives based on Article&nbsp;114 of the Treaty on the Functioning of the European Union relate to safety and health aspects. On that legal basis, a series of technical directives under the so-called ‘New Approach’ were adopted whereby the European standardisation organisations — European Committee for Standardization (CEN), European Committee for Electrotechnical Standardization (CENELEC) and European Telecommunications Standards Institute (ETSI) — set and update European standards on a regular basis.</p><div class="wysiwyg_accordion"><h3>European Legislative Process&nbsp;</h3><p>The <a href="http://eur-lex.europa.eu/legal-content/EN/TXT/?uri=COM:2014:332:FIN" target="_blank"><strong>EU Strategic Framework on Health and Safety at Work 2014–2020</strong></a> sets out the political framework for European safety and health policy. The starting point for legislative initiatives at European level is a legislative proposal drafted by the <a href="http://ec.europa.eu/social/main.jsp?catId=148&amp;langId=en" target="_blank">European Commission</a>. Under the ‘ordinary legislative procedure’, it is the European Council and the European Parliament that adopt EU directives. In some cases, they delegate the legislative power to adapt directives to technical progress to the European Commission.</p><p>The <a href="http://ec.europa.eu/social/main.jsp?catId=329&amp;langId=en" target="_blank">European Social Partners</a> play a vital role in the European decision-making process in the field of safety and health at work, as they have to be consulted at various stages. The Treaty on the Functioning of the European Union also foresees the possibility of concluding autonomous agreements. So far, European social dialogue has resulted in the adoption of several autonomous agreements.</p><h3>Historical background on safety and health legislation</h3><p>The first European directives on safety and health at work were adopted on the basis of the general market harmonisation provisions. This was due to a lack of an explicit legislative competence in the Treaty in the field of safety and health at work until the mid-1980s. Before this occupational safety and health was seen as an annex to market harmonisation and the economic policies of the European Economic Community. For example, Directive 77/576/ EEC on the harmonisation of national laws on safety signs at the workplace and Directive 78/610/ EEC on the harmonisation of occupational exposure limits to vinyl chloride monomers were adopted on this basis.</p><p>The Single European Act 1987 was a major step forward in that it introduced a new legal provision on social policy to the Treaty aiming for ‘improvements, especially in the working environment, as regards the health and safety of workers’. By inserting this provision into the Treaty, the importance of safe working conditions was made evident. Moreover, the new Social Chapter authorised the European Commission to promote social dialogue between employers and labour representatives at European level.</p><p>With the Treaty of Amsterdam in 1997, the legislative competence in the field of European social policies was further strengthened by the incorporation of the social agreement into the Treaty. The Treaty of Lisbon — apart from the renumbering of the Articles on social policy — kept the substance of the provisions of ex Articles&nbsp;136 ff TEC (now Articles&nbsp;151 ff of the Treaty on the Functioning of the European Union).</p></div><p>&nbsp;</p><div><div>&nbsp;</div></div>',
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
        'value' => 'European Directives ',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'A directive is a legal act provided for in the EU Treaty. It is binding in its entirety and obliges Member States to transpose it into national law within the a set deadline. ',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '6f6f90f0-e453-40af-b0bd-593af4da286f',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 9,
    'source' => 'node/46',
    'alias' => 'articles/european-directives',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 9,
      'vid' => 46,
      'nid' => 46,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Directives ',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 9,
      'vid' => 46,
      'nid' => 46,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Directives ',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 9,
      'vid' => 46,
      'nid' => 46,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Directives ',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:21:19 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Mission and vision',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859202,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '857d1fbe-f8cc-4359-8cd7-8a2ebcfdd17c',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p class="Textfo">The mission statement defines what the Agency does. The vision statement explains what the Agency aims to achieve. It also provides a benchmark against which results can be assessed.</p><h2>Our mission</h2><p class="Textfo">We develop, gather and provide reliable and relevant information, analysis and tools to advance knowledge, raise awareness and exchange occupational safety and health (OSH) information and good practice which will serve the needs of those involved in OSH.</p><h2>Our vision</h2><p class="Textfo">To be a recognised leader promoting healthy and safe workplaces in Europe based on tripartism, participation and the development of an OSH risk prevention culture, to ensure a smart, sustainable, productive and inclusive economy.</p><h2>The framework<a id="_anchor_1" name="_msoanchor_1" href="file:///I:/PROJECTS/Website%20%E2%80%93%20online%20communication/EU-OSHA%20online%20strategy%202013-2014/09%20-%20Content%20preparation/00%20-%20Final%20contents/New%20contents/45-Mission%20and%20vision.docx#_msocom_1"><br /></a></h2><p class="Textfo">EU-OSHA is the European Union information agency for occupational safety and health. Our work contributes to the European Commission’s Occupational Safety and Health (OSH) Strategic Framework 2014-2020 and other relevant EU strategies and programmes.</p><div><div><div id="_com_1"><p>&nbsp;</p><p>Read our:</p><ul><li><span style="line-height: 1.538em;">Funding regulations</span></li><li><a href="publications/corporate/eu-osha-multi-annual-strategic-programme-2014-2020">Multi-annual Strategic Programme</a> and <a href="publications/corporate/2014-annual-management-plan">annual management plan</a></li></ul></div></div></div>',
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
        'value' => 'Mission and vision',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-08 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'EU-OSHA’s mission and vision statements explain its role within the mandate provided in the founding regulation. These statements are adopted by the Governing Board as part of the Agency’s Multi-annual Strategic Programme and annual management plan. They express how the Board wants the Agency to implement its mandate.',
        'format' => NULL,
      ),
    ),
  ),
  'field_thesaurus' => array(),
  'field_workflow_status' => array(),
  'metatags' => array(
    'en' => array(
      'en' => array(
        'en' => array(
          'en' => array(
            'en' => array(
              'en' => array(
                'en' => array(
                  'en' => array(
                    'en' => array(
                      'en' => array(
                        'en' => array(
                          'en' => array(
                            'en' => array(
                              'en' => array(
                                'title' => array(
                                  'value' => 'Mission and vision of EU-OSHA',
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
        ),
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => '857d1fbe-f8cc-4359-8cd7-8a2ebcfdd17c',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 64,
    'source' => 'node/47',
    'alias' => 'articles/mission-and-vision',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 10,
      'vid' => 47,
      'nid' => 47,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mission and vision',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 10,
      'vid' => 47,
      'nid' => 47,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mission and vision',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 10,
      'vid' => 47,
      'nid' => 47,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Mission and vision',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:20:02 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Inside EU-OSHA',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859538,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a065ac76-7af7-4164-b44a-596287e6eb65',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Of course, a huge part of our mission is raising awareness of OSH issues. Our <strong>press office</strong> offers all the support you need to cover OSH issues. Get in touch or <strong>read the latest stories</strong>.&nbsp;</p><p>You can also find out more about the<strong> national Focal Points w</strong>ho work with us to achieve our goals.</p><p>Or maybe you’re interested in working with us yourself? Whether you want to <strong>tender for a contract</strong> or <strong>apply for a job</strong> with us, you can find the information you need in the section.</p><p>&nbsp;</p><p><strong>&gt;&gt; create LINKS to press office, press releases, FOPs, procurement, vacancies</strong></p>',
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
        'value' => 'Inside EU-OSHA',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'At EU-OSHA, we aim to be open and transparent. Here, you can discover who we are, how we are organised and what our vision is.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'a065ac76-7af7-4164-b44a-596287e6eb65',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 11,
    'source' => 'node/48',
    'alias' => 'articles/inside-eu-osha',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 11,
      'vid' => 48,
      'nid' => 48,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Inside EU-OSHA',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 11,
      'vid' => 48,
      'nid' => 48,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Inside EU-OSHA',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 11,
      'vid' => 48,
      'nid' => 48,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Inside EU-OSHA',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:25:38 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'European Risk Observatory',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859247,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a940a49d-3ea0-4dee-b487-d301ce495610',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p><strong>Objectives</strong></p><p>As our society evolves under the <strong>influence of new technology and shifting economic and social conditions</strong>, so our workplaces, work practices and processes are constantly changing. These new situations bring with them new risks and challenges for workers and employers which in turn demand <strong>political, administrative and technical approaches </strong>that ensure high levels of safety and health at work.</p><p>The <a href="http://eur-lex.europa.eu/smartapi/cgi/sga_doc?smartapi%21celexplus%21prod%21DocNumber&amp;lg=en&amp;type_doc=COMfinal&amp;an_doc=2002&amp;nu_doc=118" target="_blank">Community Strategy on health and safety at work 2002-2006</a> identified the need to prepare for these new circumstances, and emphasised that</p><p align="center"><em>\'<strong>anticipating </strong>new and emerging risks, whether they be linked to <strong>technical innovation </strong>or caused by <strong>social change</strong>, is vital if the risks are to be brought under control.</em><br /> <em>This requires, first and foremost, <strong>ongoing observation</strong> of the risks themselves, based on the <strong>systematic collection of information and scientific opinions</strong>\'.</em></p><p>The Strategy, therefore, asked the EU-OSHA to set up an European Risk Observatory to carry out these tasks. The <a href="http://eur-lex.europa.eu/LexUriServ/LexUriServ.do?uri=COM:2007:0062:FIN:en:PDF" target="_blank">Community Strategy 2007-2012</a> reiterated the importance of risk anticipation, and asked the Agency’s Observatory to take on a range of initiatives.<br /> &nbsp;</p><p><strong>How the European Risk Observatory works</strong></p><p>The ERO adds value by <strong>gathering and analysing information</strong>, putting it in context (in particular in relation to the European social agenda and the Community Strategy), <strong>looking for trends in order to \'anticipate change\'</strong>, and communicating the key issues effectively to our <strong>target audience</strong>: <strong>policy-makers</strong> and <strong>researchers</strong>. We also aim to stimulate debate and reflection among EU-OSHA\'s stakeholders and to provide a <strong>platform for debate</strong> between experts and policy-makers at various levels.</p><p>The information need to identify new and emerging risks may come from a variety of sources, such as <strong>data from official registers</strong>, the <strong>research literature</strong>, <strong>expert forecasts </strong>or <strong>survey data</strong>. To cover all these potential sources of information, we organise our activities around four basic areas.</p><ul><li>Anticipating new and emerging risks [link]</li><li>Enterprise survey (ESENER) [link]</li><li>Fostering OSH research coordination in the EU [this text has to be confirmed, maybe to be expanded]<a id="_anchor_1" name="_msoanchor_1" href="#_msocom_1"><br /></a></li></ul><p align="left">&nbsp;</p><p align="left">&nbsp;</p><div><hr align="left" size="1" width="33%" /></div>',
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
        'value' => 'European Risk Observatory',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'The aim of EU-OSHA’s European Risk Observatory (ERO) is to identify new and emerging risks in occupational safety and health, in order to improve the timeliness and effectiveness of preventive measures. To achieve this aim, the ERO provides an overview of safety and health at work in Europe, describes the trends and underlying factors, and anticipates changes in work and their likely impact on occupational safety and health',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'a940a49d-3ea0-4dee-b487-d301ce495610',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 12,
    'source' => 'node/49',
    'alias' => 'articles/european-risk-observatory',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 12,
      'vid' => 49,
      'nid' => 49,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Risk Observatory',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 12,
      'vid' => 49,
      'nid' => 49,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Risk Observatory',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 12,
      'vid' => 49,
      'nid' => 49,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'European Risk Observatory',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:20:47 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Themes',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859337,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bf53c93b-3db2-40dc-9f76-79de045897d2',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>The subjects covered are fast-changing areas of OSH, so sign up to our <strong>alert service</strong> if you would like to be kept up to date.</p><p>You can also find more OSH-themed information on <strong><a href="http://oshwiki.eu/wiki/" target="_blank">OSHwiki</a></strong>.</p><p>&nbsp;</p><p>&gt;&gt;&gt; LINK to alert service</p>',
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
        'value' => 'Themes',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Browse our current OSH themes. Each section brings together useful information on a particular topic, making finding what you need quick and easy.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'bf53c93b-3db2-40dc-9f76-79de045897d2',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 13,
    'source' => 'node/50',
    'alias' => 'articles/themes',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 13,
      'vid' => 50,
      'nid' => 50,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Themes',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 13,
      'vid' => 50,
      'nid' => 50,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Themes',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 13,
      'vid' => 50,
      'nid' => 50,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Themes',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:22:17 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Campaigns',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859311,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd5745241-8849-44c4-8adb-2a07d1407afb',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>That message is — good management of OSH is good for business. We help you to promote it by making practical guides and tools freely available. Each campaign also features the Good Practice Awards and the Healthy Workplaces Film Award. The campaigns are now the largest of their kind in the world. Why not join us and use our online Campaign Toolkit to run your own campaign?</p>',
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
        'value' => 'Campaigns',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'The Healthy Workplaces Campaigns are our flagship awareness-raising activity. They are the main way of getting our message to workplaces, particularly small organisations, across Europe.',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'd5745241-8849-44c4-8adb-2a07d1407afb',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 14,
    'source' => 'node/51',
    'alias' => 'articles/campaigns',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 14,
      'vid' => 51,
      'nid' => 51,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Campaigns',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 14,
      'vid' => 51,
      'nid' => 51,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Campaigns',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 14,
      'vid' => 51,
      'nid' => 51,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Campaigns',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:21:51 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Leadership and worker participation',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859214,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dc21d794-563b-4ef2-aaac-d0e2dcdfb18f',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<div class="wysiwyg_accordion"><h3>Reducing risk from the top down</h3><p class="Textfo">An enterprise’s leaders — senior management, directors and/or the board — are in a position to prevent accidents and ill health in the workplace. They can do this by:</p><ul><li>Committing to and communicating an effective OSH management strategy</li><li>Developing robust safety and health management systems</li><li>Monitoring the performance of those systems</li><li>Setting a good example by following all safety procedures at all times</li><li>Motivating staff to participate in ensuring good safety and health</li></ul><h3>Paying the price for poor leadership</h3><p class="Textfo">Ineffective or non-existent leadership on OSH can result in accidents or even fatalities as well as poor mental and physical health among workers. It can damage a company’s reputation. Poor leadership can, in fact, have significant financial costs as a result of, for example, sick days, wasted time and compensation payments.</p><p class="Textfo">Good OSH leadership, on the other hand:</p><ul><li>Prevents accidents and illness</li><li>Increases productivity and efficiency</li><li>Improves employee morale</li><li>Helps the business to win new contracts and attract high-quality employees</li></ul><h3>Taking the lead on safety and health</h3><p class="Textfo">There are some simple steps you can take to make sure that your organisation benefits from good OSH leadership. Here are some practical tips, based on <a href="http://www.hse.gov.uk/pubns/indg417.pdf" target="_blank">a guide developed by the British Health and Safety Executive</a>:</p><ul><li>Carry out regular risk assessments and act on the results</li><li>Always consider the safety and health implications of introducing new members of staff, processes and working methods</li><li>Visible leadership is effective leadership. Make sure leaders make regular visits to the ‘shop floor’ of your organisation to talk to employees about OSH problems and solutions</li><li>Demonstrate commitment by making sure that safety and health issues are always on the agenda at board meetings</li><li>Provide safety and health training to all leaders, promoting a greater awareness of the value of OSH</li></ul><h3>Working together — getting employees involved</h3><p class="Textfo">One of the keys to good OSH leadership is getting workers involved. Employers have a legal duty to consult employees on safety and health issues. But there are benefits to going beyond the minimum requirements. OSH management will be more likely to succeed if it encourages the active participation of workers and sets up a dialogue between employees and management.</p><p class="Textfo">In 2012, the Agency run a two year campaign on this topic, called Workplaces Campaign 2012–2013, Working Together for Risk Prevention<span style="font-size: large;"> [LINK]</span>.</p><p class="Textfo">This campaign concluded with a benchmarking event where campaign partners exchanged examples of good practice, with workshops on topics such as ‘Leadership training’ and ‘The safety and health culture of an organisation’. Read a summary of the event<span style="font-size: large; line-height: 1.538em;">&nbsp;</span><span style="font-size: large; line-height: 1.538em;">[LINK]</span><span style="line-height: 1.538em;">.</span></p><p class="Textfo">&nbsp;</p><p class="Textfo"><span style="font-size: x-large;">ADD LINK TO CAMPAIGN RISK PREV. SECTION AND SOS&nbsp;https://osha.europa.eu/en/seminars/benchmarking-event-summary.pdf</span></p></div><p>&gt;&gt; <strong>Link summary of the event</strong> to the migrated content of https://osha.europa.eu/en/seminars/benchmarking-event-summary.pdf</p>',
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
        'value' => 'Leadership and worker participation',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-05 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Strong, effective and visible leadership is vital to good workplace safety and health. And, in turn, good safety and health is essential to the success of a business. Protecting employees from accidents and ill health is not only a legal and ethical duty — it’s a sign of a business that is likely to grow and thrive.',
        'format' => NULL,
      ),
    ),
  ),
  'field_thesaurus' => array(),
  'field_workflow_status' => array(),
  'metatags' => array(
    'en' => array(
      'en' => array(
        'en' => array(
          'en' => array(
            'en' => array(
              'en' => array(
                'en' => array(
                  'en' => array(
                    'en' => array(
                      'en' => array(
                        'en' => array(
                          'en' => array(
                            'en' => array(
                              'en' => array(
                                'title' => array(
                                  'value' => 'Leadership and worker participation',
                                ),
                                'description' => array(
                                  'value' => 'Good leadership is vital for effective safety and health management. Find out how strong and effective management can benefit your business and safeguard your employees ',
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
        ),
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'dc21d794-563b-4ef2-aaac-d0e2dcdfb18f',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 15,
    'source' => 'node/52',
    'alias' => 'articles/leadership-and-worker-participation',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 15,
      'vid' => 52,
      'nid' => 52,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Leadership and worker participation',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 15,
      'vid' => 52,
      'nid' => 52,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Leadership and worker participation',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 15,
      'vid' => 52,
      'nid' => 52,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Leadership and worker participation',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:20:14 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Green Jobs and OSH',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859343,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e454a870-6856-42df-9fe9-dba700f05282',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<div class="wysiwyg_accordion"><h3>What are green jobs?</h3><p>Green jobs covers a wide range of different jobs in different sectors, and involves a diverse workforce. There are many different definitions of the term, such as the ones by the <a href="http://www.unep.org/PDF/UNEPGreenjobs_report08.pdf" target="_blank">United Nations Environment Programme</a>, the <a href="http://eur-lex.europa.eu/LexUriServ/LexUriServ.do?uri=SWD:2012:0092:FIN:EN:PDF" target="_blank">European Commission</a>&nbsp;or <a href="http://epp.eurostat.ec.europa.eu/cache/ITY_OFFPUB/KS-RA-09-012/EN/KS-RA-09-012-EN.PDF" target="_blank">Eurostat</a>. But green jobs can be understood as contributing, in some way, to the preservation or restoration of the environment. They can include jobs that help to protect ecosystems and biodiversity, or reduce consumption of energy and raw materials, or reduce waste and pollution. Our purpose at EU-OSHA is to raise awareness of the need for good occupational safety and health (OSH) in these jobs.</p><p>Green jobs need to provide safe, healthy and decent working conditions in order to contribute to a truly smart, sustainable and inclusive growth and meet the objectives of the <a href="http://eur-lex.europa.eu/LexUriServ/LexUriServ.do?uri=COM:2010:2020:FIN:EN:PDF" target="_blank">European Commission\'s Europe 2020 Strategy</a>.</p><h3>How is the \'green economy\' growing?</h3><p>The Europe 2020 Strategy stresses the need for growth to be sustainable, building a low-carbon, resource-efficient economy. To help make this happen, the EU has set itself targets for reducing greenhouse gas emissions, increasing the share of renewable sources in meeting Europe\'s energy needs, and increasing energy efficiency. Meeting these objectives will result in rapid growth in the \'green economy\' – for example, the targets to increase renewable energy and energy efficency by 20%, compared to 1990 levels, is expected to lead to over 1 million new jobs in the EU. Solar power, wind energy, biomass technology and waste recycling are the areas of the green economy that are experiencing the most rapid growth.</p><h3>Why is it important to consider OSH in green jobs?</h3><p>We tend to associate the word \'green\' with safety – but what is good for the environment is not necessarily good for the health and safety of workers who are employed in green jobs. In some cases already, we have seen new legislation and technologies, designed to protect the environment, resulting in workers being put at greater risk. Reducing the amount of waste being sent to landfill, for example, has resulted in higher rates of accidents and illnesses among workers whose job it is to process it.</p><p>The new technologies or working processes associated with green jobs can lead to new hazards, which call for new combinations of skills to deal with them: the \'old\' OSH knowledge cannot simply be transferred to them. Installing a solar water heater, for example, involves combining the skills of a roofer, a plumber and an electrician.</p><p>The speed at which the green economy is expected to expand could lead to skills gaps, with inexperienced workers involved in processes that they have not been trained for, and who therefore put their safety and health at risk. There may also be a stronger polarisation of the workforce towards skills, with low skilled workers pushed to accept poorer working conditions. Last but not least, economic and political pressure could lead to OSH concerns being overlooked.</p><p>If green jobs are to be truly sustainable we need to make sure that they are to the benefit of workers\' safety and health, as well as of the environment. In the green economy, as elsewhere, good OSH plays a vital role in increasing competitiveness and productivity. In this fast-developing area, we need to ensure that what is good for the environment is good for workers too.</p><h3>What is EU-OSHA doing to prevent new and emerging OSH risks in green jobs?</h3><p>Given how quickly the green economy is expected to grow, it is important that we anticipate any new or emerging OSH risks in relation to green jobs before they appear. That is why EU-OSHA has carried out a detailed foresight study, looking at how work in green jobs is likely to develop by 2020, and what future OSH challenges this may bring. The study has identified a number of possible future scenarios, given developments in green technologies, under different economic and social conditions.</p><p>The aim is to draw attention to potential OSH risks in this area, and to provide EU policymakers, in particular, with tools to help them shape the workplaces of tomorrow, and keep Europe\'s workers safe and healthy.</p></div>',
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
        'value' => 'Green Jobs and OSH',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'The EU is working hard to balance economic growth with the need to protect the environment, and has set itself challenging targets for reducing greenhouse gas emissions, increasing energy efficiency and promoting renewable energy, and reducing waste. This has given rise to a wide range of green jobs – jobs which contribute to preserving the environment, or restoring it to what it was. If they are to be truly sustainable, though, we need to make sure that these jobs provide safe, healthy and decent working conditions. Green jobs need to be good for workers, as well as good for the environment.
',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'e454a870-6856-42df-9fe9-dba700f05282',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 16,
    'source' => 'node/53',
    'alias' => 'articles/green-jobs-and-osh',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 16,
      'vid' => 53,
      'nid' => 53,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Green Jobs and OSH',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 16,
      'vid' => 53,
      'nid' => 53,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Green Jobs and OSH',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 16,
      'vid' => 53,
      'nid' => 53,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Green Jobs and OSH',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:22:23 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Tools and resources',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859172,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f3fc72f9-56f7-4026-a707-9b45dccef67a',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>OiRA and the online tools simplify the assessment and management of safety and health risks in the workplace. OSHwiki and our publications are rich sources of information on all aspects of OSH. And Napo is an OSH champion and makes everyone smile!</p>',
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
        'value' => 'Tools and resources',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-04 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'Here you will find key resources for raising awareness and managing risks: OiRA, OSHwiki, Napo films and Napo for teachers, Publications and online tools.
',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'f3fc72f9-56f7-4026-a707-9b45dccef67a',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 10,
    'source' => 'node/54',
    'alias' => 'articles/tools-and-resources',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 17,
      'vid' => 54,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Tools and resources',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 17,
      'vid' => 54,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Tools and resources',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 17,
      'vid' => 54,
      'nid' => 54,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Tools and resources',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:19:32 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Careers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859305,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f4afeb3b-6a7f-4e28-ac56-0d1b9746c5b3',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p class="Textfo"><span style="line-height: 1.538em;">Find out more about a career with the European Union at </span><a style="line-height: 1.538em;" href="http://europa.eu/epso/index_en.htm">the European Personnel Selection Office (EPSO) website</a><span style="line-height: 1.538em;">.</span></p><h1><span style="font-size: medium;">Who we employ</span></h1><p class="Textfo">Careers at EU-OSHA are open to nationals of the 28 European Union (EU) member states plus Iceland, Liechtenstein and Norway (parties of the EEA agreement).</p><p class="Textfo">EU-OSHA is an equal opportunities employer. We consider candidates for employment without distinction on the grounds of age, race, political, philosophical or religious conviction, gender or sexual orientation and regardless of disabilities, marital status or family situation.&nbsp;</p><h1 style="line-height: 20.0063037872314px;"><span style="font-size: medium;">Job vacancies</span></h1>',
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
        'value' => 'Careers',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-16 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'At EU-OSHA, our staff enjoy a stimulating and multinational work environment. Our offices are located in the culturally vibrant city of Bilbao. There are all kinds of posts at EU-OSHA, but all our employees — from project managers to communications officers and administrators — have the skills, passion and enthusiasm we need to help us make Europe a safer, healthier and more productive place to work.',
        'format' => NULL,
      ),
    ),
  ),
  'field_thesaurus' => array(),
  'field_workflow_status' => array(),
  'metatags' => array(
    'en' => array(
      'en' => array(
        'en' => array(
          'en' => array(
            'en' => array(
              'en' => array(
                'en' => array(
                  'en' => array(
                    'en' => array(
                      'en' => array(
                        'en' => array(
                          'en' => array(
                            'en' => array(
                              'en' => array(
                                'title' => array(
                                  'value' => 'Jobs',
                                ),
                                'description' => array(
                                  'value' => 'All job vacancies at EU-OSHA',
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
        ),
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'f4afeb3b-6a7f-4e28-ac56-0d1b9746c5b3',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 72,
    'source' => 'node/55',
    'alias' => 'articles/careers',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 18,
      'vid' => 55,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Careers',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 18,
      'vid' => 55,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Careers',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 18,
      'vid' => 55,
      'nid' => 55,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Careers',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:21:45 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  $nodes[] = array(
  'title' => 'Benefits of OSH and cost of poor OSH',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410859318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fd81ac64-3deb-4118-b4aa-b499e0e2e576',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<div class="wysiwyg_accordion"><h3>The big picture</h3><p class="Textfo">Everyone from individual workers to national health systems loses out when OSH is neglected. But this means that everyone can benefit from better policies and practices.</p><p class="Textfo">Countries with poor workplace safety and health systems use valuable resources dealing with avoidable injuries and illnesses. A strong national strategy leads to numerous benefits, such as:</p><ul><li>improved productivity through less sickness absence</li><li>cutting healthcare costs</li><li>keeping older workers in employment</li><li>stimulating more efficient working methods and technologies</li><li>reducing the number of people who have to cut their hours to care for a family member</li></ul><h3>Getting a clearer view</h3><p class="Textfo">It’s vital that policy-makers understand the costs of poor or non-existent OSH. Some are obvious — lost working days and compensation payments, for example. Some, though, are harder to estimate, such as the cost for human suffering. The economic effects on society of workplace accidents and work-related injuries can be hidden, like lower staff morale or lost clients and contracts.</p><p class="Textfo">Estimates vary — which is one reason why more research is needed — but typically, for most countries, the costs of accidents at work and occupational ill health range from 2.6% to 3.8% of GDP.</p><p class="Textfo">EU-OSHA wants policy-makers to have access to the most accurate figures possible. That’s why we have recently published <a href="/publications/reports/executive-summary-estimating-the-cost-of-accidents-and-ill-health-at-work">a report comparing the best national studies</a> on the costs of poor OSH. The report is the starting point for a large-scale project on estimating the costs of poor OSH across Europe.</p><h3>The benefits for business</h3><p class="Textfo">Not only does poor safety and health cost companies money, but good OSH pays dividends. Business with higher safety and health standards are more successful and more sustainable.</p><p class="Textfo">Studies estimate that for every euro invested in OSH, there is a return of 2.2 euros <a id="_anchor_1" name="_msoanchor_1" href="file:///I:/PROJECTS/Website%20%E2%80%93%20online%20communication/EU-OSHA%20online%20strategy%202013-2014/09%20-%20Content%20preparation/00%20-%20Final%20contents/Already%20online/06-Benefits-of-OSH-SEP.docx#_msocom_1">[link to an external report that keeps on being moved - <span style="font-size: x-large;">SHALL WE SAVE IT IN OUR WEBSITE????</span></a><a id="_anchor_2" name="_msoanchor_2" href="file:///I:/PROJECTS/Website%20%E2%80%93%20online%20communication/EU-OSHA%20online%20strategy%202013-2014/09%20-%20Content%20preparation/00%20-%20Final%20contents/Already%20online/06-Benefits-of-OSH-SEP.docx#_msocom_2">]</a>&nbsp;and that the cost–benefit ratio of improving safety and health is favourable</p><p class="Textfo">The costs of poor OSH can be a particular burden for small enterprises. Our recent report&nbsp;<a id="_anchor_1" style="line-height: 1.538em;" name="_msoanchor_1" href="file:///I:/PROJECTS/Website%20%E2%80%93%20online%20communication/EU-OSHA%20online%20strategy%202013-2014/09%20-%20Content%20preparation/00%20-%20Final%20contents/Already%20online/06-Benefits-of-OSH-SEP.docx#_msocom_1">[STILL TO BE PUBLISHED</a><a id="_anchor_2" style="line-height: 1.538em;" name="_msoanchor_2" href="file:///I:/PROJECTS/Website%20%E2%80%93%20online%20communication/EU-OSHA%20online%20strategy%202013-2014/09%20-%20Content%20preparation/00%20-%20Final%20contents/Already%20online/06-Benefits-of-OSH-SEP.docx#_msocom_2">]</a><span style="line-height: 1.538em;">&nbsp;</span><span style="line-height: 1.538em;">shows how good OSH can play a major role enhancing the performance of SMEs</span></p><p class="Textfo">The economic advantages of good OSH for businesses large and small are significant. To give just a few examples, good workplace safety and health:</p><ul><li>improves workers’ productivity</li><li>cuts down on absenteeism</li><li>reduces compensation payments</li><li>meets the requirements of public and private sector contractors</li></ul><p class="Textfo">Taking action could bring significant benefits to your business. Find out more about <a href="node/570">implementing improvements and managing risks</a>.</p><h3>Economic incentives</h3><p class="Textfo">Across Europe, schemes have been put in place to reward organisations financially for having safe and healthy workplaces. These include:</p><ul><li>lower insurance premiums</li><li>tax breaks</li><li>state subsidies and grants</li></ul><p class="Textfo">One example is the German butchery sector. Participating companies had their premiums reduced if they promoted safety, for example by buying safety knives or giving safety training to drivers. The scheme resulted in:</p><ul><li>1,000 fewer reportable accidents per year for the sector in Germany</li><li>a reduction in costs valued at 40&nbsp;million euros in six years</li><li>a saving of 4.81 euros for every euro invested</li></ul><p class="Textfo">For insurers, offering such schemes can help to reduce the number, severity and cost of claims.</p></div><p class="Textfo">Find out more about economic incentives and how they can be introduced:</p><ul><li><a href="https://osha.europa.eu/en/publications/literature_reviews/guide-economic-incentives/view?searchterm=">How to create economic incentives in occupational safety and health: A practical guide </a></li><li><a href="https://osha.europa.eu/en/publications/reports/economic_incentives_TE3109255ENC/view?searchterm=">Economic incentives to improve occupational safety and health: a review from the European perspective </a></li><li><a href="http://oshwiki.eu/wiki/External_economic_incentives_for_prevention">OSHwiki: economic incentives</a></li></ul><p><span style="font-size: x-large;"><strong>THE LAST PARAGRAPH SHOULD DISAPPEAR AS IT WILL BE DISPLAYED </strong></span></p><p><span style="font-size: x-large;"><strong>IN THE RIGHT HAND PORTLET, </strong></span></p><p><span style="font-size: x-large;"><strong>TO BE CONFIRMED BY PROJECT MANAGER</strong></span></p><p>&nbsp;</p><p><span style="font-size: x-large;"><strong>check link to OiRA (migrated content) &gt;&gt;&gt; for BM (or shall we rentranslate?)</strong></span></p><p>&nbsp;</p>',
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
        'value' => 'Benefits of OSH and cost of poor OSH',
        'format' => NULL,
      ),
    ),
  ),
  'field_activity' => array(),
  'field_article_type' => array(),
  'field_nace_codes' => array(),
  'field_publication_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-05 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_related_oshwiki_articles' => array(),
  'field_summary' => array(
    'en' => array(
      0 => array(
        'value' => 'In tough economic times, it’s important to remember that poor workplace safety and health costs money. What’s more, case studies show that good OSH management in a business is linked to improved performance and profitability. ',
        'format' => NULL,
      ),
    ),
  ),
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
        'created' => 1411486704,
        'entity_uuid' => 'fd81ac64-3deb-4118-b4aa-b499e0e2e576',
        'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
      ),
    ),
  ),
  'comment_count' => 0,
  'workbench_access' => array(),
  'path' => array(
    'pid' => 73,
    'source' => 'node/56',
    'alias' => 'articles/benefits-osh-and-cost-poor-osh',
    'language' => 'en',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 19,
      'vid' => 56,
      'nid' => 56,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Benefits of OSH and cost of poor OSH',
      'timestamp' => 1411644491,
    ),
    'published' => array(
      'hid' => 19,
      'vid' => 56,
      'nid' => 56,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Benefits of OSH and cost of poor OSH',
      'timestamp' => 1411644491,
    ),
    'my_revision' => array(
      'hid' => 19,
      'vid' => 56,
      'nid' => 56,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1411644491,
      'published' => 1,
      'current' => 1,
      'title' => 'Benefits of OSH and cost of poor OSH',
      'timestamp' => 1411644491,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-16 09:21:58 +0000',
  'user_uuid' => '41348f27-9d12-4a82-892c-ed0e8403b61a',
);
  return $nodes;
}
