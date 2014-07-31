<?php

/**
 * Class MigrateOshaNews migrates news.txt contents. The data
 * is stored inside the <em>News</em> content type.
 */
class MigrateOshaNews extends DynamicMigration {

  public function __construct($arguments) {
    parent::__construct(MigrateGroup::getInstance('OSHA News'));

    $this->description = 'Import "News" contents from CSV file';
    $this->dependencies = array(MIGRATION_TAXONOMY_THESAURUS, MIGRATION_TAXONOMY_TAGS);

    $source_file = MigrationUtil::get_source_file($arguments);

    $this->source = new MigrateSourceList(
      new NewsContentListCSV($source_file, array('title', 'description', 'text')),
      new NewsContentItemCSV(),
      $this->fields());

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 200,
          'not null' => TRUE,
          'description' => 'News code'
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $node_options = MigrateDestinationNode::options('en', 'text');
    $this->destination = new MigrateDestinationNode(CONTENT_TYPE_NEWS, $node_options);

    $this->addFieldMapping('field_news_image', 'image');
    $this->addFieldMapping('field_news_image:title', 'imageCaption');
    $this->addFieldMapping('field_news_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldmapping('field_news_image:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_news_image:source_dir')->defaultValue(osha_migration_get_data_dir() . '/export/');

    $this->addFieldMapping('field_tags', 'subject');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_thesaurus', 'multilingual_thesaurus');
    $this->addFieldMapping('field_thesaurus:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_news_publication_date', 'publication_date');

    $this->addFieldMapping('path', 'id');
    $this->addFieldMapping('created', 'creation_date');
    $this->addFieldMapping('changed', 'modification_date');

    $this->addUnmigratedSources(array(
      'path',
      'language',
      'workflow_state',
      'creator',
      'country'
    ));

    $this->addUnmigratedDestinations(array(
      'uid',
      'promote',
      'status',
      'sticky',
      'revision',
      'log',
      'language',
      'tnid',
      'translate',
      'revision_uid',
      'is_new',
      'body:language',
      'field_news_image:file_class',
      'field_news_image:language',
      'field_news_image:destination_dir',
      'field_news_image:destination_file',
      'field_news_image:alt',
      'field_news_publication_date:timezone',
      'field_news_publication_date:rrule',
      'field_news_publication_date:to',
      'field_news_summary',
      'field_news_summary:format',
      'field_news_summary:language',
      'field_tags:create_term',
      'field_tags:ignore_case',
      'field_thesaurus:create_term',
      'field_thesaurus:ignore_case',
      'title_field',
      'title_field:language',
      'comment'
    ));
  }

  protected function generateMachineName() {
    return MIGRATION_CONTENT_TYPE_NEWS;
  }

  public function prepareRow($row) {
    $row->language = 'en';

    $tags = $row->subject . ', ' . $row->subcategory;
    $row->subject = MigrationUtil::decode_tags_terms($tags);
    $row->multilingual_thesaurus = MigrationUtil::find_tid_by_taxonomy_field(
      TAXONOMY_THESAURUS,
      'field_thesaurus_code',
      explode(',', $row->multilingual_thesaurus)
    );
    return TRUE;
  }

  public function prepare($entity, stdClass $row) {
    $migration = Migration::currentMigration();
    $supported_languages = array_keys(language_list());
    $entity_type = $migration->getDestination()->getEntityType();
    $translation_handler = entity_translation_get_handler($entity_type, $entity);

    $entity->translations = $translation_handler->getTranslations();
    $entity->title = $row->title['en'];
    foreach ($supported_languages as $lang_code) {
      if (!empty($row->title[$lang_code])) {
        $entity->title_field[$lang_code][0]['value'] = $row->title[$lang_code];
        $entity->field_news_summary[$lang_code][0]['value'] = str_replace('<@#&>', '"', $row->description[$lang_code]);
        $entity->field_news_summary[$lang_code][0]['format'] = 'full_html';
        $entity->body[$lang_code][0]['value'] = str_replace('<@#&>', '"', $row->text[$lang_code]);
        $entity->body[$lang_code][0]['format'] = 'full_html';
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


  function fields() {
    return array(
      'id' => 'Primary Key (URL pattern)',
      'path' => 'URL pattern without language',
      'language' => 'Row language',
      'workflow_state' => '',
      'creation_date' => '',
      'modification_date' => '',
      'publication_date' => '',
      'creator' => 'Author user id from the old website',
      'title' => '',
      'description' => '',
      'text' => 'Body of the news',
      'image' => 'Path to image file',
      'imageCaption' => 'Image tooltip',
      'subject' => 'Categories/Tags',
      'country' => '',
      'subcategory' => 'Merged into categories',
      'multilingual_thesaurus' => '',
      'nace' => 'Nace codes taxonomy',
    );
  }

  /**
   * This function sets the node aliases after the migration, when node nid is available
   * @param $entity
   * @param stdClass $row
   */
  function complete($entity, stdClass $row) {
    $languages = array_keys(language_list());
    foreach ($languages as $lang_code) {
      $args = array(
        'source' => 'node/'. $entity->nid,
        'alias' => $row->id, // Same alias for all languages (see mappings)
        'language' => $lang_code,
      );
      path_save($args);
    }
  }
}

class NewsContentListCSV extends MigrateList {
  protected $file = '';
  protected $multilingualFields;
  public static $data = array();

  public function __construct($file, $multilingualFields = array()) {
    parent::__construct();
    $this->file = $file;
    $this->multilingualFields = $multilingualFields;
  }

  public function  __toString() {
    return $this->file;
  }

  protected function parse_multilingual_csv() {
    $handle = fopen($this->file, 'r');
    $fields = $data = fgetcsv($handle, 1000, ';');
    $final = [];
    while (($data = fgetcsv($handle, 100000, ';')) !== FALSE) {
      $country = $data[1];
      $path = explode('/', $data[0], 3)[2];
      foreach ($fields as $key => $field) {
        if (in_array($field, $this->multilingualFields)) {
          $final[$path][$field][$country] = $data[$key];
          continue;
        }
        $final[$path][$field] = $data[$key];
      }
      $final[$path]['id'] = $path;
    }

    foreach ($final as $id => $row) {
      if(isset($row['title']['en'])) {
        self::$data[$id] = $final[$id];
      } else {
        drupal_set_message(
          sprintf('No english translation for row:%s', $id),
          'warning'
        );
      }
    }
  }

  public function getIdList() {
    if (empty(self::$data)) {
      $this->parse_multilingual_csv();
    }
    return array_keys(self::$data);
  }

  public function computeCount() {
    return count(self::$data);
  }
}

class NewsContentItemCSV extends MigrateItem {

  public function getItem($id) {
    if(array_key_exists($id, NewsContentListCSV::$data)) {
      return (object)NewsContentListCSV::$data[$id];
    }
    return NULL;
  }
}