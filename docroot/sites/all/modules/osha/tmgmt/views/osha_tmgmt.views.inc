<?php

class OshaTMGMTJobItemViewsController extends TMGMTJobItemViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();

    $data['tmgmt_job_item']['source_language'] = array(
      'title' => t('Source language'),
      'help' => t('Language to translate to.'),
      'real field' => 'source_language',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_language',
      ),
    );

    $data['tmgmt_job_item']['target_language'] = array(
      'title' => t('Target language'),
      'help' => t('Language to translate to.'),
      'real field' => 'target_language',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_language',
      ),
    );
    return $data;
  }

}


class OshaTMGMTJobViewsController extends TMGMTJobViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();

    $data['tmgmt_job']['priority'] = array(
      'title' => t('Priority'),
      'help' => t('Urgency of translation'),
      'real field' => 'priority',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_priority',
      ),
    );

    return $data;
  }
}
