<?php

/**
 * Class MigrationUtil provides generic utility functionality to migrations.
 */
class MigrationUtil {

  /**
   * Extract source file for the migration.
   *
   * @param array $arguments
   *   Migration arguments
   *
   * @return string
   *   Path to the migration data file
   * @throws Exception If the file is not accessible
   */
  public static function getSourceFile($arguments) {
    $file = NULL;
    if (isset($arguments['file_name'])) {
      $file = $arguments['file_name'];
      if (!file_exists($file) || !is_readable($file)) {
        throw new Exception("Cannot read migration file $file");
      }
    }
    else {
      throw new Exception('Missing "file_name" migration argument');
    }
    return $file;
  }


  /**
   * Find terms in the given vocabulary by matching on its fields (i.e. name).
   *
   * @param string $vocabulary_name
   *   Vocabulary machine name
   * @param string $field_match
   *   Name of the field to match against (i.e. name)
   * @param string $terms
   *   Array of field values to match
   * @param string $language
   *   Field will be inspected on this language
   *
   * @return array
   *   Array of tids. An warning is shown if the number of returned
   * terms does not match the input
   *
   * Note: This method does static caching and loads entire vocabulary for reuse
   * thus is recommended to use when taxonomy does not change during migration.
   */
  public static function findTidByTaxonomyField($vocabulary_name, $field_match, $terms, $language = LANGUAGE_NONE) {
    $ret = array();
    $terms = array_filter($terms, 'strlen');
    $terms = array_map('trim', $terms);
    $field_values = self::cache_vocabulary_terms_fields($vocabulary_name, $field_match, $language);
    $misses = array();
    foreach ($terms as $t) {
      if (array_key_exists($t, $field_values)) {
        $ret[] = $field_values[$t];
      } else {
        $misses[] = $t;
      }
    }
    if (count($misses)) {
      drupal_set_message(
        t('Could not find term(s) "@terms" in @voc vocabulary',
          array('@terms' => implode(', ', $misses), '@voc' => $vocabulary_name)
        ),
        'warning'
      );
    }

    return $ret;
  }

  /**
   * Cache vocabulary terms mapped to tid. Use to find tid.
   * @param string $vocabulary_name Vocabulary name
   * @param string $field_name Field name (to inspect the term's field)
   * @param string $language (Optional) Language, default Language none.
   * @return array Array of tids or empty if no term was found in that language
   */
  protected static function cache_vocabulary_terms_fields($vocabulary_name, $field_name, $language = LANGUAGE_NONE) {
    static $cache = array();
    if (empty($cache[$vocabulary_name][$field_name][$language])) {
      $voc = taxonomy_vocabulary_machine_name_load($vocabulary_name);
      $terms = taxonomy_get_tree($voc->vid, 0, NULL, TRUE);
      foreach ($terms as $term) {
        if(!empty($term->{$field_name}[$language][0]['value'])) {
          $value = $term->{$field_name}[$language][0]['value'];
          $cache[$vocabulary_name][$field_name][$language][$value] = $term->tid;
        }
      }
    }
    if(isset($cache[$vocabulary_name][$field_name][$language])) {
      return $cache[$vocabulary_name][$field_name][$language];
    }
    return array();
  }


  static function decode_tags_terms($terms_str, $term_field = 'field_tags_code') {
    $terms = explode(',', $terms_str);
    $terms = array_unique($terms);
    $terms = array_map('trim', $terms);

    $ret = array();
    $replace = array(
      'accident_prevention' => 'accident_prevention',
      'ageing' => 'ageing_and_osh',
      'businessOSH' => 'good_osh_is_good_for_business',
      'campaign_2014_15' => 'campaign_2014_2015',
      'dangerous_substances' => 'dangerous_substances',
      'economic_incentives' => 'good_osh_is_good_for_business',
      'education' => 'mainstreaming_osh_into_education',
      'osh_education' => 'mainstreaming_osh_into_education',
      'osheducation' => 'mainstreaming_osh_into_education',
      'esener' => 'esener',
      'foresight' => 'emerging_risks',
      'gender' => 'women_and_osh',
      'green_jobs' => 'green_jobs',
      'legislation' => 'legislation',
      'management_leadership' => 'leadership',
      'msd' => 'musculoskeletal_disorders',
      'nanotechnology' => 'nanomaterials',
      'prevention' => 'accident_prevention',
      'risk_observatory' => 'emerging_risks',
      'risks' => 'emerging_risks',
      'stress' => 'psychosocial_risks_and_stress',
      'young_people' => 'osh_and_young_people',
      'young_people::educators_mainstreaming' => 'mainstream-ing_osh_into_education',
    );
    foreach ($terms as $term) {
      if (array_key_exists($term, $replace)) {
        $ret[] = $replace[$term];
      }
      else {
        $exp = explode('::', $term);
        if (count($exp) == 2) {
          $cat = $exp[0];
          if (array_key_exists($cat, $replace)) {
            $ret[] = $replace[$cat];
          }
        }
      }
    }
    return self::findTidByTaxonomyField(TAXONOMY_TAGS, $term_field, $ret, LANGUAGE_NONE);
  }

  /**
   * Register and run a migration.
   *
   * @param string $machine_name
   *   Unique migration machine name
   * @param string $klass
   *   Migration class
   * @param string $file
   *   Migration file, argument passed to migration
   *
   * @return object
   *   Migration instance
   */
  public static function runMigration($machine_name, $klass, $file) {
    Migration::registerMigration(
      $klass,
      $machine_name,
      array(
        'group_name' => 'OSHA TEST MIGRATIONS',
        'file_name' => $file,
      )
    );
    $migration = Migration::getInstance($machine_name);
    return $migration->processImport();
  }

  static function getProjectConfig() {
    return json_decode(file_get_contents(DRUPAL_ROOT . '/../conf/config.json'), TRUE);
  }
}