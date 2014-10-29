<?php

class OshaTMGMTJob extends TMGMTJob {

  /**
   * {@inheritdoc}
   */
  public function addTranslatedData($data, $key = NULL) {
    $key = tmgmt_ensure_keys_array($key);
    $items = $this->getItems();
    // If there is a key, get the specific item and forward the call.
    if (!empty($key)) {
      $item_id = array_shift($key);
      if (isset($items[$item_id])
          && $this->allowRewriteTranslationData($items[$item_id])) {
        $job_item = $items[$item_id];
        $job_item->addTranslatedData($data, $key);
        if ($job_item->isAborted()) {
          $job_item->setState(TMGMT_JOB_ITEM_STATE_ACTIVE);
        }
      }
    }
    else {
      foreach ($data as $key => $value) {
        if (isset($items[$key])
            && $this->allowRewriteTranslationData($items[$key])) {
          $job_item = $items[$key];
          $job_item->addTranslatedData($value);
          if ($job_item->isAborted()) {
            $job_item->setState(TMGMT_JOB_ITEM_STATE_ACTIVE);
          }
        }
      }
    }
  }

  /**
   * Check if job is in progress.
   */
  public function allowRewriteTranslationData($job_item) {
    if ($job_item->isActive() || $job_item->isAborted()) {
      return TRUE;
    }
    else {
      drupal_set_message(
        t('The translation of @job_item was skipped.',
          array('@job_item' => $job_item->label())));
      return FALSE;
    }
  }
}
