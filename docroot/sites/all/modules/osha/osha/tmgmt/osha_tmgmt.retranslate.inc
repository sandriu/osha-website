<?php

define("ID_PREFIX", "tmgmt-");

class OshaTMGMTRetranslate {

  /**
   * Add data-translation-id for level 1 HTML elements
   */
   public static function prepare_text($text) {
     if (empty($text)) {
       return $text;
     }
     $items = self::getDOMNodeList($text);
     // Get all existing ID's and compute max
     $max = 0;
     for($i = 0; $i < $items->length; $i++) {
       if (get_class($items->item($i)) != 'DOMElement' ) {
         // ignore text between tags and comments, can happen during migration
         continue;
       }
       $id = $items->item($i)->getAttribute('id');
       if (!empty($id) && !preg_match('/^'.ID_PREFIX.'/', $id)) {
         // invalid id, remove it
         $items->item($i)->removeAttribute('id');
         $id = NULL;
       }
       if (!empty($id)) {
         $max = max(substr($id, strlen(ID_PREFIX)), $max);
       }
     }
     // Once again, and set id's where we have new tags
     $current_id = $max+1;
     for($i = 0; $i < $items->length; $i++) {
       $item = $items->item($i);
       if (get_class($items->item($i)) != 'DOMElement' ) {
         // ignore text between tags and comments, can happen during migration
         continue;
       }
       if (empty($item->getAttribute('id'))) {
         $item->setAttribute('id', ID_PREFIX.($current_id++));
       }
     }
     
     return self::getHTML($items);
  }
  
  public static function getDOMDocument($text) {
     $DOM = new DOMDocument;
     libxml_use_internal_errors(true);
     $text = mb_convert_encoding($text, 'HTML-ENTITIES', 'UTF-8');
     $DOM->loadHTML($text);
     libxml_clear_errors();
     return $DOM;
  }
  
  public static function getDOMNodeList($text) {
     $DOM = self::getDOMDocument($text);
     $body = $DOM->getElementsByTagName('body')->item(0);
     return $body->childNodes;
  }
  
  public static function getHTML($domNodeList) {
     $Document = new DOMDocument();
     for($i = 0; $i < $domNodeList->length; $i++) {
       $Document->appendChild($Document->importNode($domNodeList->item($i),true));
     }
     return html_entity_decode($Document->saveHTML());
  }

