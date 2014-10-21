<?php

class MigrateOshaTaxonomyLegislationCategories extends DynamicMigration {

  private $row_order = 0;

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA Taxonomies'));
    $this->description = 'Populate the "Legislation categories" taxonomy from JSON file in osha_migration module';

    /* Remove limits on time/memory, slower machines will fail */
    $this->timeLimit = 0;
    $this->memoryLimit = PHP_INT_MAX;

    $source_file = MigrationUtil::getSourceFile($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'code_directives' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Directive category code',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceList(
      new OSHAMigrationListJSON($source_file, 'code_directives'),
      new OSHATaxonomyMigrationItemJSON($source_file, 'code_directives'),
      array(
        'en' => 'Term text in english',
        'code_directives' => 'Term code',
      )
    );

    $this->destination = new MigrateDestinationTerm(OSHA_TAXONOMIES_LEGISLATION_CATEGORY);

    $this->addFieldMapping('field_directive_category_code', 'code_directives');
    $this->addFieldMapping('field_guideline_category_code', 'code_guidelines');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('name', 'en');

    $this->addUnmigratedDestinations(array(
      'description',
      'parent',
      'parent_name',
      'weight',
      'description_field',
      'description_field:summary',
      'description_field:format',
      'description_field:language',
      'field_directive_category_code:language',
      'field_guideline_category_code:language',
      'path',
    ));
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
    $entity->language = "en";
    $entity->weight = ++$this->row_order;
    $migration = Migration::currentMigration();
    $entity_type = $migration->getDestination()->getEntityType();
    $translation_handler = entity_translation_get_handler($entity_type, $entity);
    $languages = array_keys(language_list());

    $entity->translations = $translation_handler->getTranslations();
    foreach ($languages as $language) {
      if (!empty($row->{$language})) {
        $entity->name_field[$language][0]['value'] = $row->{$language};
        /* Don't translate en (default) */
        if ($language != 'en' && !isset($entity->translations->data[$language])) {
          $translation_handler->setTranslation(array(
            'translate' => 0, 'status' => 1, 'uid' => 1,
            'language' => $language,
            'source' => 'en',
          ));
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
    return OSHA_MIGRATION_TAXONOMY_LEGISLATION_CATEGORIES;
  }
}
