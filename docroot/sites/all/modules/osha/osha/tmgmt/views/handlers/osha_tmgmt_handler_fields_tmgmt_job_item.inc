<?php

/**
 * Field handler to show the target languages
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_item_language extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $object = $this->get_value($values);
    return tmgmt_language_label($object);
  }

}

/**
 * Field handler to show the label
 *
 * @ingroup views_field_handlers
 */
class osha_tmgmt_handler_field_tmgmt_entity_label extends tmgmt_handler_field_tmgmt_entity_label {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    if ($entity = $this->get_value($values)) {
      $label = $entity->label();
      switch ($entity->item_type) {
        case 'node':
        case 'taxonomy_term':
          $uri = $entity->getSourceUri();
          $label = l($entity->label(), $uri['path'], $uri['options']);
          break;

        case 'menu':
          $menu_id_parts = explode(':', $entity->item_id);
          $menu_id = end($menu_id_parts);
          $path = 'admin/structure/menu/manage/' . $menu_id;
          $label = l($entity->label(), $path);
          break;

        case 'menu_link':
          $menu_id_parts = explode(':', $entity->item_id);
          $menu_id = end($menu_id_parts);
          $path = "admin/structure/menu/item/$menu_id/edit";
          $label = l($entity->label(), $path);

      }
      return $label;
    }
  }
}