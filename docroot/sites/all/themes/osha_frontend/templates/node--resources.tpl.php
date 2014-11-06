<?php //dpm(get_defined_vars()); ?>

<?php if(isset($content['field_youtube'])): ?>
  <?php print drupal_render($content['field_youtube']); ?>
<?php endif; ?>

<?php if(isset($content['field_slideshare'])): ?>
  <?php print drupal_render($content['field_slideshare']); ?>
<?php endif; ?>

<?php if(isset($content['field_flickr'])): ?>
  <?php print drupal_render($content['field_flickr']); ?>
<?php endif; ?>

<?php
if(isset($content['field_internal_contents'])){
  $internal = $content['field_internal_contents'];
  $content_type = '';
  foreach($internal['#items'] as $key=>$value){
    $node = node_load($internal['#items'][$key]['target_id']);
    $type = node_type_get_name($node);
    if($content_type != $type){
      echo $type;
      $content_type = $type;
    }
    echo '<div>'.$internal[$key]['#markup'].'</div>';
  }
}
?>

<?php if(isset($content['field_file'])): ?>
  <?php print drupal_render($content['field_file']); ?>
<?php endif; ?>

<?php if(isset($content['field_external_url'])): ?>
  <?php print drupal_render($content['field_external_url']); ?>
<?php endif; ?>