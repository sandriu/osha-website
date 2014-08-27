<?php
/**
 * @file template.php
 */

function osha_frontend_links__system_main_menu() {
  return NULL;
}

function osha_frontend_menu_tree__main_menu($variables) {
  return '<ul id="main-menu-links" class="menu clearfix">'.$variables['tree'].'</ul>';
}
