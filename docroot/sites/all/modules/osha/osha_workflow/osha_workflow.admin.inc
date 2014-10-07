<?php

function osha_workflow_node_approval_form($node) {

  dpm($node);



  return array(
    'title_manage_approvers' => array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Manage the list of approvers') . '</h2>',
    ),
    'title_approvers' => array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Approve') . '</h2>',
    ),
  );
}


function osha_workflow_node_review_form() {

  return array(
    'title_manage_reviewer' => array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Manage the list of reviewers') . '</h2>',
    ),
    'title_approvers' => array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Review') . '</h2>',
    ),
  );
}
