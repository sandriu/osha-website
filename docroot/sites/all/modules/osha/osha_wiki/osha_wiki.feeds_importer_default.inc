<?php
/**
 * @file
 * osha_wiki.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function osha_wiki_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wiki';
  $feeds_importer->config = array(
    'name' => 'Wiki',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsCrawler',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'crawler' => array(
          'num_pages' => '3',
          'delay' => '1',
          'first_run' => '0',
          'auto' => '0',
          'xpath' => '',
          'url' => array(
            'url_pattern' => 'http://oshwiki-staging.mainstrat.com/wiki/Special:Ask/-5B-5B:+-5D-5D-20-5B-5BLanguage-20code::fr-5D-5D/-3F-23-2D/format=feed/sort=Modification-20date/order=descending/searchlabel=-20Atom-20feed-20example/type=atom/title=Semantic-20MediaWiki/description=Latest-20news-20from-20semantic-2Dmediawiki.org/page=full/offset=$index/limit=5',
            'initial' => '0',
            'increment' => '5',
          ),
          'osh_importer_language' => 'bg',
        ),
        'crawled' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'url',
            'target' => 'field_wiki_page_url:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'wiki_page',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['wiki'] = $feeds_importer;

  return $export;
}
