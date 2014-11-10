<?php

define("ID_PREFIX", "tmgmt-");

class OshaTMGMTRetranslate {

  /**
   * Add data-translation-id for level 1 HTML elements.
   */
  public static function prepare_text($text) {
    if (empty($text)) {
      return $text;
    }
    $items = self::getDOMNodeList($text);
    // Get all existing ID's and compute max.
    $max = 0;
    for ($i = 0; $i < $items->length; $i++) {
      if (get_class($items->item($i)) != 'DOMElement') {
        // Ignore text between tags and comments, can happen during migration.
        continue;
      }
      $id = $items->item($i)->getAttribute('id');
      if (!empty($id) && !preg_match('/^' . ID_PREFIX . '/', $id)) {
        // Invalid id, remove it.
        $items->item($i)->removeAttribute('id');
        $id = NULL;
      }
      if (!empty($id)) {
        $max = max(substr($id, strlen(ID_PREFIX)), $max);
      }
    }
    // Once again, and set id's where we have new tags.
    $current_id = $max + 1;
    for ($i = 0; $i < $items->length; $i++) {
      $item = $items->item($i);
      if (get_class($items->item($i)) != 'DOMElement') {
        // Ignore text between tags and comments, can happen during migration.
        continue;
      }
      $item_id = $item->getAttribute('id');
      if (empty($item_id)) {
        $item->setAttribute('id', ID_PREFIX . ($current_id++));
      }
    }
    return self::getHTML($items);
  }

  public static function getDOMDocument($text) {
    $dom = new DOMDocument();
    libxml_use_internal_errors(TRUE);
    $text = mb_convert_encoding($text, 'HTML-ENTITIES', 'UTF-8');
    $dom->loadHTML($text);
    libxml_clear_errors();
    return $dom;
  }

  public static function getDOMNodeList($text) {
    if (empty($text)) {
      // Return empty array for empty text to avoid warnings
      return new DOMNodeList();
    }
    $dom = self::getDOMDocument($text);
    $body = $dom->getElementsByTagName('body')->item(0);
    return $body->childNodes;
  }

  public static function getElementById($domNodeList, $id) {
    // Use this function instead of doc->getElementById, which needs to validate the DOM.
    // Validation requires HTTP access to http://www.w3.org/TR/REC-html40/loose.dtd
    if (!$domNodeList) {
      return NULL;
    }
    for($i = 0; $i < $domNodeList->length; $i++) {
      $item = $domNodeList->item($i);
      if (get_class($item) == 'DOMElement' && $item->getAttribute('id') == $id) {
        return $item;
      }
    }
    return NULL;
  }
  
  public static function getHTML($domNodeList) {
    $dom = new DOMDocument();
    for ($i = 0; $i < $domNodeList->length; $i++) {
      $dom->appendChild($dom->importNode($domNodeList->item($i), TRUE));
    }
    return html_entity_decode($dom->saveHTML());
  }

  public static function getHTMLStructure($text) {
    $items = self::getDOMNodeList($text);
    $structure = array();
    for ($i = 0; $i < $items->length; $i++) {
      $item = $items->item($i);
      if (get_class($item) == 'DOMElement') {
        $structure[$item->getAttribute('id')] = $item->tagName;
      }
    }
    return $structure;
  }

  /*
   * Set checkbox if a revision has been translated and body has been changed
   */
  public static function mark_dirty($node) {
    $node_lang = $node->translations->original;
    if (empty($node->body[$node_lang])) {
      return;
    }
    $new_text = $node->body[$node_lang][0]['value'];
    if (!isset($node->original->body[$node_lang])) {
      // No body before.
      $old_text = '';
    }
    else {
      $old_text = $node->original->body[$node_lang][0]['value'];
    }
    $new_text_plain = preg_replace("/\s+/", "", strip_tags($new_text));
    $old_text_plain = preg_replace("/\s+/", "", strip_tags($old_text));
    if ($new_text_plain != $old_text_plain) {
      $node->field_needs_retranslation[LANGUAGE_NONE][0]['value'] = 1;
    }
  }

  /*
   * Return latest revision where original language is synchronized with translations.
   */
  public static function get_latest_clean_revision($entity_id) {
    $rev = db_query("SELECT MAX(f.revision_id) FROM {field_revision_field_needs_retranslation} f
      WHERE f.entity_id = :entity_id AND f.field_needs_retranslation_value = 0",
      array(':entity_id' => $entity_id)
    )->fetchField();
    if (!$rev) {
      // No clean revision found, probably field_needs_retranslation_value
      // was not there. Return the first available revision.
      $rev = db_query("SELECT MIN(nr.vid) FROM {node_revision} nr WHERE nr.nid = :entity_id",
        array(':entity_id' => $entity_id)
      )->fetchField();
    }
    return $rev;
  }

