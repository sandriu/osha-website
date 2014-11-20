<?php
/**
 * @file
 * osha_press_contact.features.uuid_nodequeue_item.inc
 */

/**
 * Implements hook_uuid_features_default_nodequeue_items().
 */
function osha_press_contact_uuid_features_default_nodequeue_items() {
  $nodequeue_items = array();

  $nodequeue_items[] = array(
    'queue_name' => 'press_contacts_queue',
    'node_uuid' => '11674634-a333-4637-9923-bb411b31efe4',
  );
  $nodequeue_items[] = array(
    'queue_name' => 'press_contacts_queue',
    'node_uuid' => '4f6b6753-80a6-4729-92da-b7805d724ad1',
  );
  $nodequeue_items[] = array(
    'queue_name' => 'press_contacts_queue',
    'node_uuid' => '6e2bc8fd-e239-43cd-91cb-b18f08c664fa',
  );
  return $nodequeue_items;
}
