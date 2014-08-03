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
    $this->dependencies = array(
      OSHA_MIGRATION_TAXONOMY_TAGS,
      OSHA_MIGRATION_TAXONOMY_THESAURUS,
      OSHA_MIGRATION_TAXONOMY_NACE_CODES,
      OSHA_MIGRATION_TAXONOMY_PUBLICATION_TYPES,
    );

    $source_file = MigrationUtil::getSourceFile($arguments);

    $this->source = new MigrateSourceList(
      new PublicationMigrateListCSV($source_file),
      new PublicationMigrateItemCSV(),
      array(
        'id' => 'id',
        'path' => 'URL',
        'creation_date' => 'Node creation date',
        'publication_date' => 'Node publication date',
        'title' => 'Node title',
        'description' => 'Node body',
        'order_id' => 'Publication Order ID',
        'subject' => 'Item tags',
        'file' => 'Publication document file',
        'relatedItems' => 'Related publications',
        'multilingual_thesaurus' => 'Item Tesaurus tags merged into tags',
        'nace' => 'Item NACE Codes',
        'publication_type' => 'Publication type taxonomy',
      )
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
    $this->addFieldMapping('field_thesaurus', 'multilingual_thesaurus');
    $this->addFieldMapping('field_thesaurus:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_nace_codes', 'nace');
    $this->addFieldMapping('field_nace_codes:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_publication_type', 'publication_type');
    $this->addFieldMapping('field_publication_type:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_publication_author', 'author');
    $this->addFieldMapping('field_publication_date', 'publication_date');
    $this->addFieldMapping('created', 'creation_date');
    $this->addFieldMapping('changed', 'modification_date');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_publication_file', 'file');
    $this->addFieldMapping('field_publication_file:preserve_files')->defaultValue(FALSE);
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

    if (!empty($row->publication_type)) {
      $types = MigrationUtil::findTidByTaxonomyField(
        array($row->publication_type),
        'field_publication_type_code',
        OSHA_TAXONOMIES_PUBLICATION_TYPES
      );
      if (!empty($types)) {
        $row->publication_type = $types[0];
      }
    }
    if (!empty($row->multilingual_thesaurus)) {
      $row->multilingual_thesaurus = explode(',', $row->multilingual_thesaurus);
      $row->multilingual_thesaurus = MigrationUtil::findTidByTaxonomyField(
        $row->multilingual_thesaurus,
        'field_thesaurus_code',
        OSHA_TAXONOMIES_THESAURUS
      );
    }
    if (!empty($row->nace)) {
      $row->nace = explode(',', $row->nace);
      $row->nace = MigrationUtil::findTidByTaxonomyField(
        $row->nace,
        'field_nace_code',
        OSHA_TAXONOMIES_NACE_CODES);
    }

    $row->field_publication_file = $row->file;

    $row->related_publications = array();
    if (!empty($row->related_publications)) {
      foreach ($row->related_publications as $id) {
        $related_pub_id = $this->getPublicationNid($id);
        if (empty($related_pub_id)) {
          if (empty($related_pub_id)) {
            $related_pub_id = $this->handleSourceMigration($this->generateMachineName(), $id);
          }
        }
        $row->related_publications[] = $related_pub_id;
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
    return NULL;
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
    $languages = array_keys(language_list());
    $entity_type = $migration->getDestination()->getEntityType();
    $translation_handler = entity_translation_get_handler($entity_type, $entity);

    $entity->translations = $translation_handler->getTranslations();
    $entity->title = $row->title['en'];
    foreach ($languages as $language) {
      if (!empty($row->title->{$language})) {
        $entity->title_field[$language][0]['value'] = $row->title[$language];
      }
      if (!empty($row->description[$language])) {
        $entity->body[$language][0]['value'] = $row->description[$language];
      }
      if (!empty($row->order_id[$language])) {
        $entity->field_publication_bookshop_id[$language][0]['value'] = $row->order_id[$language];
      }
      if (!empty($row->file[$language]) && $language != 'en') {
        $entity->field_publication_file[$language][0]['value'] = $row->file[$language];
      }
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

  /**
   * Sets the node aliases after the migration, nid is available.
   *
   * @param object $entity
   *   Entity to be saved
   * @param object $row
   *   Source row
   */
  public function complete($entity, $row) {
    $languages = array_keys($row->path);
    foreach ($languages as $language) {
      $args = array(
        'source' => 'node/' . $entity->nid,
        'alias' => $row->path[$language],
        'language' => $language,
      );
      path_save($args);
    }
  }
}

/**
 * Class PublicationMigrateListCSV
 */
class PublicationMigrateListCSV extends MigrateList {

  private $fileURL;
  protected $multilingualFields;
  public static $csvData;

  /**
   * Populates csvData with parsed information from the given file.
   *
   * @param string $file_url
   *   The location of the file with source raw data
   */
  public function __construct($file_url) {
    parent::__construct();
    $this->fileURL = $file_url;
    if (!file_exists($this->fileURL)) {
      Migration::displayMessage(
        t(
          'Failed to load data file from !fileUrl:',
          array('!fileUrl' => $this->fileURL)
        )
      );
    }
    $this->parseSourceFile();
  }

  /**
   * {@inheritdoc}
   */
  public function __toString() {
    return $this->fileURL;
  }

  /**
   * Parse the source file and populate the local cache.
   */
  protected function parseSourceFile() {
    $handle = fopen($this->fileURL, 'r');
    $fields = $data = fgetcsv($handle, NULL, ';');
    $data_path = osha_migration_get_data_dir();

    $final = array();
    while (($data = fgetcsv($handle, NULL, ';')) !== FALSE) {
      $col0 = explode('/', $data[0], 3);
      $language = $col0[1];
      $path = $col0[2];
      $path_parts = explode('/', $path);

      $final[$path] = array(
        'id' => $path,
        'path' => array($language => $path),
        'publication_type' => !empty($path_parts[1]) ? $path_parts[1] : NULL,
      );
      foreach ($fields as $key => $field) {
        switch ($field) {
          case 'title':
          case 'description':
          case 'order_id':
            $final[$path][$field][$language] = $data[$key];
            break;

          case 'file':
            $final[$path][$field][$language] = $data_path . '/export/' . $data[$key];
            break;

          case 'relatedItems':
            /* Related files and publications */
            $items = MigrationUtil::parseRelatedItemsString($data[$key]);
            $final[$path]['related_publications'] = $items['items'];
            $final[$path]['relFiles'] = $items['files'];
            break;

          default:
            $final[$path][$field] = $data[$key];
        }
      }
    }
    self::$csvData = $final;
  }

  /**
   * {@inheritdoc}
   */
  public function getIdList() {
    if (self::$csvData) {
      return array_keys(self::$csvData);
    }
    return array();
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
      foreach ($csv_data as $source_id => $item) {
        $this->data[$source_id] = (object) $item;
      }
    }
    return isset($this->data[$item_id]) ? $this->data[$item_id] : NULL;
  }
}

