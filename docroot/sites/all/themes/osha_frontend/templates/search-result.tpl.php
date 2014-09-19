<?php
$result = $variables['result'];
$link = $result['link'];
$bundle_name = isset($result['fields']['bundle_name']) ? $result['fields']['bundle_name'] : FALSE;
$publication_date = isset($result['fields']['dm_field_publication_date'][0]) ? $result['fields']['dm_field_publication_date'][0] : FALSE;
if ($publication_date) :
  $publication_date = format_date(strtotime($publication_date), 'european_date');
endif;

$image_url = FALSE;
if (isset($result['fields']['ss_language'])) :
  $language = $result['fields']['ss_language'];
  if (!empty($result['fields']['ss_field_image_url_' . $language])) :
    $image_url = $result['fields']['ss_field_image_url_' . $language];
  endif;
endif;
?>
<li class="search-result" xmlns="http://www.w3.org/1999/html">
  <h3 class="title">
    <a href="<?php echo $link; ?>"><?php echo $title; ?></a>
  <?php if($bundle_name): ?>
    <div class="article"><?php echo $bundle_name; ?></div>
  <?php endif; ?>
  <?php if($publication_date): ?>
    <div class="date"><?php echo $publication_date; ?></div>
  <?php endif; ?>
  </h3>
  <div class="link"><?php echo $link; ?></div>
  <?php if($image_url): ?>
  <div class="image">
    <img src="<?php echo $image_url; ?>" />
  </div>
  <?php endif; ?>
  <div class="search-snippet-info">
    <div class="search-snippet">
      <blockquote><em><?php echo $result['snippet']; ?></em></blockquote>
    </div>
  </div>
</li>