  /*
   * Returns latest revision where original language is synchronized with translations.
   */
  public static function get_latest_revision($entity_id) {
    $rev = db_query("SELECT MAX(f.revision_id) FROM {field_revision_field_needs_retranslation} f
      WHERE f.entity_id = :entity_id",
      array(':entity_id' => $entity_id)
    )->fetchField();
    if (!$rev) {
      // No revision found, probably field_needs_retranslation_value
      // was not there. Return the latest available revision.
      $rev = db_query("SELECT MAX(nr.vid) FROM {node_revision} nr WHERE nr.nid = :entity_id",
        array(':entity_id' => $entity_id)
      )->fetchField();
    }
    return $rev;
  }

  public static function get_field_value($entity_id, $bundle, $revision,
                                         $lang = 'en', $field_name = 'body') {
    $entities = array(
      $entity_id => (object) array(
        'type' => $bundle,
        'nid' => $entity_id,
        'vid' => $revision,
      ),
    );
    $fields = field_info_instances('node', $bundle);
    $field_id = $fields[$field_name]['field_id'];
    field_attach_load_revision('node', $entities, array('field_id' => $field_id));
    $field = $entities[$entity_id]->$field_name;
    if (!isset($field[$lang])) {
      return NULL;
    }
    if (isset($field[$lang][0]['fid'])) {
      // @todo handle files and image
      return NULL;
    }
    return $field[$lang][0]['value'];
  }

  public static function get_changed_ids($old_text, $new_text) {
    $old_items = self::getDOMNodeList($old_text);
    $new_items = self::getDOMNodeList($new_text);
    // Array of element id's
    $changes = array();
    for ($i = 0; $i < $new_items->length; $i++) {
      $new_item = $new_items->item($i);
      if (get_class($new_item) != 'DOMElement') {
        continue;
      }
      $new_id = $new_item->getAttribute('id');
      // Check if added or existing.
      $old_item = self::getElementById($old_items, $new_id);
      if (!$old_item || $old_item->nodeValue !== $new_item->nodeValue ) {
        $changes[] = $new_id;
      }
    }
    return $changes;
  }

  public static function get_text_to_retranslate($entity_id, $bundle,
                                                 $source_lang, $target_lang,
                                                 $field_name = 'body') {
    $revision = self::get_latest_revision($entity_id);
    $clean_revision = self::get_latest_clean_revision($entity_id);

    // This is the latest version in the source language.
    $source_text = self::get_field_value($entity_id, $bundle, $revision, $source_lang, $field_name);
    if (!$clean_revision) {
      // All text must be translated.
      return $source_text;
    }
    // This is the most recent version that has been already translated.
    $clean_source_text = self::get_field_value($entity_id, $bundle, $clean_revision, $source_lang, $field_name);
    // If field is not body, check if has been changed in the source language.
    if ($field_name != 'body' && $source_text != $clean_source_text) {
      return $source_text;
    }
    // For body, get the different paragraphs only.
    // The latest version in the target language.
    $translated_text = self::get_field_value($entity_id, $bundle, $revision, $target_lang, $field_name);
    if (!$translated_text) {
      return $source_text;
    }
    if ($field_name != 'body') {
      // If we got here for other fields it means that target_lang exists,
      // but field has not been changed, so no re-translation is needed.
      return NULL;
    }

    // Just a list of element id's (changed or added in the source language).
    $changed_ids = self::get_changed_ids($clean_source_text, $source_text);

    $translated_items = self::getDOMNodeList($translated_text);
    // Changed/added elements will be added here.
    $changes = new DOMDocument();
    $source_items = self::getDOMNodeList($source_text);
    for ($i = 0; $i < $source_items->length; $i++) {
      $source_item = $source_items->item($i);
      if (get_class($source_item) != 'DOMElement') {
        continue;
      }
      if (in_array($source_item->getAttribute('id'), $changed_ids)) {
        // This element has been changed in source language,
        // so it is added by default.
        $changes->appendChild($changes->importNode($source_item, TRUE));
      }
      else {
        if (!self::getElementById($translated_items, $source_item->getAttribute('id'))) {
          // This item does not exist at all in the translated version.
          $changes->appendChild($changes->importNode($source_item, TRUE));
        }
      }
    }
    if ($changes->hasChildNodes()) {
      return html_entity_decode($changes->saveHTML());
    }
    else {
      return NULL;
    }
  }

