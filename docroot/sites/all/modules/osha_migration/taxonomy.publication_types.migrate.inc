<?php

class MigrateOshaTaxonomyPublicationTypes extends DynamicMigration {

  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA Taxonomies'));
    $this->description = 'Populate the "Publication types" taxonomy from JSON file in osha_migration module';

    $source_file = MigrationUtil::get_source_file($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'code' => array(
          'type' => 'varchar',
          'length' => 30,
          'not null' => TRUE,
          'description' => 'Publication type code'
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceList(
      new PublicationTypesTaxonomyMigrationListJSON($source_file),
      new PublicationTypesTaxonomyMigrationItemJSON($source_file, array()),
      $this->fields()
    );

    $term_options = MigrateDestinationTerm::options('en', 'text', TRUE);
    $this->destination = new MigrateDestinationTerm(TAXONOMY_PUBLICATION_TYPES, $term_options);

    $this->addFieldMapping('field_publication_type_code', 'code');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('name', 'en');
  }

  /**
   * Called by destination right before saving.
   *
   * @param object $entity
   *   Entity to save
   * @param object $row
   *   Source row
   */
  public function prepare($entity, $row) {
    $migration = Migration::currentMigration();
    $entity_type = $migration->getDestination()->getEntityType();
    $translation_handler = entity_translation_get_handler($entity_type, $entity);
    $languages = array_keys(language_list());

    $entity->translations = $translation_handler->getTranslations();
    foreach ($languages as $language) {
      if (!empty($row->{$language})) {
        $entity->name_field[$language][0]['value'] = $row->{$language};
        /* Don't translate en (default) */
        if ($language != 'en') {
          if (!isset($entity->translations->data[$language])) {
            $translation_handler->setTranslation(array(
              'translate' => 0, 'status' => 1, 'uid' => 1,
              'language' => $language,
              'source' => 'en',
            ));
          }
        }
      }
    }
  }

  /**
   * Migration machine name.
   *
   * {@inheritdoc}
   */
  protected function generateMachineName() {
    return MIGRATION_TAXONOMY_PUBLICATION_TYPES;
  }

  function fields() {
    return array(
      'en' => 'TerText of field',
      'code' => 'Item code (PK)',
    );
  }
}

class PublicationTypesTaxonomyMigrationListJSON extends MigrateListJSON {

  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data as $item) {
      $ids[] = $item['code'];
    }
    return $ids;
  }
}

class PublicationTypesTaxonomyMigrationItemJSON extends MigrateItemJSON {
  protected $data = array();

  public function getItem($item_id) {
    if (empty($this->data)) {
      $data = $this->loadJSONUrl($this->itemUrl);
      if ($data) {
        foreach ($data as $item) {
          $this->data[$item->code] = $item;
        }
      }
    }
    return isset($this->data[$item_id]) ? $this->data[$item_id] : NULL;
  }
}
