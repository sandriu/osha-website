<?php 
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<div id="page">
<script language="JavaScript">
	image = new Array(2);
	link = new Array(2);
	image[0] = '/sites/all/themes/osha_frontend/images/banner_home1.png'
	image[1] = '/sites/all/themes/osha_frontend/images/banner_home2.png'
	image[2] = '/sites/all/themes/osha_frontend/images/banner_home3.png'
	image[3] = '/sites/all/themes/osha_frontend/images/banner_home4.png'
	image[4] = '/sites/all/themes/osha_frontend/images/banner_home5.png'
	index = Math.floor(Math.random() * image.length);
</script>
  <?php if (isset($page['header'])) : ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>
  <div class="page_front"> 
	<div class="left_column">
		<div class="banner_home">
			<script>
				document.write("<IMG SRC="+image[index]+" border='0' align='right'>");
			</script>
		</div>
		<div id="highlights_home">
			<div class="title_hightlights">Highlights</div><div class="viewAll"><a href="">View all <img src="/sites/all/themes/osha_frontend/images/flecha.png" alt="View all"></a></div>
			<div class="separator_highlights_home">&nbsp;</div>
		</div>
		<div class="highlights_row">
			<div class="highlights_column_left">
				<div class="date">
					11/08/2014
				</div>
				<div class="highlights_title">
					<a href="">International Youth Day 2014: mental health matters</a>
				</div>
				<div class="highlights_body">
					On 12 August every year, we celebrate International Youth Day to recognise the vital contribution of youth to society.This year’s theme is “Youth and Mental Health”...
				</div>
				<div class="highlights_link">
					<a href="">See more</a>
				</div>
			</div>
			<div class="highlights_column_right">
				<div class="date">
					31/07/2014
				</div>
				<div class="highlights_title">
					<a href="">Stay connected: explore our social networks</a>
				</div>
				<div class="highlights_body">
					EU-OSHA maintains an active presence in social media using it as a knowledge sharing hub on occupational safety and health. Social media channels add value to...
				</div>
				<div class="highlights_link">
					<a href="">See more</a>
				</div>
			</div>
		</div>
		<div class="highlights_row">
			<div class="highlights_column_left">
				<div class="date">
					24/07/2014
				</div>
				<div class="highlights_title">
					<a href="">Recommend OSHmail to a colleague</a>
				</div>
				<div class="highlights_body">
					More than 63,000 subscribers already share your point of view. As a subscriber to OSHmail, the newsletter of the European Agency for Safety and Health at Work...
				</div>
				<div class="highlights_link">
					<a href="">See more</a>
				</div>
			</div>
			<div class="highlights_column_right">
				<div class="date">
					17/07/2014
				</div>
				<div class="highlights_title">
					<a href="">New risks spark concern in the electricity sector</a>
				</div>
				<div class="highlights_body">
					The rapid pace of technological innovation is creating new risks for workers in the electricity sector. A recent workshop held for the EU Sectoral Social...
				</div>
				<div class="highlights_link">
					<a href="">See more</a>
				</div>
			</div>
		</div>
	</div>
	<?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_second = render($page['sidebar_second']);
    ?> 
	<?php if ($sidebar_second): ?>
      <aside class="sidebars_second sidebars_second_home">
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>
  </div>
  <?php if (isset($page['footer'])) : ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</div>