<?php
/**
 * @file
 * osha_calls.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function osha_calls_taxonomy_default_vocabularies() {
  return array(
    'attachment_file_type' => array(
      'name' => 'Attachment file type',
      'machine_name' => 'attachment_file_type',
      'description' => 'Type of attachments, where Description is overriden',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
