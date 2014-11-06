<?php


/* Add new stuff for deployment of sprint-4 branch here. To avoid conflicts, add them after your name 
 * Also include the ticket number, see example below
 */
// andrei

// CW-526
drush_log('Dropping field: field_related_man_pubs', 'ok');
field_delete_field('field_related_man_pubs');

drush_log('Dropping field: field_workflow_status', 'ok');
field_delete_field('field_workflow_status');

// cristi
// dragos
// claudia
// radu