  /**
   * Input: $node->nid
   * The latest clean revision is returned in $vid
   * Status messages are returned in array $messages[key => severity_level][]
   * $valid_languages is a simple array with language code as elements
   * $invalid_languages[language_code] contains detailed explanatory messages
   * @todo Check all full_html fields, not only in body!
   */
  public static function validate_can_retranslate(&$node, &$messages,
                                                  &$valid_languages,
                                                  &$invalid_languages)
  {
    if (!isset($node->nid)) {
      throw new TMGMTException('node->nid not provided');
    }
    $vid = self::get_latest_clean_revision($node->nid);
    $old_node = node_load($node->nid, $vid);
    $orig_lang = $old_node->translations->original;
    if (empty($old_node->body)) {
      $clean_source_text = '';
      $orig_structure = array();
    } else {
      $clean_source_text = $old_node->body[$orig_lang][0]['value'];
      $orig_structure = self::getHTMLStructure($old_node->body[$orig_lang][0]['value']);
    }
    $latest_rev = self::get_latest_revision($node->nid);
    $messages['status'][] = t('Comparing revision @latest to revision @original in source language @lang',
      array('@latest' => $latest_rev, '@original' => $vid, '@lang' => strtoupper($orig_lang)));

    $node = node_load($node->nid, $latest_rev);
    if (empty($node->body)) {
      $source_text = '';
      $new_structure = array();
    } else {
      $source_text = $node->body[$orig_lang][0]['value'];
      $new_structure = self::getHTMLStructure($source_text);
    }

    $languages = array_diff(array_keys($node->translations->data), [$orig_lang]);
    if (!empty($languages)) {
      // Check if source language has been changed and retranslation is possible.
      $result = self::check_same_tags_in_translation($vid, $latest_rev, $orig_structure, $new_structure);
      if (!empty($result)) {
        foreach ($languages as $lang) {
          $result[$lang] = t('Incompatible change in @lang from @tag1 to @tag2', array(
            '@lang' => strtoupper($orig_lang),
            '@tag1' => $result[$vid],
            '@tag2' => $result[$latest_rev]
          ));
          $invalid_languages[$lang] = $result;
        }
        $messages['error'][] = t('Node cannot be re-translated in: ')
          . implode(", ", array_map('strtoupper', $languages));
        return;
      }
    }
    // Check if source language has been changed.
    $changed_ids = self::get_changed_ids($clean_source_text, $source_text);
    if (empty($changed_ids)) {
      $messages['status'][] = t('No changes detected in language @lang.',
        array('@lang' => strtoupper($orig_lang)));
    } else {
      $msg = ' ';
      foreach ($changed_ids as $id) {
        $msg = $msg . '<' . $new_structure[$id] . ' id="' . $id . '">,';
      }
      $messages['status'][] = t('Detected changes in @lang: @msg',
        array('@lang' => strtoupper($orig_lang), '@msg' => substr($msg, 0, -1)));
    }

    if ( empty($languages)) {
      $messages['status'][] = t('Full translation in all languages.');
    }
    $valid_languages = array();
    // Check for incompatibilities
    foreach ($languages as $lang) {
      $translated_structure = self::getHTMLStructure($node->body[$lang][0]['value']);
      // Check if tags in translations match the tags in source language.
      $result = self::check_same_tags_in_translation($orig_lang, $lang, $orig_structure, $translated_structure);
      if (!empty($result)) {
        $invalid_languages[$lang] = $result;
        continue;
      }
      // Check same tags in latest version
      $result = self::check_same_tags_in_translation($orig_lang, $lang, $new_structure, $translated_structure);
      if (!empty($result)) {
        $invalid_languages[$lang] = $result;
        continue;
      }

      // Check if the latest revision of target language contains more tags
      // than the initial revision of the source language.
      $result = self::check_more_tags_in_translation(
        $orig_lang, $lang, $orig_structure, $translated_structure);
      if (!empty($result)) {
        $invalid_languages[$lang] = $result;
        continue;
      }
      // Check if source language has been changed.
      if (!empty($changed_ids)) {
        // Check if target language really needs retranslation and show changes for each valid language.
        $changed_text = self::get_text_to_retranslate($node->nid, $node->type, $orig_lang, $lang, 'body');
        if (empty($changed_text)) {
          $messages['status'][] = t('Language @lang does not need retranslation',
            array('@lang' => strtoupper($lang)));
        } else {
          $valid_languages[] = $lang;
          $changes = self::getHTMLStructure($changed_text);
          $msg = ' ';
          foreach ($changes as $id => $tag) {
            $msg = $msg . '<' . $tag . ' id="' . $id . '">';
          }
          $messages['status'][] = t('Node can be re-translated in @lang. Changes: @msg',
            array('@lang' => strtoupper($lang), '@msg' => $msg));
        }
      }
    }

    if (!empty($invalid_languages)) {
      $messages['error'][] = t('Node cannot be re-translated in: ')
        . implode(", ", array_map('strtoupper', array_keys($invalid_languages)));
    }
  }

