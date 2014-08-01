<?php

/**
 * Class OshaMigratePublications migrates publication data
 */
class OshaMigratePublications extends DynamicMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments = array()) {
    parent::__construct(MigrateGroup::getInstance('OSHA Content types'));
    $this->description = 'Import "Publications" taxonomy from CSV file';

    $source_file = MigrationUtil::getSourceFile($arguments);
    $multilingual_fields = array('title', 'description', 'order_id', 'file');

    $this->source = new MigrateSourceList(
      new PublicationMigrateListCSV($source_file, $multilingual_fields),
      new PublicationMigrateItemCSV(),
      array('id' => 'id')
    );

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 200,
          'not null' => TRUE,
          'description' => 'Item code',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $node_options = MigrateDestinationNode::options('en', 'text');
    $this->destination = new MigrateDestinationNode(OSHA_PUBLICATION_CONTENT_TYPE_PUBLICATION, $node_options);

    $this->addFieldMapping('body:format')->defaultValue('plain_text');
    $this->addFieldMapping('field_tags', 'subject');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_thesaurus', 'thesaurusTids')->separator(',');
    $this->addFieldMapping('field_thesaurus:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_nace_codes', 'naceTids')->separator(',');
    $this->addFieldMapping('field_nace_codes:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_publication_type', 'pubTypeTid')->separator(',');
    $this->addFieldMapping('field_publication_type:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_publication_author', 'author');
    $this->addFieldMapping('field_publication_date', 'publication_date');
    $this->addFieldMapping('created', 'creation_date');
    $this->addFieldMapping('changed', 'modification_date');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_publication_file:preserve_files')->defaultValue(TRUE);
  }

  /**
   * {@inheritdoc}
   */
  protected function generateMachineName() {
    return OSHA_MIGRATION_CONTENT_TYPE_PUBLICATION;
  }

  /**
   * Prepares the source row before migration.
   *
   * @param object $row
   *   One source $row as returned by getItem
   *
   * @return bool
   *   TRUE if row is valid
   */
  public function prepareRow($row) {
    $row->language = 'en';
    $row->subject = MigrationUtil::decodeTagsTerms($row->subject);
    #$row->thesaurusTids = MigrationUtil::findTidByTaxonomyField(OSHA_TAXONOMIES_THESAURUS, 'field_thesaurus_code', $row->multilingual_thesaurus);
    #$row->naceTids = MigrationUtil::findTidByTaxonomyField(OSHA_TAXONOMIES_NACE_CODES, 'field_nace_code', $row->nace);
    #$row->pubTypeTid = MigrationUtil::findTidByTaxonomyField(OSHA_TAXONOMIES_PUBLICATION_TYPES, 'field_publication_type_code', $row->publication_type);

    $row->relatedPublications = array();
    if (!empty($row->relPub)) {
      foreach ($row->relPub as $id) {
        $related_pub_id = $this->getPublicationNid($id);
        if (empty($related_pub_id)) {
          if (empty($related_pub_id)) {
            $related_pub_id = $this->handleSourceMigration($this->generateMachineName(), $id);
          }
        }
        $row->relatedPublications[] = $related_pub_id;
      }
    }

    return TRUE;
  }

  /**
   * Create a stub object that will be later migrated.
   *
   * @param object $migration
   *   Migration object
   * @param array $source
   *   Source object
   *
   * @return array
   *   Array with new tid
   */
  protected function createStub($migration, array $source) {
    $node = new stdClass();
    $node->language = 'en';
    $node->title_field['en'][0]['value'] = t('Stub for @code', array('@code' => $source[0]));
    $node->type = OSHA_PUBLICATION_CONTENT_TYPE_PUBLICATION;
    node_save($node);

    return array($node->nid);
  }

  /**
   * Look for related publication in the current migration map.
   *
   * @param string $source_id
   *   Source item code
   *
   * @return array
   *   Target publication nid
   */
  private static function getPublicationNid($source_id) {
    $result = db_query('
      SELECT m.destid1
      FROM {migrate_map_publication} m
      WHERE m.sourceid1 = :source',
      array(':source' => $source_id));
    foreach ($result as $r) {
      return $r->destid1;
    }
    return array();
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
    $entity->language = 'en';
    $translations_data = array();

    foreach ($row->title as $language => $translation) {
      if (!empty($row->title->$language)) {
        $entity->title_field[$language][0]['value'] = $translation;
      }
      $source_language = ($language == 'en' ? '' : 'en');
      $translations_data[$language] = array(
        'entity_type' => 'node',
        'language' => $language,
        'source' => $source_language,
        'status' => '1',
        'translate' => '0',
      );
    }

    foreach ($row->description as $language => $translation) {
      if (!empty($row->description->$language)) {
        $entity->body[$language][0]['value'] = $translation;
      }
    }

    foreach ($row->order_id as $language => $translation) {
      if (!empty($language)) {
        $entity->field_publication_bookshop_id[$language][0]['value'] = $translation;
      }
    }

    foreach ($row->file as $language => $translation) {
      if (!empty($language)) {
        $uri = "public://publications/documents" . $translation;
        $file_array = file_load_multiple(array(), array('uri' => $uri));
        if (!empty($file_array)) {
          $file = current($file_array);
          $entity->field_publication_file[$language][0]['fid'] = $file->fid;
          $entity->field_publication_file[$language][0]['display'] = 1;
        }
      }
    }

    $entity->translations = (object) array(
      'original' => 'en',
      'data' => $translations_data,
    );
  }

  /**
   * Sets the node aliases after the migration, nid is available.
   *
   * @param object $entity
   *   Entity to be saved
   * @param object $row
   *   Source row
   */
  public function complete($entity, $row) {
    $languages = array_keys($entity->body);
    foreach ($languages as $lang_code) {
      $args = array(
        'source' => 'node/' . $entity->nid,
        'alias' => $row->id,
        'language' => $lang_code,
      );
      path_save($args);
    }
  }
}

