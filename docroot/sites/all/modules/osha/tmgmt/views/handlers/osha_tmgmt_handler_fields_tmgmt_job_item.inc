<?php

/**
 * Field handler to show the target languages
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_item_target_language extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $object = $this->get_value($values);
    return tmgmt_language_label($object);
  }

}
