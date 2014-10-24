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

/**
 * Class osha_tmgmt_handler_field_tmgmt_job_item_operations handles Operations
 */
class osha_tmgmt_handler_field_tmgmt_job_item_operations extends tmgmt_handler_field_tmgmt_job_item_operations {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $item = $this->get_value($values);
    $element = array();
    $element['#theme'] = 'links';
    $element['#attributes'] = array('class' => array('inline'));
    $uri = $item->uri();
    if ($item->getCountTranslated() > 0 && entity_access('accept', 'tmgmt_job_item', $item)) {
      $element['#links']['review'] = array(
        'href' => $uri['path'],
        'query' => array('destination' => current_path()),
        'title' => t('review'),
      );
    }
    // Do not display view on unprocessed jobs.
    elseif (!$item->getJob()->isUnprocessed() && user_access('view translation job item')) {
      $element['#links']['view'] = array(
        'href' => $uri['path'],
        'query' => array('destination' => current_path()),
        'title' => t('view'),
      );
    }
    if (user_access('administer tmgmt') && !$item->isAccepted()) {
      $element['#links']['delete'] = array(
        'href' => 'admin/tmgmt/items/' . $item->tjiid . '/delete',
        'query' => array('destination' => current_path()),
        'title' => t('delete'),
      );
    }
    return drupal_render($element);
  }
}

/**
 * Class osha_tmgmt_handler_field_tmgmt_job_item_operations handles Operations
 */
class osha_tmgmt_handler_field_tmgmt_job_item_state extends views_handler_field_machine_name {

  /**
   * {@inheritdoc}
   */
  public function render($job_item) {
    if (isset($job_item->tmgmt_job_item_state)) {
      return osha_tmgmt_get_job_item_state_label($job_item->tmgmt_job_item_state);
    }
    return '';
  }
}
