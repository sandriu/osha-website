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

    $data['tmgmt_job_item']['label']['field']['handler'] = 'osha_tmgmt_handler_field_tmgmt_entity_label';

    $data['tmgmt_job_item']['target_language'] = array(
      'title' => t('Target language'),
      'help' => t('Language to translate to.'),
      'real field' => 'target_language',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_language',
      ),
    );

    $data['tmgmt_job_item']['page_count'] = array(
      'title' => t('Page count'),
      'help' => t('Number of pages for translation'),
      'real field' => 'page_count',
      'field' => array(),
    );

    $data['tmgmt_job_item']['character_count'] = array(
      'title' => t('Character count'),
      'help' => t('Number of characters for translation'),
      'real field' => 'character_count',
      'field' => array(),
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

    $data['tmgmt_job']['changed']['field']['handler'] = 'tmgmt_handler_field_tmgmt_job_changed';

    $data['tmgmt_job']['priority'] = array(
      'title' => t('Priority'),
      'help' => t('Urgency of translation'),
      'real field' => 'priority',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_priority',
      ),
    );

    $data['tmgmt_job']['page_count'] = array(
      'title' => t('Page count'),
      'help' => t('Number of pages for translation'),
      'real field' => 'page_count',
      'field' => array(),
    );

    $data['tmgmt_job']['character_count'] = array(
      'title' => t('Character count'),
      'help' => t('Number of characters for translation'),
      'real field' => 'character_count',
      'field' => array(),
    );

    return $data;
  }
}
