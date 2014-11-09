<?php

/* Add new stuff for deployment of sprint-4 branch here. To avoid conflicts, add them after your name 
 * Also include the ticket number, see example below
 */
// andrei
// cristi
// dragos
// claudia

osha_add_menu_position_rules();

/**
 * Add menu position rules.
 */
function osha_add_menu_position_rules() {
  if (module_exists('osha') && module_load_include('inc', 'osha', 'osha.utils')) {
    // Menu position rule for Press Release content type.
    $parent_menu = '------ Press room';
    $condition = array('content_type' => array('press_release' => 'press_release'));
    osha_add_menu_position_rule('Press room Menu Rule', $parent_menu, $condition);
    
    // Menu position rule for See all Press Releases Menu Rule.
    $condition = array('pages' => 'press-releases');
    osha_add_menu_position_rule('See all Press Releases Menu Rule', $parent_menu, $condition);

    // Menu position rule for Publication content type
    $condition = array('content_type' => array('publication' => 'publication'));
    osha_add_menu_position_rule('Publications Menu Rule', '------ Publications', $condition);

    // Menu position rule for Seminar content type
    $condition = array('content_type' => array('seminar' => 'seminar'));
    osha_add_menu_position_rule('Seminar Menu Rule', '------ Our seminars', $condition);
  }
}

// radu
