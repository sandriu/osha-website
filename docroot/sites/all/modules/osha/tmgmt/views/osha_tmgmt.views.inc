<?php

class TMGMTOshaJobItemViewsController extends TMGMTJobItemViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();

    $data['tmgmt_job_item']['target_language'] = array(
      'title' => t('Target language'),
      'help' => t('Language to translate to.'),
      'real field' => 'target_language',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_target_language',
      ),
    );
    return $data;
  }

}
