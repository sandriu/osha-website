<?php

class OSHATMGMTLocaleSourceUIController extends TMGMTLocaleSourceUIController {

  /**
   * Gets locale strings.
   *
   * @param string $textgroup
   *   The locale textgroup.
   * @param string $search_label
   *   Label to search for.
   * @param string $missing_target_language
   *   Missing translation language.
   *
   * @return array
   *   List of i18n strings data.
   */
  function getStrings($textgroup, $search_label = NULL, $missing_target_language = NULL) {
    $osha = cache_get('osha:osha_tmgmt_i18n_string_list');
    if (empty($osha)) {
      $strings = module_invoke_all('osha_tmgmt_i18n_string_list');
      $strings = array_unique($strings);
      $osha = array();
      $all = db_select('locales_source', 'ls')
        ->fields('ls', array('lid', 'source'))
        ->condition('ls.textgroup', $textgroup)
        ->execute()->fetchAllAssoc('lid');
      foreach ($all as $id => $ob) {
        if (in_array($ob->source, $strings)) {
          $osha[] = $id;
        }
      }
      cache_set('osha:osha_tmgmt_i18n_string_list', $osha, 'cache', CACHE_TEMPORARY);
    }
    else {
      $osha = $osha->data;
    }
    $languages = drupal_map_assoc(array_keys(language_list()));
    $select = db_select('locales_source', 'ls')
      ->fields('ls', array('lid', 'source'))
      ->condition('ls.textgroup', $textgroup)
      ->condition('ls.lid', $osha, 'in')
      ->orderBy('source');
    if (!empty($search_label)) {
      $select->condition('ls.source', "%$search_label%", 'LIKE');
    }
    if (!empty($missing_target_language) && in_array($missing_target_language, $languages)) {
      $select->isNull("lt_$missing_target_language.language");
    }
    foreach ($languages as $langcode) {
      $langcode = str_replace('-', '', $langcode);
      $select->leftJoin('locales_target', "lt_$langcode", "ls.lid = %alias.lid AND %alias.language = '$langcode'");
      $select->addField("lt_$langcode", 'language', "lang_$langcode");
    }
    $select = $select->extend('PagerDefault')->limit(variable_get('tmgmt_source_list_limit', 20));
    return $select->execute()->fetchAll();
  }
}
