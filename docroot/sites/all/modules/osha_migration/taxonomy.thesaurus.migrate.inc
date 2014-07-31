<?php

class MigrateOshaTaxonomyThesaurus extends DynamicMigration {

  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA Taxonomies'));
    $this->description = 'Populate the "Thesaurus" taxonomy from JSON file in osha_migration module';

    $source_file = MigrationUtil::get_source_file($arguments);
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'code' => array(
          'type' => 'varchar',
          'length' => 30,
          'not null' => TRUE,
          'description' => 'Thesaurus code'
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceList(
      new ThesaurusMigrationListJSON($source_file),
      new ThesaurusMigrationItemJSON($source_file, array()),
      $this->fields()
    );

    $term_options = MigrateDestinationTerm::options('en', 'text', TRUE);
    $this->destination = new MigrateDestinationTerm(TAXONOMY_THESAURUS, $term_options);

    $this->addFieldMapping('field_thesaurus_code', 'code');
    $this->addFieldMapping('parent', 'parent');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('name', 'en');
    $this->addFieldMapping('description_field:format')->defaultValue('plain_text');
  }

  protected function createStub(/** @noinspection PhpUnusedParameterInspection */ $migration, array $source) {
    static $voc = NULL;
    if ($voc == NULL) {
      $voc = taxonomy_vocabulary_machine_name_load(TAXONOMY_THESAURUS);
    }
    $term = new stdClass();
    $term->parent = 0;
    $term->language = 'en';
    $term->name = t('Stub for @code', array('@code' => $source[0]));
    $term->vid = $voc->vid;
    $term->field_thesaurus_code[LANGUAGE_NONE][]['value'] = $source[0];
    taxonomy_term_save($term);

    return array($term->tid);
  }

  public function prepareRow($row) {
    $row->parent = 0;
    $row->language = 'en';
    $row->parent = $this->getParent($row);

    return TRUE;
  }

  public function prepare($entity, stdClass $row) {
    $migration = Migration::currentMigration();
    $entity_type = $migration->getDestination()->getEntityType();
    $translation_handler = entity_translation_get_handler($entity_type, $entity);
    $entity->translations = $translation_handler->getTranslations();
    $supported_languages = array_keys(language_list());
    foreach ($supported_languages as $lang_code) {
      if (!empty($row->$lang_code)) {
        $entity->name_field[$lang_code][0]['value'] = $row->$lang_code;
        if ($lang_code != $row->language) { // Don't translate default language (en)
          if (!isset($entity->translations->data[$lang_code])) {
            $translation_handler->setTranslation(array(
              'translate' => 0, 'status' => 1, 'uid' => 1,
              'language' => $lang_code, 'source' => $row->language
            ));
          }
        }
      }
    }
  }

  private function getParent($row) {
    $parent_code = $row->parent_code;
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
      ->fieldCondition('field_thesaurus_code', 'value', $code, '=')
      ->execute();
    if (!empty($result['taxonomy_term'])) {
      return current(array_keys($result['taxonomy_term']));
    }
    return array();
  }

  private function fields() {
    return array(
      'code' => 'The unique identifier',
      'en' => 'The description/name of the item',
      'parent' => 'The tid of the parent'
    );
  }

  protected function generateMachineName() {
    return MIGRATION_TAXONOMY_THESAURUS;
  }
}

class ThesaurusMigrationListJSON extends MigrateListJSON {

  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data['@graph'] as $item) {
      $ids[] = substr($item['@id'], 6);
    }
    return $ids;
  }

  public function computeCount() {
    $count = 0;
    $json = NULL;
    if (empty($this->httpOptions)) {
      $json = file_get_contents($this->listUrl);
    }
    if ($json) {
      $data = drupal_json_decode($json);
      if ($data) {
        $count = count($data['@graph']);
      }
    }
    return $count;
  }
}

class ThesaurusMigrationItemJSON extends MigrateItemJSON {

  protected $data = array();

  public function getItem($item_id) {
    if (empty($this->data)) {
      $dataArray = $this->loadJSONUrl($this->itemUrl);
      foreach ($dataArray['@graph'] as $rawItem) {
        $item = array();
        $item['code'] = substr($rawItem['@id'], 6);
        $item['parent_code'] = (isset($rawItem['@skos:broaderTransitive'])
          ? substr($rawItem['@skos:broaderTransitive']['@id'], 6) : NULL);
        foreach ($rawItem["@skos:prefLabel"] as $label) {
          $item[$label['@language']] = $label['@value'];
        }
        $item['type'] = $rawItem['@type'];
        $this->data[$item['code']] = (object)$item;
      }
    }
    return isset($this->data[$item_id]) ? $this->data[$item_id] : NULL;
  }

  protected function loadJSONUrl($item_url) {
    return json_decode(file_get_contents($item_url), TRUE);
  }

  function getData() {
    return $this->data;
  }
}