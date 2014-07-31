<?php

class MigrateOshaNaceCodesTaxonomy extends DynamicMigration {

  protected $vocabulary = 'nace_codes';

  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA Taxonomies'));

    $this->description = 'Populate the "NACE Codes" taxonomy from JSON file in osha_migration module';

    $source_file = MigrationUtil::get_source_file($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'NACE_REV_2_CODE' => array(
          'type' => 'varchar',
          'length' => 30,
          'not null' => TRUE,
          'description' => 'Nace code'
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceList(new NaceCodesMigrationListJSON($source_file),
      new NaceCodesMigrationItemJSON($source_file, array()), $this->fields());


    $term_options = MigrateDestinationTerm::options('en', 'text', TRUE);
    $this->destination = new MigrateDestinationTerm($this->vocabulary, $term_options);

    $this->addFieldMapping('field_nace_code', 'NACE_REV_2_CODE');
    $this->addFieldMapping('parent', 'parent');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('name', 'NACE_REV_2_DESCRIPTION');
    $this->addFieldMapping('description_field:format')->defaultValue('plain_text');
    $this->addFieldMapping('field_nace_changes', 'Change');
    $this->addFieldMapping('weight', 'weight');
  }

  protected function createStub($migration, array $source) {
    static $voc = NULL;
    if ($voc == NULL) {
      $voc = taxonomy_vocabulary_machine_name_load($this->vocabulary);
    }
    $term = new stdClass();
    $term->parent = 0;
    $term->language = 'en';
    $term->name = t('Stub for @code', array('@code' => $source[0]));
    $term->vid = $voc->vid;
    $term->field_nace_code[LANGUAGE_NONE][]['value'] = $source[0];
    taxonomy_term_save($term);

    return array($term->tid);
  }

  public function getWeightByCode($row) {
    $weight = NULL;
    if ($row->Level > 2) {
      $weightAsString = substr($row->NACE_REV_2_CODE, -1);
      $weight = intval($weightAsString);
    }
    else {
      if ($row->Level == 2) {
        $weightAsString = substr($row->NACE_REV_2_CODE, -2);
        $weight = intval($weightAsString);
      }
      else {
        $weight = ord($row->NACE_REV_2_CODE) - ord('A');
      }
    }

    return $weight;
  }

  public function prepareRow($row) {
    $row->parent = 0;
    $row->language = 'en';
    $row->parent = $this->getParent($row);
    $row->weight = $this->getWeightByCode($row);

    return TRUE;
  }

  function prepare($entity, stdClass $row) {
    $assoc = NaceCodesMigrationItemJSON::$cache[$row->NACE_REV_2_CODE];
    $entity->language = 'en';
    $translationsData = array();
    $languages = $this->getSourceDestinationFieldMappings();
    foreach ($languages as $language => $fields) {
      foreach($fields as $target => $source) {
        if(!empty($assoc[$source])) {
          $entity->{$target}[$language][0]['value'] = $assoc[$source];
        }
      }
      if($language != 'en') {
        $translationsData[$language] = array(
          'entity_type' => 'term',
          'language' => $language,
          'source' => 'en',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        );
      }
    }
    $entity->translations = (object) array(
      'original' => 'en',
      'data' => $translationsData
    );
  }

  protected function generateMachineName() {
    return MIGRATION_TAXONOMY_NACE_CODES;
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
      ->fieldCondition('field_nace_code', 'value', $code, '=')
      ->execute();
    if (!empty($result['taxonomy_term'])) {
      return current(array_keys($result['taxonomy_term']));
    }
    return array();
  }

  private function getParentCode($row) {
    $parent_code = NULL;
    $cached = NaceCodesMigrationItemJSON::$cache[$row->NACE_REV_2_CODE];
    if ($cached['Level'] > 3) {
      $parent_code = substr($cached['NACE_REV_2_CODE'], 0, -1);
    }
    else {
      if ($cached['Level'] == 3) {
        $parent_code = substr($cached['NACE_REV_2_CODE'], 0, -2);
      }
      else {
        if ($cached['Level'] == 2) {
          $parent_code = $cached['Sections for publication'];
        }
      }
    }
    return $parent_code;
  }

  function fields() {
    return array(
      'ID' => "id",
      'NACE_REV_2_CODE' => 'The corresponding NACE Code',
      'Sections for publication' => 'The main section the NACE Code',
      'Level' => 'The depth level of the respective tree',
      'Change' => 'The last changes made to the nace code',
      'parent' => 'The tid of the parent',
      'NACE_REV_2_DESCRIPTION' => 'The name of the NACE Code',
      'weight' => 'The generated weight of the taxonomy term'
    );
  }

  static function getSourceDestinationFieldMappings() {
    $languages = array_keys(language_list());
    $special = array(
      'et' => 'est',
      'sv' => 'se',
      'sl' => 'si',
    );

    $mappings = array();
    foreach ($languages as $language) {
      $code = $language;
      if (array_key_exists($language, $special)) {
        $code = $special[$language];
      }
      $mappings[$language] = array(
        'name_field' => strtoupper($code) . "_DESC",
        'description_field' => strtoupper($code) . "_DESC",
        'field_nace_excludes' => strtoupper($code) . "_EXCL",
        'field_nace_includes' => strtoupper($code) . "_INCL",
        'field_nace_includes_also' => strtoupper($code) . "_INCL_ALSO"
      );
      // The fields below have different naming convention in JSON
      if ($language == 'en') {
        $mappings[$language] = array(
          'name_field' => 'NACE_REV_2_DESCRIPTION',
          'description_field' => 'NACE_REV_2_DESCRIPTION',
          'field_nace_excludes' => 'excludes',
          'field_nace_includes' => 'includes',
          'field_nace_includes_also' => 'includes also'
        );
      }
      else if ($language == 'de' || $language == 'fr') {
        $mappings[$language] = array(
            'name_field' => $code . "_Description",
            'description_field' => $code . "_Description",
            'field_nace_excludes' => $code . "_Excludes",
            'field_nace_includes' => $code . "_Includes",
            'field_nace_includes_also' => $code . "_Includes also"
          );
      }
    }
    return $mappings;
  }
}

class NaceCodesMigrationListJSON extends MigrateListJSON {
  /**
   * The default implementation assumes the IDs are top-level array elements,
   * but the array elements are the data items - we need to look inside them
   * for the IDs.
   */
  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data as $item) {
      $ids[] = $item['NACE_REV_2_CODE'];
    }
    return $ids;
  }
}

class NaceCodesMigrationItemJSON extends MigrateItemJSON {

  static $cache;

  public function getItem($item_id) {
    if (empty(self::$cache)) {
      $rows = json_decode(file_get_contents($this->itemUrl), TRUE);
      foreach($rows as $row) {
        self::$cache[$row['NACE_REV_2_CODE']] = $row;
      }
    }
    return isset(self::$cache[$item_id]) ? (object)self::$cache[$item_id] : NULL;
  }
}