  protected static function check_same_tags_in_translation($orig_lang, $lang, $orig_structure, $translated_structure) {
    foreach ($orig_structure as $id => $tag) {
      if (isset($translated_structure[$id]) && $tag != $translated_structure[$id]) {
        return array(
          'id' => $id,
          'source' => $orig_lang,
          $orig_lang => $tag,
          $lang => $translated_structure[$id],
        );
      }
    }
    return NULL;
  }

  protected static function check_more_tags_in_translation($orig_lang, $lang, $orig_structure, $translated_structure) {
    foreach ($translated_structure as $id => $tag) {
      if (!isset($orig_structure[$id])) {
        return array(
          'id' => $id,
          'source' => $orig_lang,
          $orig_lang => NULL,
          $lang => $tag,
        );
        $diffs[$id] = $tag;
      }
    }
    return NULL;
  }

  /**
   * @param string $new_translation contains the translated changes
   * @param string $old_translation represents the old translation
   * @param string $source_text represents the full text in the source language
   */
  public static function get_merged_translation($new_translation,
                                                $old_translation,
                                                $source_text) {
    $orig_structure = self::getHTMLStructure($source_text);
    $new_items = self::getDOMNodeList($new_translation);
    $old_items = self::getDOMNodeList($old_translation);
    $result = new DOMDocument();
    foreach ($orig_structure as $id => $tag) {
      // Follow the structure of the source language.
      // Follow the structure of the source language
      $item = self::getElementById($new_items, $id);
      if ($item) {
        // Found in new translation, now check if the same tag.
        if ($item->tagName == $tag) {
          $result->appendChild($result->importNode($item, TRUE));
        }
        else {
          // We have a different tag in the translation, raise error.
          throw new TMGMTException('Element @id is a <@tag_new> instead of <@tag_old>.',
            array(
              '@id' => $id,
              '@tag_new' => $item->tagName,
              '@tag_old' => $tag,
            ));
        }
      }
      else {
        // Item not found in translation, re-use the old one.
        $item = self::getElementById($old_items, $id);
        if ($item) {
          $result->appendChild($result->importNode($item, TRUE));
        }
        else {
          // We don't have this tag at all, raise error.
          throw new TMGMTException('<@tag id="@id"> not included in translation.',
            array('@id' => $id, '@tag' => $tag));
        }
      }
    }
    // Check for extra tags in the translated text
    // not using getHTMLStructure to avoid the re-creation of a node.
    for($i = 0; $i < $new_items->length; $i++) {
      $item = $new_items->item($i);
      if (get_class($item) == 'DOMElement') {
        $id = $item->getAttribute('id');
        // Should exist in $orig_structure
        if (!isset($orig_structure[$id])) {
          throw new TMGMTException('Unexpected element <@tag id="@id"> in translation.',
            array('@id' => $id, '@tag' => $item->tagName));
        }
      }
    }
    return html_entity_decode($result->saveHTML());
  }

  public static function apply_partial_translation($node, $job_data,
                                                   $source_lang, $target_lang) {
    // Get old_translation from latest clean version.
    $revision = self::get_latest_clean_revision($node->nid);
    if (!$revision) {
      return $job_data;
    }
    foreach ($job_data as $field => $field_data) {
      if ($field == 'body') {
        // Get full reference text from source lang of latest revision.
        $source_text = $node->{$field}[$source_lang][0]['value'];
        $old_translation = self::get_field_value($node->nid, $node->type, $revision, $target_lang, $field);
        if (!$old_translation) {
          // $new_translation contains the entire needed text.
          continue;
        }
        // Get new translation from job data.
        $new_translation = $field_data[0]['value']['#translation']['#text'];
        $source_lang = $node->translations->original;
        $result = self::get_merged_translation($new_translation, $old_translation, $source_text);
        // Write it in job data
        // (must return it, array is passed by value in this function).
        $job_data[$field][0]['value']['#translation']['#text'] = $result;
      }
    }
    // Return the array, passed by value.
    return $job_data;
  }
}
