<?php

define("ATTRIBUTE_ID", "id");
define("ID_PREFIX", "tmgmt-");

class OshaTMGMTRetranslate {

  /**
   * Add data-translation-id for level 1 HTML elements
   */
   public static function prepare_text($text) {
     $DOM = new DOMDocument;
     $text = mb_convert_encoding($text, 'HTML-ENTITIES', 'UTF-8');
     $DOM->loadHTML($text);
     
     $body = $DOM->getElementsByTagName('body')->item(0);
     $items = $body->childNodes;
     // Get all existing ID's and compute max
     $max = 0;
     for($i = 0; $i < $items->length; $i++) {
       $id = $items->item($i)->getAttribute(ATTRIBUTE_ID);
       if (!empty($id) && !preg_match('/^'.ID_PREFIX.'/', $id)) {
         // invalid id, remove it
         $items->item($i)->removeAttribute(ATTRIBUTE_ID);
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
       if (empty($item->getAttribute(ATTRIBUTE_ID))) {
         $item->setAttribute(ATTRIBUTE_ID, ID_PREFIX.($current_id++));
       }
     }
     
     $Document = new DOMDocument();
     for($i = 0; $i < $items->length; $i++) {
       $Document->appendChild($Document->importNode($items->item($i),true));
     }
     return html_entity_decode($Document->saveHTML());
  }
  
  /*
    Set checkbox if a revision has been translated and body has been changed
  */
  public static function mark_dirty($node) {
    $node_lang = $node->translations->original;
    $new_text = $node->body[$node_lang][0]['value'];
    $old_text = $node->original->body[$node_lang][0]['value'];
    if (trim($new_text) != trim($old_text)) {
      $node->field_needs_retranslation[LANGUAGE_NONE][0]['value'] = 1;
    }
  }
}