<?php

class OshaTMGMTJobItem extends TMGMTJobItem {

  /**
   * {@inheritdoc}
   */
  public function addTranslatedData($translation, $key = array()) {
    $this->addTranslatedDataRecursive($translation, $key);
    // Check if the job item has all the translated data that it needs now.
    // Only attempt to change the status to needs review if it is currently
    // active.
    if ($this->isActive()) {
      $data = tmgmt_flatten_data($this->getData());
      $data = array_filter($data, '_tmgmt_filter_data');
      $finished = TRUE;
      foreach ($data as $item) {
        if (empty($item['#status']) || $item['#status'] == TMGMT_DATA_ITEM_STATE_PENDING) {
          $finished = FALSE;
          break;
        }
      }
      if ($finished) {
        // There are no unfinished elements left.
        if ($this->getJob()->getTranslator()->getSetting('auto_accept')) {
          // If the job item is going to be auto-accepted, set to review without
          // a message.
          $this->needsReview(FALSE);
        }
        else {
          // Otherwise, create a message that contains source label, target
          // language and links to the review form.
          $uri = $this->uri();
          $job_uri = $this->getJob()->uri();

          $wrapper = entity_metadata_wrapper($this->entityType, $this);
          $target_language = $wrapper->target_language->label();
          $variables = array(
            '!source' => l($this->getSourceLabel(), $uri['path']),
            '@language' => $target_language,
            '!review_url' => url($uri['path'], array('query' => array('destination' => $job_uri['path']))),
          );
          drupal_set_message(
            t('The translation of !source to @language is finished and can now be <a href="!review_url">reviewed</a>.',
              $variables));
        }
      }
    }
    $this->save();
  }

  /**
   * Move the Job Item to Translated state.
   */
  public function toTranslated($message = '') {
    $this->state = TMGMT_JOB_ITEM_STATE_REVIEW;
    global $user;
    $this->save();
    $this->addMessage('@name approved the Layout. Job item is now "@state". Message: @message',
    array(
      '@name' => $user->name,
      '@state' => osha_tmgmt_get_job_item_state_label(TMGMT_JOB_ITEM_STATE_REVIEW),
      '@message' => $message,
    ));
    OshaWorkflowNotifications::notifyTranslationLayoutApproved($this);
    drupal_set_message(t('You have Approved the Layout'));
  }

  /**
   * Move the Job Item to Translation Validated state.
   */
  public function toTranslationValidated($message = '') {
    $this->state = OSHA_TMGMT_JOB_ITEM_STATE_TranslationValidated;
    global $user;
    $this->save();
    $this->addMessage('@name validated translation content. Job item is now "@state". Message: @message',
      array(
        '@name' => $user->name,
        '@state' => osha_tmgmt_get_job_item_state_label(OSHA_TMGMT_JOB_ITEM_STATE_TranslationValidated),
        '@message' => $message,
      ));
    OshaWorkflowNotifications::notifyTranslationValidated($this);
    drupal_set_message(t('You have Validated the translation!'));
  }

  /**
   * Move the Job Item to Translation Validation Required state.
   */
  public function toTranslationValidationRequired($message = '') {
    $this->state = OSHA_TMGMT_JOB_ITEM_STATE_TranslationValidationRequired;
    global $user;
    $this->save();
    $this->addMessage('@name: Translation requires Content Validation. Job item is now "@state". Message: @message',
      array(
        '@name' => $user->name,
        '@state' => osha_tmgmt_get_job_item_state_label(OSHA_TMGMT_JOB_ITEM_STATE_TranslationValidationRequired),
        '@message' => $message,
      ));
    OshaWorkflowNotifications::notifyTranslationValidators($this);
    drupal_set_message(t('You have Required Translation Validation for this translation'));
  }

  /**
   * Move the Job Item to Translation Validation Required state.
   */
  public function toTranslationReadyToPublish($message = '') {
    $this->state = OSHA_TMGMT_JOB_ITEM_STATE_TranslatedReadyToPublish;
    global $user;
    $this->save();
    $this->addMessage('@name: Translation is ready to be published. Job item is now "@state". Message: @message',
      array(
        '@name' => $user->name,
        '@state' => osha_tmgmt_get_job_item_state_label(OSHA_TMGMT_JOB_ITEM_STATE_TranslatedReadyToPublish),
        '@message' => $message,
      ));
    OshaWorkflowNotifications::notifyTranslationProjectManager($this);
    drupal_set_message(t('You have set Translation as Ready to Publish.'));
  }

}


class OshaTMGMTJobItemMetadataController extends TMGMTJobItemMetadataController {

  /**
   * {@inheritdoc}
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    // Add the options list for the available languages.
    $properties['target_language']['options list'] = $properties['source_language']['options list'] = 'entity_metadata_language_list';

    return $info;
  }
}
