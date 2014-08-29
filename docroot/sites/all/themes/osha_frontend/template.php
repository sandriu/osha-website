<?php
/**
 * @file
 * Osha frontend template functionality
 */

/**
 * Implements theme_links__system_main_menu().
 */
function osha_frontend_links__system_main_menu() {
  return NULL;
}

/**
 * Implements theme_menu_tree__main_menu().
 */
function osha_frontend_menu_tree__main_menu($variables) {
  return '<ul id="main-menu-links" class="menu clearfix">'
    . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_menu_link__menu_block().
 */
function osha_frontend_menu_link__menu_block($variables) {
  $element = &$variables['element'];
  $delta = $element['#bid']['delta'];

  // Get the variable provided by osha_menu module.
  $render_img = variable_get('menu_block_' . $delta . '_' . OSHA_MENU_RENDER_IMG_VAR_NAME, 0);
  if (empty($element['#localized_options']['content']['image'])
    || !$render_img) {
    return theme_menu_link($variables);
  }
  // Render the image provided by menuimage module.
  $fid = $element['#localized_options']['content']['image'];
  $file = file_load($fid);
  if ($file) {
    $image_url = file_create_url($file->uri);
  }
  // $element['#attributes']['data-image-url'] = $image_url;
  $output_link = l($element['#title'], $element['#href'], $element['#localized_options']);
  $image = '<img src="' . $image_url . '"/>';
  $output_image = l($image, $element['#href'], array('html' => TRUE));

  return '<li' . drupal_attributes($element['#attributes']) . '>
    <div class="introduction-title">' . $output_link . '</div>
    <div class="introduction-image">' . $output_image . '</div>
    </li>';
}

/**
 * Implements hook_theme().
 */
function osha_frontend_date_display_single(&$variables) {
  $date_theme = '';
  if (!empty($variables['dates']['value']['osha_date_theme'])) {
    $date_theme = $variables['dates']['value']['osha_date_theme'];
  }
  switch ($date_theme) {
    case 'calendar':
      return osha_frontend_date_calendar_icon($variables);

    default:
      return theme_date_display_single($variables);
  }
}

/**
 * Split the date into spans to be formatted as calendar icon.
 */
function osha_frontend_date_calendar_icon($variables) {
  $time = strtotime($variables['date']);
  $month = date('m', $time);
  $day = date('d', $time);
  return
    '<div class="osha-date-calendar">
      <span class="osha-date-calendar-month">' . $month . '</span>
      <span class="osha-date-calendar-day">' . $day . '</span>
    </div>';
}

/**
 * @todo @Ivan: Edit only below
 */





/**
 * @todo @Ivan: Do not go below this line
 */
