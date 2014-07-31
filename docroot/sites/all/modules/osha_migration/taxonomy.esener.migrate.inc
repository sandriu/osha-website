<?php

class MigrateOshaTaxonomyEsener extends DynamicMigration {

  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA Taxonomies'));
    $this->description = 'Populate the "Esener" taxonomy from JSON file in osha_migration module';

    $source_file = MigrationUtil::getSourceFile($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'code' => array(
          'type' => 'varchar',
          'length' => 30,
          'not null' => TRUE,
          'description' => 'Nace code',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceList(
      new EsenerTaxonomyMigrationListJSON($source_file),
      new EsenerTaxonomyMigrationItemJSON($source_file, array()),
      array(
        'parent' => 'Parent tid',
        'en' => 'Term name in english',
        'code' => 'Term code (PK)',
      )
    );

    $term_options = MigrateDestinationTerm::options('en', 'text', TRUE);
    $this->destination = new MigrateDestinationTerm(TAXONOMY_ESENER, $term_options);

    $this->addFieldMapping('name', 'en');
    $this->addFieldMapping('parent', 'parent');
    $this->addFieldMapping('field_esener_code', 'code');
    $this->addFieldMapping('format')->defaultValue('plain_text');
  }


  protected function createStub($migration, array $source) {
    static $voc = NULL;
    if ($voc == NULL) {
      $voc = taxonomy_vocabulary_machine_name_load(TAXONOMY_ESENER);
    }
    $term = new stdClass();
    $term->parent = 0;
    $term->language = 'en';
    $term->name = t('Stub for @code', array('@code' => $source[0]));
    $term->vid = $voc->vid;
    taxonomy_term_save($term);
    return array($term->tid);
  }

  /**
   * Prepare raw data pulled from source.
   *
   * {@inheritdoc }
   */
  public function prepareRow($row) {
    $row->language = 'en';
    $row->parent = $this->getParent($row);
    return TRUE;
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
        if ($language != $row->language) {
          if (!isset($entity->translations->data[$language])) {
            $translation_handler->setTranslation(array(
              'translate' => 0, 'status' => 1, 'uid' => 1,
              'language' => $language,
              'source' => $row->language,
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
    return OSHA_MIGRATION_TAXONOMY_ESENER;
  }

  private function getParent($row) {
    $parent_code = $this->getParentCode($row);
    if (!empty($parent_code)) {
      $parent_id = self::_getTidByCode($parent_code);
      if (empty($parent_id)) {
        $parent_id = $this->handleSourceMigration($this->generateMachineName(), $parent_code);
      }
      return $parent_id;
    }
    return 0;
  }

  private static function _getTidByCode($code) {
    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->fieldCondition('field_esener_code', 'value', $code, '=')
      ->execute();
    if (!empty($result['taxonomy_term'])) {
      return current(array_keys($result['taxonomy_term']));
    }
    return array();
  }


  private function getParentCode($row) {
    return !empty($row->parent_code) ? $row->parent_code : 0;
  }
}

class EsenerTaxonomyMigrationListJSON extends MigrateListJSON {

  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data as $item) {
      $ids[] = $item['code'];
    }
    return $ids;
  }
}

class EsenerTaxonomyMigrationItemJSON extends MigrateItemJSON {

  private $cache = array();

  public function getItem($item_id) {
    if (empty($this->cache)) {
      $rows = $this->loadJSONUrl($this->itemUrl);
      foreach ($rows as $row) {
        $this->cache[$row->code] = $row;
      }
    }
    return isset($this->cache[$item_id]) ? $this->cache[$item_id] : NULL;
  }
}