  public static function getHTMLStructure($text) {
    $items = self::getDOMNodeList($text);
    $structure = array();
    for($i = 0; $i < $items->length; $i++) {
      $item = $items->item($i);
      if (get_class($item) == 'DOMElement' ) {
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
    $new_text = $node->body[$node_lang][0]['value'];
    $old_text = $node->original->body[$node_lang][0]['value'];
    $new_text_plain = preg_replace("/\s+/", "", strip_tags($new_text));
    $old_text_plain = preg_replace("/\s+/", "", strip_tags($old_text));
    if ( $new_text_plain != $old_text_plain) {
      $node->field_needs_retranslation[LANGUAGE_NONE][0]['value'] = 1;
    }
  }

  /*
   * Returns latest revision where original language is synchronized with translations
   */
  public static function get_latest_clean_revision($entity_id) {
    $rev = db_query("SELECT MAX(f.revision_id) FROM {field_revision_field_needs_retranslation} f
      WHERE f.entity_id = :entity_id AND f.field_needs_retranslation_value = 0",
      array(':entity_id' => $entity_id)
    )->fetchField();
    if (!$rev) {
      // No clean revision found, probably field_needs_retranslation_value was not there
      // Return the first available revision
      $rev = db_query("SELECT MIN(nr.vid) FROM {node_revision} nr WHERE nr.nid = :entity_id",
        array(':entity_id' => $entity_id)
      )->fetchField();
    }
    return $rev;
  }
  
  /*
   * Returns latest revision where original language is synchronized with translations
   */
  public static function get_latest_revision($entity_id) {
    $count = db_query("SELECT MAX(f.revision_id) FROM {field_revision_field_needs_retranslation} f
      WHERE f.entity_id = :entity_id",
      array(':entity_id' => $entity_id)
    )->fetchField();
    return $count;
  }

  public static function get_field_value($entity_id, $bundle, $revision, $node_lang = 'en', $field_name = 'body') {
    $entities = array(
      $entity_id => (object)array(
        'type' => $bundle, 'nid' => $entity_id, 'vid' => $revision,
      ),
    );
    $fields = field_info_instances('node', $bundle);
    $field_id = $fields[$field_name]['field_id'];
    field_attach_load_revision('node', $entities, array('field_id' => $field_id));
    $field = $entities[$entity_id]->$field_name;
    return $field[$node_lang][0]['value'];
  }
  
  public static function get_changed_ids($old_text, $new_text) {
    $old_doc = self::getDOMDocument($old_text);
    $new_items = self::getDOMNodeList($new_text);
    // Array of element id's
    $changes = array();
    for($i = 0; $i < $new_items->length; $i++) {
      $new_item = $new_items->item($i);
      $new_id = $new_item->getAttribute('id');
      // Check if added or existing
      $old_item = $old_doc->getElementById($new_id);
      if (!$old_item || $old_item && $old_item->nodeValue !== $new_item->nodeValue ) {
        $changes[] = $new_id;
      }
    }
    return $changes;
  }
  
  public static function get_text_to_retranslate($entity_id, $bundle, $source_lang, $target_lang, $field_name = 'body') {
    $revision = self::get_latest_revision($entity_id);
    $clean_revision = self::get_latest_clean_revision($entity_id);

    // This is the latest version in the source language
    $source_text = self::get_field_value($entity_id, $bundle, $revision, $source_lang, $field_name);
    if (!$clean_revision) {
      // All text must be translated
      return $source_text;
    }
    // The latest version in the target language
    $translated_text = self::get_field_value($entity_id, $bundle, $revision, $target_lang, $field_name);
    if (!$translated_text) {
      return $source_text;
    }
    // This is the most recent version that has been already translated
    $clean_source_text = self::get_field_value($entity_id, $bundle, $clean_revision, $source_lang, $field_name);
    // This is just a list of element id's (changed or added in the source language)
    $changed_ids = self::get_changed_ids($clean_source_text, $source_text);
    
    $translated_doc = self::getDOMDocument($translated_text);
    // Changed/added elements will be added here
    $changes = new DOMDocument();
    $source_items = self::getDOMNodeList($source_text);
    for($i = 0; $i < $source_items->length; $i++) {
      $source_item = $source_items->item($i);
      if ( in_array($source_item->getAttribute('id'), $changed_ids) ) {
        // this element has been changed, no need to check the translations
        $changes->appendChild($changes->importNode($source_item, true));
      } else if (!$translated_doc->getElementById($source_item->getAttribute('id'))) {
        // This item does not exist at all in the translated version
        $changes->appendChild($changes->importNode($source_item,true));
      }
    }
    return html_entity_decode($changes->saveHTML());
  }
  
  /**
    * Input: $node->nid
    * The latest clean revision is returned in $revision
    * Status messages are returned in array $messages
    * Results are returned in arrays $valid_languages and $invalid_languages, keyed by language code
    */
  public static function validate_can_retranslate(&$node, &$vid, &$messages, &$valid_languages, &$invalid_languages) {
    if (!$vid) {
      $vid = self::get_latest_clean_revision($node->nid);
    }
    if (!isset($node->nid)) {
      throw new TMGMTException('node->nid not provided');
    }
    $node = node_load($node->nid, $vid);
    $orig_lang = $node->translations->original;
    $orig_structure = self::getHTMLStructure($node->body[$orig_lang][0]['value']);
    $languages = array_keys($node->body);
    if (count($languages) == 1 ) {
      $messages[] = t('Node has no translations');
      return;
    }
    $valid_languages = array();
    foreach ($languages as $lang) {
      if ($lang == $orig_lang) {
        continue;
      }
      $html = $node->body[$lang][0]['value'];
      $diffs = array_diff_assoc($orig_structure, self::getHTMLStructure($html));
      if (!empty($diffs)) {
        $first_diff = current(array_keys($diffs));
        // Add first different tag in returned data
        $invalid_languages[$lang] = array($diffs[$first_diff], $first_diff);
      } else {
        $valid_languages[] = $lang;
      }
    }
    if (!empty($valid_languages)) {
      $messages[] = t('Node can be re-translated in ').implode(",", $valid_languages);
    }
    if (!empty($invalid_languages)) {
      $messages[] = t('Node cannot be re-translated in ').implode(",", array_keys($invalid_languages));
    }
  }
}