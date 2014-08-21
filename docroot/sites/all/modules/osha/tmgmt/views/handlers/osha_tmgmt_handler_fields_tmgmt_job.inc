<?php

/**
 * Field handler to show the target languages
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_priority extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $object = $this->get_value($values);
    switch ($object) {
      case 1:
        return t('High');

      default:
        return t('Normal');
    }
  }

}
