<?php
/**
 * @file
 * osha_taxonomies_uuid.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function osha_taxonomies_uuid_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Road Transport',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'road_transport',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Автомобилен транспорт',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Silniční doprava',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Vejtransport',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Straßenverkehr',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Οδικές μεταφορές',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Road Transport',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Transporte por carretera',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Maanteetransport',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Tieliikenne',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Transport routier',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Közúti fuvarozás',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Közúti közlekedés',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Flutningar á vegum',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Trasporto stradale',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Kelių transportas',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Autotransports',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Trasport bit-Triq',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Wegvervoer',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Veitransport',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Transport drogowy',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Transporte rodoviários',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Transport rutier',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Cestná doprava',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Cestni promet',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Vägtransporter',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '003fdea3-8f3a-43fc-be60-2f76e1773dd1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '1: Anticipating change',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '00cf9383-d3f2-4220-a8a2-42a0d4b4a33b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'anticipating_change',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '1: Anticipating change',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '00cf9383-d3f2-4220-a8a2-42a0d4b4a33b',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '3: Tools for OSH management',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '08e11f8b-4122-4e6e-83cb-2e0b3c06d082',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'tools_for_osh_management',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '3: Tools for OSH management',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '08e11f8b-4122-4e6e-83cb-2e0b3c06d082',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Dangerous substances',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'dangerous_substances',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Опасни вещества',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Nebezpečné látky',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Farlige stoffer',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Gefahrstoffe',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Επικίνδυνες ουσίες',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Dangerous substances',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Sustancias peligrosas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Ohtlikud ained',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Vaaralliset aineet',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Substances dangereuses',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Veszélyes anyagok',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Sostanze pericolose',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Pavojingos medžiagos',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Bīstamās vielas',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Sustanzi Perikolużi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Gevaarlijke stoffen',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Substancje niebezpieczne',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Substâncias perigosas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Substanţe periculoase',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Nebezpečné látky',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Nevarne snovi',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Farliga ämnen',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '123af0ff-7a0b-42a9-b0c3-de32c80522fb',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fisheries',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'fisheries',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Fiskerisektoren',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Fischerei',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Pesca',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Kalandussektor',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Pêche',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Halászat',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Pesca',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Žuvininkystė',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Zvejsaimniecība',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Settur tal-pixkeriji',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Fisheries',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '1d3d24cb-0c1f-4de5-b167-fdc1bea0e731',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '2.1. European Survey of Enterprises on New & Emerging Risks (ESENER)',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a207a55-e8be-4910-9b9a-47995c11e39c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2.1. European Survey of Enterprises on New & Emerging Risks (ESENER)',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '2a207a55-e8be-4910-9b9a-47995c11e39c',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    ),
  );
  $terms[] = array(
    'name' => '7.1. Finance & Accounting',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2b5014f8-9d88-489d-9f16-75cb35fadb09',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'governance_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '7.1. Finance & Accounting',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '2b5014f8-9d88-489d-9f16-75cb35fadb09',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'f77ff1e1-cccc-4f56-b470-ad638467b135',
    ),
  );
  $terms[] = array(
    'name' => 'Accident prevention',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'accident_prevention',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Превенция на злополуки',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Prevence úrazů',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Forebyggelse af ulykker',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Unfallverhütung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Πρόληψη ατυχημάτων',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Accident prevention',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Prevención de accidentes',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Õnnetuste ärahoidmine',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Tapaturmien torjunta',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Prévention des accidents',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Balesetmegelőzés',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Prevenzione degli infortuni',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Nelaimingų atsitikimų prevencija',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Nelaimes gadījumu profilakse',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Prevenzjoni ta’ Aċċidenti',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Voorkomen van arbeidsongevallen',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Zapobieganie nieszczęśliwym wypadkom',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Prevenção de acidentes',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Prevenirea accidentelor',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Prevencia úrazov',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Preprečevanje nesreč',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Förebyggande av olyckor',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2dd789d4-c119-466a-8791-85c8635d9ca1',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Green jobs',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'green_jobs',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'зелени работни места',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'zelená pracovní místa',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'grønne job',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Grüne Arbeitsplätze',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => '\'πράσινες\' θέσεις εργασίας',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Green jobs',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'trabajos \'verdes\'',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'rohelised töökohad',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'vihreät työpaikat',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'emplois verts',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'zöld munkahelyek',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'græn störf',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'posti di lavoro verdi',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'su ekologija susiję darbai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'ekoloģiskas darbavietas',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'impjiegi ħodor',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'groene banen',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'grønne jobber',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'zielone miejsca pracy',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'empregos verdes',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'locuri de muncă ecologice',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'zelené pracovné miesta',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Zelena delovna mesta',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'gröna jobb',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2df7d9f5-c966-4f91-9fe6-12bd173e21c3',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Corporate Social Responsibility',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'corporate_social_responsibility',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Корпоративна социална отговорност',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Společná sociální odpovědnost',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Virksomhedernes sociale ansvar',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Soziale Verantwortung der Unternehmen',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Εταιρική κοινωνική ευθύνη',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Corporate Social Responsibility',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Responsabilidad Social de las Empresas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Ettevõtete sotsiaalne vastutus',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Responsabilité sociale des entreprises',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Monde du travail en mutation',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Corporate Social Responsibility',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Vállalati szociális felelősség',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Corporate Social Responsibility',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Responsabilità sociale dell’impresa',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Įmonių socialinė atsakomybė',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Korporatīvā sociālā atbildība',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Responsabbiltà Soċjali mill-Kumpaniji',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Sociale verantwoordelijkheid van bedrijven',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Corporate Social Responsibility',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Odpowiedzialność społeczna przedsiębiorstw',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Responsabilidade social das empresas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Răspunderea socială a întreprinderii',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Podniková sociálna zodpovednosť',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Družbena odgovornost podjetij',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Företagens sociala ansvar',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '2faad959-2b29-40e6-a25e-e205453565c4',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '5: Networking knowledge',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '341c68a0-184a-4c11-8789-178251c02872',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_knowledge',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '5: Networking knowledge',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '341c68a0-184a-4c11-8789-178251c02872',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Emerging risks',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c5a05a7-9569-42e1-9afa-8fcc3e539ca0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'emerging_risks',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Emerging risks',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3c5a05a7-9569-42e1-9afa-8fcc3e539ca0',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '2.5. Costs and benefits of OSH',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3cca98a5-f928-4543-a290-e6c009efcb1e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures_5',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2.5. Costs and benefits of OSH',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '3cca98a5-f928-4543-a290-e6c009efcb1e',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    ),
  );
  $terms[] = array(
    'name' => 'Cleaning workers',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'cleaning_workers',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Почистване на работниците',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Čištění pracovníků',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Rengøring arbejdstagere',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Reinigungskräfte',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Καθαρισμού εργαζομένων',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Cleaning workers',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Trabajadores de la limpiez',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Puhastus töötajate',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Siivoustyöntekijöitä',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Employés de nettoyage',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Cleaning workers',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Takarító személyzet',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Cleaning workers',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Addetti alle pulizie',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Valytojams',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Uzkopšanas darbiniekiem',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Ħaddiema tat-tindif',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Reiniging werknemers',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Cleaning workers',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Pracowników do czyszczenia',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Trabalhadores de limpeza',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Personalului de curăţenie',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Čistenie pracovníkov',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Čiščenje delavci',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Städpersonal',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '3d7a5f11-bb2f-4825-8f2b-e77f8dbada7a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nanomaterials',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'nanomaterials',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Наноматериалите',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Nanomateriály',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Nanomaterialer',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Nanomaterialien',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Νανοϋλικά',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Nanomaterials',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Nanomateriales',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Nanomaterjalid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Nanomateriaalit',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Nanomatériaux',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Nanomaterijala',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Nanoanyagok',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Nanóefni',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Nanomateriali',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Nanomedžiagos',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Nanomateriāli',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Nanomaterjali',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Nanomaterialen',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Nanomaterialer',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Nanomateriały',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Nanomateriais',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Nanomaterialele',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Nanomateriály',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Nanomateriali',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Nanomaterial',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4063bbba-5ca1-4c6c-9dc2-8275e6477b1e',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'ESENER',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'esener',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'ESENER',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '43ca7077-7aba-44e3-af54-8fca1479563c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Transport',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'transport',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Транспорт',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Doprava',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Verkehr',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Μεταφορές',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Transportes',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Liikenne',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Transports',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Közlekedés',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Trasporti',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Transportas',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Transports',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Trasport',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Vervoer',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Transportes',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Transport',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Doprava',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Promet',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Transporter',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '44b49d76-a785-48b2-8c64-2e3f455eb6a9',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Work related diseases',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46b05090-3a00-4815-922f-c3998858aa5d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'work_related_diseases',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Work related diseases',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '46b05090-3a00-4815-922f-c3998858aa5d',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'OSH and young people',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4866de41-3d93-49b2-8149-8ef2116de40a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'osh_and_young_people',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'OSH and young people',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '4866de41-3d93-49b2-8149-8ef2116de40a',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Page',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'article_types',
    'field_article_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'page',
          'format' => NULL,
        ),
      ),
    ),
    'metatags' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411244110,
          'entity_uuid' => '4d106060-5ea2-448e-92b8-3cd649f867a9',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maintenance',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'maintenance',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Поддръжка',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Údržba',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Vedligeholdelse',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Instandhaltung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Συντήρηση',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Maintenance',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Mantenimiento',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Hooldus',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Kunnossapito',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Maintenance',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Maintenance',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Karbantartás',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Maintenance',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Manutenzione',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Techninė priežiūra',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Uzturēšana',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Manutenzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Onderhoud',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Maintenance',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Bezpieczeństwo eksploatacji',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Manutenção',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Mentenanţă',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Údržba',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Vzdrževalna dela',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Underhåll',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '55bc45c3-f37c-4354-85c0-f5abe922ee8d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '4: Raising awareness',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'raising_awareness',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '4: Raising awareness',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Legislation',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'publication',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'legislation',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'законодателство',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Právní předpisy',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Lovgivning',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Gesetzgebung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Νομοθεσία',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Legislation',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Legislación',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Õigusaktid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Säädökset',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Législation',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Zakonodavstvo',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Jogszabályok',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Löggjöf',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Normativa',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Teisės aktai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Tiesību akti',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Leġiżlazzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Wetgeving',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Lovgivning',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Akty prawne',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Legislação',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Legislaţie',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Právne predpisy',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Zakonodaja',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Lagstiftning',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '592c99f9-a1a2-47a3-81b4-ad72906c1a28',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Introduction',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '5cd70528-4ea1-4cce-9370-370c22dee0d7',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'article_types',
    'field_article_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'introduction',
          'format' => NULL,
        ),
      ),
    ),
    'metatags' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411244110,
          'entity_uuid' => '5cd70528-4ea1-4cce-9370-370c22dee0d7',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Risk assessment',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'risk_assessment',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Оценка на риска',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Hodnocení rizik',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Risikovurdering',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Gefährdungsbeurteilung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Αξιολόγηση κινδύνων',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Risk assessment',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Evaluación de riesgos',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Riskihindamine',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Riskinarviointi',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Évaluation des risques',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Kockázatértékelés',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Valutazione dei rischi',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Rizikos vertinimas',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Risku novērtēšana',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Evalwazzjoni tar-riskji',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Risicobeoordeling',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Ocena ryzyka',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Avaliação de risco',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Evaluarea riscului',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Hodnotenie rizík',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Ocena tveganja',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Riskbedömning',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '5f786f64-1537-4357-a0cd-015c41eba9ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Disabled people',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66060c24-6b5d-4f20-89e5-0a5d13a9028d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'disabled_people',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Disabled people',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '66060c24-6b5d-4f20-89e5-0a5d13a9028d',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Leadership',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'leadership',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Лидерство',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Lederskab',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Führung',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Leadership',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Liderazgo',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Leadership',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '68307727-0256-4b98-b8f1-3c63b155a3b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '5.2. Other networking knowledge actions',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '68ed2a83-8327-4c9a-9a1d-c77cf9860cde',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_knowledge_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '5.2. Other networking knowledge actions',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '68ed2a83-8327-4c9a-9a1d-c77cf9860cde',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '341c68a0-184a-4c11-8789-178251c02872',
    ),
  );
  $terms[] = array(
    'name' => 'Section',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '6ccf7187-42f8-4813-bf55-b5b3d218dc37',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'article_types',
    'field_article_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'section',
          'format' => NULL,
        ),
      ),
    ),
    'metatags' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411244110,
          'entity_uuid' => '6ccf7187-42f8-4813-bf55-b5b3d218dc37',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => '6: Networking and Corporate Communications',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_and_corporate_communications',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '6: Networking and Corporate Communications',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '5.1 OSHwiki',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '724a92e2-016d-4611-bebc-11f3b09eaf64',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_knowledge_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '5.1 OSHwiki',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '724a92e2-016d-4611-bebc-11f3b09eaf64',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '341c68a0-184a-4c11-8789-178251c02872',
    ),
  );
  $terms[] = array(
    'name' => '2.3. OSH overview: Micro and small enterprises',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '745eb89c-b6a3-455e-94ae-3244e10df1e9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures_3',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2.3. OSH overview: Micro and small enterprises',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '745eb89c-b6a3-455e-94ae-3244e10df1e9',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    ),
  );
  $terms[] = array(
    'name' => '3.2. Tool for implementing OSH solutions',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '777ac578-5ecf-4c08-bf2f-72ebe7b14871',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'tools_for_osh_management_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '3.2. Tool for implementing OSH solutions',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '777ac578-5ecf-4c08-bf2f-72ebe7b14871',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '08e11f8b-4122-4e6e-83cb-2e0b3c06d082',
    ),
  );
  $terms[] = array(
    'name' => 'Psychosocial risks and stress',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'psychosocial_risks_and_stress',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Психосоциални рискове и стрес на работното място',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Stres a psychosociální rizika',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Stress og psykosociale risici',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Stress und psychosoziale Risiken',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Άγχος και ψυχοκοινωνικοί κίνδυνοι',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Psychosocial risks and stress',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Estrés y riesgos psicosociales',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Stress ja psühhosotsiaalsed riskid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Stressi ja psykososiaaliset riskit',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Risques psychosociaux et stress',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Psihosocijalni rizici i stres',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Pszichoszociális kockázatok és stressz',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Sálfélagslegar áhættur og streita',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Stress e rischi psicosociali',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Stresas ir psichosocialinė rizika',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Stress and psihosociālā riska veidi',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Stress u riskji psikoloġiċi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Stress en psychosociale risico’s',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Psykososiale risikoer og stress',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Stres i zagrożenia psychospołeczne',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Stress e riscos psicossociais',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Stresul şi riscurile psihosociale',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Stres a psychosociálne riziká',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Stres in psihosocialna tveganja',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Stress och psykosociala risker',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '790cdad9-f8a9-4eb7-ba7d-df897e3e5500',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '2.2. OSH overview: Older workers',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7df1e54d-8ab2-45f8-a8db-def8330ece19',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2.2. OSH overview: Older workers',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '7df1e54d-8ab2-45f8-a8db-def8330ece19',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    ),
  );
  $terms[] = array(
    'name' => '3.1. Online interactive Risk Assessment (OiRA) tool',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7f6e2e39-911c-4f0c-88fc-8eb42dc8f370',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'tools_for_osh_management_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '3.1. Online interactive Risk Assessment (OiRA) tool',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '7f6e2e39-911c-4f0c-88fc-8eb42dc8f370',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '08e11f8b-4122-4e6e-83cb-2e0b3c06d082',
    ),
  );
  $terms[] = array(
    'name' => 'Worker Participation',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'worker_participation',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Участие на работниците',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Účast zaměstnanců',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Medarbejderdeltagelse',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Arbeitnehmerbeteiligung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Συμμετοχή των εργαζομένων',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Worker Participation',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Participación de los trabajadores',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Töötajate osalemine',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Työntekijöiden osallistuminen',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Participation des travailleurs',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Dolgozói részvétel',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Þátttaka starfsmanna',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Partecipazione dei lavoratori',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Darbuotojų dalyvavimas',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Darba ņēmēju dalība',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Parteċipazzjoni tal-ħaddiema',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Werknemersparticipatie',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Medarbeiderdeltakelse',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Udział pracowników',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Participação dos trabalhadores',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Participarea lucrătorilor',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Účasť zamestnancov',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Soodločanje delavcev',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Arbetstagarnas medverkan',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '8205dae4-a004-4cd1-acab-c601e5a4a6bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health Care',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'health_care',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Здравеопазване',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Zdravotní péče',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Sundhedspleje',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Gesundheitsfürsorge',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Υγειονομική περίθαλψη',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Health Care',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Atención sanitaria',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Tervishoid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Terveydenhuolto',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Soins de santé',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Health Care',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Egészségügy',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Heilsugæsla',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Sanità',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Sveikatos priežiūra',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Veselības aprūpe',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Il-kura tas-saħħa',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Gezondheidszorg',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Helse og omsorg',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Opieka zdrowotna',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Cuidados de saúde',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Sănătate',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Zdravotnícka starostlivosť',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Zdravstveno varstvo',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Hälsovård',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84a1bd37-d7af-4d5f-9c14-bb25e3d0d28c',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Migrant workers',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'migrant_workers',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Работници мигранти',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Migrující pracovníci',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Vandrende arbejdstagere',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Wanderarbeitnehmer',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Διακινούμενοι εργαζόμενοι',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Migrant workers',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Trabajadores emigrantes',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Võõrtöötajad',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Siirtotyöläiset',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Travailleurs migrants',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Migrant workers',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Bevándorló munkavállalók',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Farandverkafólk',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Lavoratori migranti',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Darbuotojai migrantai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Migrējošie darba ņēmēji',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Ħaddiema migranti',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Migrerende werknemers',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Vandrearbeidere',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Pracownicy migrujący',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Trabalhadores migrantes',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Lucrători migranţi',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Migrujúci pracovníci',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Delavci migranti',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Gästarbetare',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '84db267f-3929-401c-8bb9-492c256d5242',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '6.2. Operational Networking',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8b9e5d84-e921-4b97-9ffe-04a509ca2d8f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_and_corporate_communications_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '6.2. Operational Networking',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '8b9e5d84-e921-4b97-9ffe-04a509ca2d8f',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
    ),
  );
  $terms[] = array(
    'name' => '4.1. Healthy Workplace Campaign (HWC): Working together for risk prevention',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f1f0efc-a820-4e0a-858f-0abefa0a78ab',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'raising_awareness_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '4.1. Healthy Workplace Campaign (HWC): Working together for risk prevention',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '8f1f0efc-a820-4e0a-858f-0abefa0a78ab',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
    ),
  );
  $terms[] = array(
    'name' => 'Mainstreaming OSH into education',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'mainstreaming_osh_into_education',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Включване на БЗУТ в образованието',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Zaměření BOZP na vzdělávání',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Integration af arbejdsmiljø i uddannelse',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Einbeziehung des Themas Sicherheit und Gesundheitsschutz bei der Arbeit in die Bildung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Ένταξη της Επαγγελματικής Ασφάλειας & Υγείας στην εκπαίδευση',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Mainstreaming OSH into education',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Integración de la SST en la educación',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Tööohutuse ja töötervishoiu süvalaiendamine hariduses',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'TTT-asiat osaksi koulusta',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La SST et l\'éducation',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'A munkavédelem beépítése az oktatásba',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Integrazione della SSL nell’istruzione',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'OSH įtraukimas į švietimą',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'DDV popularizēšana izglītībā',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'L-implimentazzjoni tal-OHS fl-Edukazzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Het integreren van veiligheid en gezondheid op het werk in het onderwijs',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Włączanie BHP do głównego nurtu kształcenia',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Investigação',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Integrarea SSM în educaţie',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Prenikanie BOZP do vzdelania',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Vključevanje varnosti in zdravja pri delu v izboraževanje',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Integrera arbetsmiljön i utbildningen',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '94d0e9f0-9722-4cce-b0ff-5a570dcb414f',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Women and OSH',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9532d0b9-b8ca-4a4f-bab0-bcc49a4a9b18',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'women_and_osh',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Women and OSH',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9532d0b9-b8ca-4a4f-bab0-bcc49a4a9b18',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '1.1. Foresight of new and emerging OSH risks  associated with new technologies in green jobs',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '981044b4-313e-494c-abab-40e139c26244',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'anticipating_change_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '1.1. Foresight of new and emerging OSH risks  associated with new technologies in green jobs',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '981044b4-313e-494c-abab-40e139c26244',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '00cf9383-d3f2-4220-a8a2-42a0d4b4a33b',
    ),
  );
  $terms[] = array(
    'name' => '4.4. Awareness raising actions',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9a44b23c-2e25-4133-a5a6-200e85a2f3a3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'raising_awareness_4',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '4.4. Awareness raising actions',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => '9a44b23c-2e25-4133-a5a6-200e85a2f3a3',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
    ),
  );
  $terms[] = array(
    'name' => 'Napo',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'publication',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'napo',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Напо',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Napo',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => '9c242673-d19b-4b53-8567-fd6e613f5f44',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Workplace Health Promotion',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'workplace_health_promotion',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Насърчаване на здравето на работното място',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Podpora ochrany zdraví na pracovišti',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Fremme af sundheden på arbejdspladsen',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Betriebliche Gesundheitsförderung',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Προαγωγή της υγείας στον χώρο εργασίας',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Workplace Health Promotion',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Fomento de la Salud en el Trabajo',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Töötervise edendamine',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Terveyden edistäminen työpaikoilla',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Promotion de la santé sur le lieu de travail',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Munkahelyi egészségfejlesztés',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Heilsuefling á vinnustað',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Promozione della salute nei luoghi di lavoro',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Skatinimas kurti sveikas darbo vietas',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Veselības veicināšana darbavietā',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Il-Promozzjoni tas-Saħħa fuq il-Post tax-Xogħol',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Bevordering van gezondheid op het werk',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Helsefremmende arbeidsplasser',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Promowanie zdrowych miejsc pracy',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Promoção da saúde no local de trabalho',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Promovarea sănătăţii la locul de muncă',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Podpora ochrany zdravia na pracovisku',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Spodbujanje zdravja na delovnem mestu',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Hälsofrämjande insatser på arbetsplatsen',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a3e45cb1-4f6e-47a3-9acc-6e0def05f4dc',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '7.3. Human Resources',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a45acdc6-c5cd-4590-bd0a-145a80e204e4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'governance_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '7.3. Human Resources',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'a45acdc6-c5cd-4590-bd0a-145a80e204e4',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'f77ff1e1-cccc-4f56-b470-ad638467b135',
    ),
  );
  $terms[] = array(
    'name' => 'Campaign 2014-2015',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'publication',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'campaign_2014_2015',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Кампания 2014 - 2015 г.',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Kampaň 2014–2015',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Kampagne 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Kampagne 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Εκστρατεία 2014-2015',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Campaign 2014-2015',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Campaña 2014 -2015',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Kampaania 2014–2015',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Vuosien 2014 - 2015 kampanja',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Campagne 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Kampanja 2014. – 2015.',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => '2014-2015. évi kampány',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Herferð 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Campagna 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => '2014–2015 m. kampanija',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Kampaņa 2014 – 2015',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Kampanja 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Campagne 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Kampanje 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Europejska Kampania 2014-2015',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Campanha 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Campania 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Kampaň 2014 – 2015',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Kampanja 2014 - 2015',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Kampanj 2014–2015',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a4ae6370-5185-40d1-b6dd-fbcfe4f114bf',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Microenterprises',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5c13f57-77aa-4874-9afd-f182456ab8ee',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'microenterprises',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Microenterprises',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Microempresas',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Microenterprises',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Microîntreprinderi',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a5c13f57-77aa-4874-9afd-f182456ab8ee',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a5c13f57-77aa-4874-9afd-f182456ab8ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a5c13f57-77aa-4874-9afd-f182456ab8ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'a5c13f57-77aa-4874-9afd-f182456ab8ee',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '4.2. Healthy Workplace Campaign (HWC): Healthy Workplaces manage stress',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'abecc2cf-c60c-4be6-8d3d-10d03d051feb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'raising_awareness_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '4.2. Healthy Workplace Campaign (HWC): Healthy Workplaces manage stress',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'abecc2cf-c60c-4be6-8d3d-10d03d051feb',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
    ),
  );
  $terms[] = array(
    'name' => '2.4. OSH overview : Work-related diseases',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b26d842e-3a43-4f77-a2cc-0d2df9412e29',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures_4',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2.4. OSH overview : Work-related diseases',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'b26d842e-3a43-4f77-a2cc-0d2df9412e29',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    ),
  );
  $terms[] = array(
    'name' => 'HORECA',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'horeca',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'ХОРЕКА',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'HORECA',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'b3f4cde5-9c8c-4532-978b-a204c01a15b2',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Statistics',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'statistics',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Статистика',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Statistika',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Statistik',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Statistik',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Στατιστικά στοιχεία',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Statistics',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Estadísticas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Statistika',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Tilastot',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Statistiques',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Statisztikák',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Statistiche',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Statistika',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Statistika',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Statistiċi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Statistiek',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Statystyka',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Estatísticas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Statistici',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Štatistiky',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Statistika',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Statistik',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bbc824c8-e39a-4d99-9143-78363d49a89d',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Construction',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'construction',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Bygge- og anlægssektoren',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Hoch- und Tiefbau',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Construcción',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Ehitussektor',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Építés',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Edilizia',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Statyba',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Būvniecība',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Kostruzzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Construction',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'bdccd06a-1c16-462c-8ba9-52e7c61e2b15',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '6.3. Corporate Communications',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c2c4838f-f565-49d0-8318-d2ad08add644',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_and_corporate_communications_3',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '6.3. Corporate Communications',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'c2c4838f-f565-49d0-8318-d2ad08add644',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
    ),
  );
  $terms[] = array(
    'name' => '4.3. Healthy Workplace Campaign (HWC): 2016-17',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cafceb2e-0be4-4e47-ad9a-781b708f58e6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'raising_awareness_3',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '4.3. Healthy Workplace Campaign (HWC): 2016-17',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'cafceb2e-0be4-4e47-ad9a-781b708f58e6',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '57c7ff22-5cd8-49c4-8789-262d2a3453bd',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'agriculture',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Zemědělství',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Landbrug',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Landwirtschaft',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Γεωργία',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Agricultura',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Põllumajandus',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Maatalous',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Mezőgazdaság',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Agricoltura',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Žemės ūkis',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Lauksaimniecība',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Agrikoltura',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Landbouw',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Rolnictwo',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Agricultura',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Agricultură',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Poľnohospodárstvo',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Kmetijstvo',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Jordbruk',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'cc1b6782-3780-441b-abc7-02ecb46218fa',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '6.1. Strategic Networking',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd38c0d0c-fd42-4b0c-ab9d-02cb0e66d6e5',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'networking_and_corporate_communications_1',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '6.1. Strategic Networking',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'd38c0d0c-fd42-4b0c-ab9d-02cb0e66d6e5',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '6d67c342-6a54-409f-a512-9796ab5d2fc0',
    ),
  );
  $terms[] = array(
    'name' => '8: Operational Management and Support',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd84eb437-a202-4c8b-84c8-537ad1d2c5f5',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'operational_management_and_support',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '8: Operational Management and Support',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'd84eb437-a202-4c8b-84c8-537ad1d2c5f5',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '1.2. Large-scale foresight',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1e5ddc6-1c79-4bf9-8e4a-2f83b12483ef',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'anticipating_change_2',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '1.2. Large-scale foresight',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'e1e5ddc6-1c79-4bf9-8e4a-2f83b12483ef',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => '00cf9383-d3f2-4220-a8a2-42a0d4b4a33b',
    ),
  );
  $terms[] = array(
    'name' => 'Ageing and OSH',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e424b19c-5dc8-474a-a787-c80debb3b8bb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'ageing_and_osh',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Ageing and OSH',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'e424b19c-5dc8-474a-a787-c80debb3b8bb',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '2: Facts and figures',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'facts_and_figures',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '2: Facts and figures',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'e9fa57e4-b0c3-476b-898c-176ae24d6062',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Noise',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(
      'und' => array(
        0 => array(
          'value' => 'article',
        ),
        1 => array(
          'value' => 'page',
        ),
        2 => array(
          'value' => 'blog',
        ),
        3 => array(
          'value' => 'highlight',
        ),
        4 => array(
          'value' => 'job_vacancies',
        ),
        5 => array(
          'value' => 'news',
        ),
        6 => array(
          'value' => 'press_release',
        ),
      ),
    ),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'noise',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'cs' => array(
        0 => array(
          'value' => 'Hluk při práci',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Støj på arbejdspladsen',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Lärm bei der Arbeit',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Θόρυβος στην εργασία',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Noise',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'El ruido en el trabajo',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Müra töökohal',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Työperäinen melu',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Le bruit au travail',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Munkahelyi zaj',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Noise',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Rumore nei luoghi di lavoro',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Triukšmas darbe',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Troksnis darbā',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Storbju fuq ix-xogħol',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Lawaai op het werk',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Hałas w miejscu pracy',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Ruído no trabalho',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Zgomot',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Hluk pri práci',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Hrup pri delu',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Buller på arbetet',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'ee02a481-7613-4269-9f0d-e3aa27a6b6ed',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Musculoskeletal disorders',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'musculoskeletal_disorders',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Мускулно-скелетни смущения',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Muskuloskeletální poruchy',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Muskel- og skeletbesvær',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Muskel- und Skeletterkrankungen',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Μυοσκελετικές παθήσει',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Musculoskeletal disorders',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Trastornos musculoesqueléticos',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Luu- ja lihaskonna vaevused',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Tuki- ja liikuntaelinsairaudet',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Troubles musculo-squelettiques',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'A váz- és izomrendszeri megbetegedések',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Disturbi muscoloscheletrici',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Kaulų ir raumenų sistemos pažeidimai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Balsta un kustību aparāta slimības',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Problemi muskuloskeletali',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Aandoeningen aan het bewegingsapparaat',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Choroby układu mięśniowo-szkieletowego',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Perturbações músculo-esqueléticas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Afecţiunile aparatului locomotor',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Poškodenia podporno-pohybovej sústavy',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Mišično-kostna obolenja',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Belastningsbesvär',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'f11d06a6-e3d1-4e7d-ae06-a4a4ea9c388a',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '7: Governance',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f77ff1e1-cccc-4f56-b470-ad638467b135',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'governance',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '7: Governance',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'f77ff1e1-cccc-4f56-b470-ad638467b135',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Good OSH is good for business',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_excluded_from' => array(),
    'field_tags_code' => array(
      'und' => array(
        0 => array(
          'value' => 'good_osh_is_good_for_business',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Доброто управление на БЗР е добро за бизнеса',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Dobrá BOZP je přínosem pro firmu',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Et godt arbejdsmiljø er godt for din virksomhed',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Gute Sicherheits- und Gesundheitsschutzmaßnahmen bei der Arbeit bedeuten geschäftlichen Erfolg',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Η καλή διαχείριση της ΕΑΥ είναι επωφελής για τις επιχειρήσεις',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Good OSH is good for business',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Una buena SST es un buen negocio',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Hea tööohutus ja töötervishoid on hea äritegevusele',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Hyvä työterveys ja työturvallisuus on yrityksen etu',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La sécurité et la santé au travail, un atout pour l\'entreprise',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Dobar OSH (sigurnost i zdravlje na radu) dobar je za poslovanje',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Dobar OSH (sigurnost i zdravlje na radu) dobar je za poslovanje',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Góð vinnuvernd er góð fyrir viðskiptin',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Una buona SSL è un vantaggio dal punto di vista economico',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Gera darbuotojų sauga ir sveikata (DSS) yra naudinga verslui',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'DDVA nāk par labu uzņēmumam',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'OHS tajba hija tajba għan-negozju',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Veiligheid en gezondheid op het werk is goed voor uw bedrijf',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'God HMS-praksis er bra for bedriften',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Wysoki poziom BHP opłaca się przedsiębiorstwom',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Bons níveis de SST são um bom negócio',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Securitatea şi sănătatea în muncă. În beneficiul companiilor',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Dobrá bezpečnosť a ochrana zdravia pri práci je prínosom pre podniky',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Dobrá bezpečnosť a ochrana zdravia pri práci je prínosom pre podniky',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'En bra arbetsmiljö är bra för affärerna',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411328866,
          'entity_uuid' => 'fd147cda-e7c1-4ce3-ba57-8cdae4c5bc01',
          'user_uuid' => '8e90e364-c730-4da9-9e38-34e114de97cf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '7.5. Documentation',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fdfcaba5-538e-42e1-aa7f-0e747e1766bb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'activity',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_activity_code' => array(
      'und' => array(
        0 => array(
          'value' => 'governance_3',
          'format' => NULL,
        ),
      ),
    ),
    'field_activity_level' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => '7.5. Documentation',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1410866602,
          'entity_uuid' => 'fdfcaba5-538e-42e1-aa7f-0e747e1766bb',
          'user_uuid' => '127b5e45-139c-448f-9a7c-f1cb71cc63e4',
        ),
      ),
    ),
    'metatags' => array(),
    'parent' => array(
      0 => 'f77ff1e1-cccc-4f56-b470-ad638467b135',
    ),
  );
  return $terms;
}
