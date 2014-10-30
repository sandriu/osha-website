<?php

define("ATTRIBUTE_ID", "data-translation-id");

class OshaTMGMTRetranslate {

  /**
   * Add data-translation-id for level 1 HTML elements
   */
   public static function prepare_text($text) {
   $DOM = new DOMDocument;
   $DOM->loadHTML($text);
   
   $body = $DOM->getElementsByTagName('body')->item(0);
   $items = $body->childNodes;
   // get all existing ID's and compute max
   $max = 0;
   $id_list = array();
   for($i = 0; $i < $items->length; $i++) {
     $id = $items->item($i)->getAttribute(ATTRIBUTE_ID);
     if (!empty($id)) {
       if (in_array($id, $id_list)) {
         // prevent duplicates
         $items->item($i)->removeAttribute(ATTRIBUTE_ID);
       } else {
         $id_list[] = $id;
         $max = max($id, $max);
       }
     }
   }
   // once again, and set id's where we have new tags
   $current_id = $max+1;
   for($i = 0; $i < $items->length; $i++) {
     $item = $items->item($i);
     if (empty($item->getAttribute(ATTRIBUTE_ID))) {
       $item->setAttribute(ATTRIBUTE_ID, $current_id++);
     }
   }
   
   $Document = new DOMDocument();
   for($i = 0; $i < $items->length; $i++) {
     $Document->appendChild($Document->importNode($items->item($i),true));
   }
   return $Document->saveHTML();
 }
}