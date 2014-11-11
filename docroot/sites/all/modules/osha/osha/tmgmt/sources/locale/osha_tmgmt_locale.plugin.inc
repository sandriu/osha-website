<?php


class OSHATMGMTLocaleSourcePluginController extends TMGMTLocaleSourcePluginController {

  public function saveTranslation(TMGMTJobItem $job_item) {
    $data = $job_item->getData();
    if (isset($data['singular'])) {
      $translation = $data['singular']['#translation']['#text'];
      // Update the locale string in the system.
      // @todo: Send error message to user if update fails.
      if ($this->updateTranslation($job_item->item_id, $job_item->target_language, $translation)) {
        $job_item->accepted();
      }
    }

    // @todo: Temporary backwards compability with existing jobs, remove in next
    //   release.
    if (isset($data[$job_item->item_id])) {
      $translation = $data[$job_item->item_id]['#translation']['#text'];
      // Update the locale string in the system.
      // @todo: Send error message to user if update fails.
      if ($this->updateTranslation($job_item->item_id, $job_item->target_language, $translation)) {
        $job_item->accepted();
      }
    }
  }
}