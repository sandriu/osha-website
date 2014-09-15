<?php
/**
 * @file
 * osha_content.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_content_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Join OSHMail subscribers';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'join_oshmail_subscribers';
  $fe_block_boxes->body = '<div id="join_subscribers"><img src="/sites/all/themes/osha_frontend/images/content/blocks/join_65000_subscribers.png" alt="Join OSHMail Subscribers" /></div>';

  $export['join_oshmail_subscribers'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OSHWiki intro block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'osha_wiki_intro';
  $fe_block_boxes->body = '<div class="OSHWiki"><div class="separatorOsHWiki">&nbsp;</div><div id="OSHWikiDivTit"><div class="imgOSHWiki"><img src="/sites/all/themes/osha_frontend/images/OSHwiki.png" alt="" width="26" height="26" /></div><div class="OSHWikiTitle">OSHWiki</div></div><div class="p1"><img src="/sites/all/themes/osha_frontend/images/content/blocks/oshwikiright.jpg" alt="" /></div><div class="p2">Find more information on our OSHWiki<span><br /></span></div><div class="p3"><a href="http://oshwiki.eu/wiki/Main_Page" target="_blank">Go to OSHWiki <img src="/sites/all/themes/osha_frontend/images/flecha.png" alt="Go to OSHWiki" width="19" height="11" /></a></div></div>';

  $export['osha_wiki_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Subscribe categories - static block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oshmail_subscribe_categories';
  $fe_block_boxes->body = '<div style="width: 100%; background-color: #ecf1fb; padding: 10px; font-family: Arial, sans-serif;"><ul style="padding: 0; margin: 0;"><li style="list-style-type: none; display: inline-block; width: auto; border-left: 0; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;">Latest <strong>news</strong> from <br />around the world</li><li style="list-style-type: none; display: inline-block; width: auto; border-left: 1px dashed #003399; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;">Forthcoming <br /><strong>events</strong></li><li style="list-style-type: none; display: inline-block; width: auto; border-left: 1px dashed #003399; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;">Latest Agency <br /><strong>publications</strong></li><li style="list-style-type: none; display: inline-block; width: auto; border-left: 1px dashed #003399; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;">Updates on EU <br /><strong>legislation</strong></li><li style="list-style-type: none; display: inline-block; width: auto; border-left: 1px dashed #003399; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;">In 24 <br /><strong>languages</strong></li><li style="list-style-type: none; display: inline-block; width: auto; border-left: 1px dashed #003399; color: #585858; vertical-align: top; padding: 0px 4px 0px 10px; text-align: center;"><strong>Free</strong><br /> subscriptions</li></ul></div>';

  $export['oshmail_subscribe_categories'] = $fe_block_boxes;

  return $export;
}
