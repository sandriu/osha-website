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
        OSHA_TAXONOMIES_PUBLICATION_TYPES,
        'field_publication_type_code',
        array($row->publication_type)
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

  private $file_url;
  protected $multilingualFields;
  public static $csvData;

  /**
   * Populates csvData with parsed information from $file_url.
   *
   * @param string $file_url
   *   The location of the file with source raw data
   */
  public function __construct($file_url) {
    parent::__construct();
    $this->file_url = $file_url;
    self::$csvData = $this->parseMultilingualCSV($file_url);
  }

  /**
   * {@inheritdoc}
   */
  public function __toString() {
    return $this->file_url;
  }

  /**
   * Parse CSV $file and pull the data into the cache.
   *
   * @param string $file
   *   The csv file url
   *
   * @return array
   *   Returns assoc array of assoc arrays which represents one source row
   *   array[id][field] -- row
   */
  protected function parseMultilingualCSV($file) {
    $handle = fopen($file, 'r');
    $fields = $data = fgetcsv($handle, 1000, ';');
    $data_path = osha_migration_get_data_dir();

    $final = array();
    while (($data = fgetcsv($handle, 100000, ';')) !== FALSE) {
      $language = explode('/', $data[0], 3);
      $language = $language[1];
      $id = $data[2];
      if (empty($id)) {
        $id = $data[0];
      }
      $id = preg_replace('/^\/en\//', '', $id);
      $final[$id]['id'] = $id;
      $publication_type = explode('/', $data[0]);
      $publication_type = $publication_type[3];
      if (!empty($publication_type)) {
        $final[$id]['publication_type'] = $publication_type;
      }
      foreach ($fields as $key => $field) {
        switch ($field) {
          case 'title':
          case 'description':
          case 'order_id':
            $final[$id][$field][$language] = $data[$key];
            break;

          case 'file':
            $final[$id][$field][$language] = $data_path . '/export/' . $data[$key];
            break;

          case 'path':
            $tmp = explode('/', $data[$key], 3);
            $final[$id]['path'][$language] = $tmp[2];
            break;

          case 'relatedItems':
            /* Related files and publications */
            if (!empty($data[$key])) {
              $related_items = array_map('trim', explode(",", $data[$key]));
              $final[$id]['related_publications'] = preg_replace('/^\/en\//', '', preg_grep('/^([^.]+)$/', $related_items));
              $final[$id]['relFiles'] = preg_grep('/^.*\.(pdf|doc|docx|ppt|pptx)$/i', $related_items);
              if (count($final[$id]['related_publications']) + count($final[$id]['relFiles']) != count($related_items)) {
                drupal_set_message(sprintf(
                  "Supported extensions : %s . Add your extension in migration.
                  Error at item: %s",
                  "pdf|doc|docx|ppt|pptx", $final[$id]['path'][$language]
                ), 'warning');
              }
            }
            break;

          default:
            $final[$id][$field] = $data[$key];
        }
      }
      /* if (strlen($final[$id]['title'][$language]) > 255) { unset($final[$id]['title'][$language]); }*/
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
      t('Loading of !fileUrl failed:', array('!listurl' => $this->file_url))
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
      foreach ($csv_data as $source_id => $item) {
        $this->data[$source_id] = (object) $item;
      }
    }
    return isset($this->data[$item_id]) ? $this->data[$item_id] : NULL;
  }
}

