<?php

/**
 * @param string $rule_name - admin_title of the menu position rule
 * @param string $parent_menu - the name of the menu link including leading dashes
 *               $parent_menu can be array, in this case values are searched until the first match
 * @param array condition, e.g. 'pages' => 'path' or 'content_type' => array('machine_name' => 'machine_name')
 */
function osha_add_menu_position_rule($rule_name, $parent_menu, $condition) {
  if (module_exists('menu_position') && module_load_include('inc', 'menu_position', 'menu_position.admin')) {
    $query = db_query('SELECT * FROM {menu_position_rules} where admin_title = :rule_name', 
      array(':rule_name' => $rule_name))->rowCount();
    if (!$query) {
      drupal_set_message('Create menu position rule '.$rule_name, 'status');
      $options = menu_parent_options(menu_get_menus(), array('mlid' => 0));
      if (!is_array($parent_menu)) {
        $parent_menu = array($parent_menu);
      }
      $menu_entry = FALSE;
      foreach ($parent_menu as $menu_link) {
        $menu_entry = array_search($menu_link, $options);
        if ($menu_entry !== FALSE) {
          break;
        }
      }
      if ($menu_entry === FALSE) {
        drupal_set_message('Cannot find menu link for '.$rule_name.
          ', using the main menu instead.', 'warning');
        $menu_entry = 'main-menu:0';
      }
      $values = array(
          'admin_title' => $rule_name,
          'plid' => $menu_entry,
          'op' => 'Save',
      );
      $values = array_merge($values, $condition);
      $form_state = array(
        'values' => $values
      );
      drupal_form_submit('menu_position_add_rule_form', $form_state);
    } else {
      drupal_set_message('Menu position rule '.$rule_name.' already exists.', 'status');
    }
  }
}