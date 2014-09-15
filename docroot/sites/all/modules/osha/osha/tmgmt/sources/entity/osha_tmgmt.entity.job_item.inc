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
          $this->needsReview('The translation of !source to @language is finished and can now be <a href="!review_url">reviewed</a>.', $variables);
        }
      }
    }
    $this->save();
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
