<?php
/**
 * @file
 * Osha frontend template functionality
 */

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