/**
 * Class PublicationMigrateListCSV
 */
class PublicationMigrateListCSV extends MigrateList {

  protected $fileUrl = '';
  protected $multilingualFields;
  public static $csvData;

  /**
   * Populates csvData with parsed information from $file_url.
   *
   * @param string $file_url
   *   The location of the file with source raw data
   * @param array $multilingual_fields
   *   An array with each field name from source file, that has translations
   */
  public function __construct($file_url, $multilingual_fields = array()) {
    parent::__construct();
    $this->fileUrl = $file_url;
    $this->multilingualFields = $multilingual_fields;

    self::$csvData = $this->parseMultilingualCSV($this->fileUrl, $multilingual_fields);
  }

  /**
   * {@inheritdoc}
   */
  public function __toString() {
    return $this->fileUrl;
  }

  /**
   * Parse CSV $file and pull the data into the cache.
   *
   * @param string $file
   *   The csv file url
   * @param array $multi_fields
   *   Multi lingual fields
   *
   * @return array
   *   Returns assoc array of assoc arrays which represents one source row
   *   array[id][field] -- row
   */
  protected function parseMultilingualCSV($file, $multi_fields = array()) {
    $handle = fopen($file, 'r');
    $fields = $data = fgetcsv($handle, 1000, ';');

    $final = array();
    while (($data = fgetcsv($handle, 100000, ';')) !== FALSE) {
      $language = explode('/', $data[0], 3);
      $language = $language[1];
      if ($language != 'en' && empty($data[2])) {
        drupal_set_message(sprintf(
          "Publication %s doesn't have english counterpart",
          $data[0]
        ), 'warning');
        continue;
      }
      // Canonical for non-english.
      $id = $data[2];
      if (empty($id)) {
        $id = $data[0];
      }
      $id = preg_replace('/^\/en\//', '', $id);
      $publication_type = explode('/', $data[0]);
      $publication_type = $publication_type[3];
      foreach ($fields as $key => $field) {
        if (in_array($field, $multi_fields)) {
          $final[$id][$field][$language] = $data[$key];
          continue;
        }
        /*
         * The content will have 2 aliases: /$language/id - a global one
         * And /$language/{path without language}
         * We do this because drupal automatically handles the $language
         * system.
         */
        elseif ($field == "path") {
          $tmp = explode('/', $data[$key], 3);
          $final[$id][$field][$language] = $tmp[2];
          continue;
        }
        /*
         * Related items contains 2 types of content:
         *  - related files
         *  - related publications
         * We split them in this stage.
         */
        elseif ($field == "relatedItems" && !empty($data[$key])) {
          $related_items = array_map('trim', explode(",", $data[$key]));
          $final[$id]['relPub'] = preg_replace('/^\/en\//', '', preg_grep('/^([^.]+)$/', $related_items));
          $final[$id]['relFiles'] = preg_grep('/^.*\.(pdf|doc|docx|ppt|pptx)$/i', $related_items);

          if (count($final[$id]['relPub']) + count($final[$id]['relFiles']) != count($related_items)) {
            drupal_set_message(sprintf(
              "Supported extensions : %s . Add your extension in migration.
              Error at item: %s",
              "pdf|doc|docx|ppt|pptx", $final[$id]["path"][$language]
            ), 'warning');
          }
        }
        $final[$id][$field] = $data[$key];
      }

      $final[$id]['id'] = $id;
      $final[$id]['publication_type'] = $publication_type;

      if (strlen($final[$id]['title'][$language]) > 255) {
        unset($final[$id]['title'][$language]);
      }
    }
    foreach (array_keys($final) as $item_id) {
      if (isset($final[$item_id]) && $final[$item_id]['workflow_state'] !== 'published') {
        unset($final[$item_id]);
      }
    }
    return $final;
  }

  /**
   * {@inheritdoc}
   */
  public function getIdList() {
    if (self::$csvData) {
      return array_keys(self::$csvData);
    }
    Migration::displayMessage(
      t('Loading of !fileUrl failed:', array('!listurl' => $this->fileUrl))
    );
    return NULL;
  }

  /**
   * Counts the number of source rows.
   *
   * @return int
   *   Number of rows to be migrated from source
   */
  public function computeCount() {
    return count(self::$csvData);
  }
}

/**
 * Class PublicationMigrateItemCSV
 */
class PublicationMigrateItemCSV extends MigrateItem {

  protected $data;

  /**
   * {@inheritdoc}
   */
  public function getItem($item_id) {
    // Object caching.
    if (empty($this->data)) {
      $csv_data = PublicationMigrateListCSV::$csvData;
      foreach ($csv_data as $csv_id => $item) {
        $this->data[$csv_id] = json_decode(json_encode($item), FALSE);
      }
    }

    return isset($this->data[$item_id]) ? $this->data[$item_id] : NULL;
  }
}

