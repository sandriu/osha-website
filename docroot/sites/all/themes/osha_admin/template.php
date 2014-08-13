<?php
/**
 * @file template.php
 */

function osha_admin_simplenews_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= $variables['label'] . ":\n";
  }

  // Render the items.
  foreach ($variables['items'] as $item) {
    $output .= drupal_render($item) . "\n";
  }

  // Add an extra line break at the end of the field.
  $output .= "\n";

  return $output;
}
