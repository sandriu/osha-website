<?php

/**
 * Controller class for the job entity.
 *
 * @ingroup tmgmt_job
 */
class OshaWorkflowModerationItemController extends EntityAPIController {

  /**
   * {@inheritdoc}
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    return parent::save($entity, $transaction);
  }

  /**
   * {@inheritdoc}
   */
  public function delete($ids, $transaction = NULL) {
    parent::delete($ids, $transaction);
  }
}