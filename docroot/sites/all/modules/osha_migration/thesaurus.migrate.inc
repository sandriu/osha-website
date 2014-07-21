<?php

class MigrateOshaThesaurus extends DynamicMigration {
    protected $vocabulary = NULL;

    public function __construct($arguments) {
        parent::__construct();

        $this->description = 'Import "Thesaurus" taxonomy from JSON file';
        $this->vocabulary = 'thesaurus';
        $file_name = $arguments['file_name'];
        $source_file = sprintf("%s/%s", drupal_get_path('module', 'osha_migration'), $file_name);

        $this->map =  new MigrateSQLMap(
            $this->machineName,
            array(
                'id' => array(
                    'type' => 'varchar',
                    'length' => '30',
                    'not null' => TRUE,
                    'description' => 'Nace code'
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
        $this->destination = new MigrateDestinationTerm($this->vocabulary, $term_options);

        $this->addFieldMapping('field_thesaurus_code', 'code');
//        $this->addFieldMapping('parent', 'parent');
        $this->addFieldMapping('format')->defaultValue('plain_text');
        $this->addFieldMapping('name', 'en');
        $this->addFieldMapping('description_field:format')->defaultValue('plain_text');
    }

    private function fields() {
        return array(
            'code' => 'The unique identifier',
            'en' => 'The description/name of the item'
        );
    }

    protected function generateMachineName($class_name = NULL) {
        return 'ThesaurusTaxonomy';
    }
}

class ThesaurusMigrationListJSON extends MigrateListJSON {
    protected function getIDsFromJSON(array $data) {
        $ids = array();
        foreach ($data['@graph'] as $item) {
            $ids[] = $item['@id'];
        }
        return $ids;
    }

    public function computeCount() {
        $count = 0;
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

    public function getItem($id) {
        // Object caching
        if (empty($this->data)) {
            $dataArray = $this->loadJSONUrl($this->itemUrl);
            foreach($dataArray['@graph'] as $rawItem) {
                $item = array();
                $item['code'] = $rawItem['@id'];
                $item['parent_code'] = $rawItem['@skos:broaderTransitive']['@id'];
                foreach($rawItem["@skos:prefLabel"] as $label) {
                    $item[$label['@language']] = $label['@value'];
                }
                $item['type'] = $rawItem['@type'];
                $this->data[$item['code']] = json_decode(json_encode($item), FALSE);
            }
        }

        return isset($this->data[$id]) ? $this->data[$id] : NULL;
    }

    protected function loadJSONUrl($item_url) {
        if (empty($this->httpOptions)) {
            $json = file_get_contents($item_url);
        }
        else {
            $response = drupal_http_request($item_url, $this->httpOptions);
            $json = $response->data;
        }
        return json_decode($json, TRUE);
    }
}