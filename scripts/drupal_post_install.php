<?php

if (function_exists('drush_log')) {
  drush_log('Executing post-install tasks ...', 'ok');
}

osha_configure_default_themes();
osha_configure_solr();
osha_change_field_size();
osha_configure_mailsystem();
osha_configure_htmlmail();
osha_configure_imce();
osha_configure_file_translator();
osha_newsletter_create_taxonomy();
osha_configure_newsletter_permissions();
osha_configure_search_autocomplete();
osha_configure_feeds();
osha_configure_addtoany_social_share();

module_disable(array('overlay'));

/**
 * Configure the apachesolr and search_api_solr modules with proper settings.
 */
function osha_configure_solr() {
  $config_file = sprintf('%s/../conf/config.json', dirname(__FILE__));
  if (!is_readable($config_file)) {
    drupal_set_message("Cannot read configuration file!", 'warning');
    return;
  }
  $cfg = json_decode(file_get_contents($config_file), TRUE);
  if (empty($cfg)) {
    drupal_set_message('Configuration file was empty, nothing to do here', 'warning');
    return;
  }

  $cfg = array_merge(
    array(
      'name' => 'Solr server',
      'enabled' => 1,
      'description' => 'Search server',
      'scheme' => 'http',
      'host' => 'localhost',
      'port' => '8983',
      'path' => '/solr',
      'http_user' => '',
      'http_password' => '',
      'excerpt' => NULL,
      'retrieve_data' => NULL,
      'highlight_data' => NULL,
      'skip_schema_check' => NULL,
      'solr_version' => '',
      'http_method' => 'AUTO',
    ), $cfg['solr_server']
  );
  if (module_exists('search_api_solr') && module_load_include('inc', 'search_api', 'search_api.admin')) {
    drupal_set_message('Configuring search_api_solr ...');
    $form_state = array(
      'values' => array(
        'machine_name' => 'solr_server',
        'class' => 'search_api_solr_service',
        'name' => $cfg['name'],
        'enabled' => $cfg['enabled'],
        'description' => $cfg['description'],
        'options' => array(
          'form' => array(
            'scheme' => $cfg['scheme'],
            'host' => $cfg['host'],
            'port' => $cfg['port'],
            'path' => $cfg['path'],
            'http' => array(
              'http_user' => $cfg['http_user'],
              'http_pass' => $cfg['http_pass'],
            ),
            'advanced' => array(
              'excerpt' => $cfg['excerpt'],
              'retrieve_data' => $cfg['retrieve_data'],
              'highlight_data' => $cfg['highlight_data'],
              'skip_schema_check' => $cfg['skip_schema_check'],
              'solr_version' => $cfg['solr_version'],
              'http_method' => $cfg['http_method'],
            ),
          ),
        ),
      ),
    );
    drupal_form_submit('search_api_admin_add_server', $form_state);
  }

  // Configure apachesolr: submit apachesolr_environment_edit_form
  if (module_exists('apachesolr') && module_load_include('inc', 'apachesolr', 'apachesolr.admin')) {
    drupal_set_message('Configuring apachesolr ...');

    $url = sprintf('%s://%s:%s%s', $cfg['scheme'], $cfg['host'], $cfg['port'], $cfg['path']);
    $env_id = apachesolr_default_environment();
    $environment = apachesolr_environment_load($env_id);

    $environment['url'] = $url;
    $environment['name'] = $cfg['name'];
    $environment['conf']['apachesolr_direct_commit'] = $cfg['apachesolr_direct_commit'];
    $environment['conf']['apachesolr_read_only'] = $cfg['apachesolr_read_only'];
    $environment['conf']['apachesolr_soft_commit'] = $cfg['apachesolr_soft_commit'];

    apachesolr_environment_save($environment);
    // @todo: See ticket #2527 - cannot make the form save new settings!
    // drupal_form_submit('apachesolr_environment_edit_form', $form_state,
    // $environment);

    // Mark all entities for search indexing - admin/config/search/apachesolr
    $env_id = 'solr';
    $form_state = array(
      'values' => array(
        'env_id' => $env_id,
        'entities' => array(
          'node' => array(
            'article',
            'page',
            'blog',
            'calls',
            'highlight',
            'job_vacancies',
            'news',
            'newsletter_article',
            'press_release',
            'publication',
            'wiki_page',
          ),
        ),
      ),
    );
    drupal_form_submit('apachesolr_index_config_form', $form_state, $env_id);
  }
}

/**
 * Configure the drupal mailsystem module with proper settings.
 */
function osha_configure_mailsystem() {
  drupal_set_message('Configuring Drupal Mailsystem module ...');

  $mail_system = array(
    'default-system' => 'HTMLMailSystem',
    'htmlmail' => 'DefaultMailSystem',
  );

  variable_set('mail_system', $mail_system);
  variable_set('mailsystem_theme', 'default');
}

/**
 * Configure the drupal htmlmail module with proper settings.
 */
function osha_configure_htmlmail() {
  drupal_set_message('Configuring Drupal HTML Mail module ...');

  $site_default_theme = variable_get('theme_default', 'bartik');

  variable_set('htmlmail_theme', $site_default_theme);
  variable_set('htmlmail_postfilter', 'full_html');
}


/**
 * Configure IMCE contrib module - Alter User-1 profile and assign User-1 profile to the administrator role.
 */
function osha_configure_imce() {
  drupal_set_message('Configuring Drupal IMCE module ...');
  // /admin/config/media/imce
  if (!module_load_include('inc', 'imce', 'inc/imce.admin')) {
    throw new Exception('Cannot load inc/imce.admin.inc');
  }

  // Alter profile User-1.
  $profiles = variable_get('imce_profiles', array());

  if (isset($profiles[1])) {
    $profiles[1]['directories'][0]['name'] = "sites/default/files";
    variable_set('imce_profiles', $profiles);
  }
  else {
    throw new Exception('Cannot load IMCE profile User-1.');
  }

  $roles = user_roles();

  if (in_array("administrator", $roles)) {
    // Role administrator found - assign User-1 profile to administrator.
    $roles_profiles = variable_get('imce_roles_profiles', array());
    $admin_role = user_role_load_by_name("administrator");

    $roles_profiles[$admin_role->rid]['public_pid'] = 1;
    $roles_profiles[$admin_role->rid]['private_pid'] = 1;
    $roles_profiles[$admin_role->rid]['weight'] = 0;

    variable_set('imce_roles_profiles', $roles_profiles);
  }
  else {
    // Role administrator not found.
    throw new Exception('Cannot assign IMCE profile User-1 to administrator - role administrator not found.');
  }
}

/**
 * Sets default themes for OSHA project.
 */
function osha_configure_default_themes() {
  drupal_set_message('Configuring Drupal default themes ...');

  variable_set('admin_theme', 'osha_admin');
  variable_set('theme_default', 'osha_frontend');
}

/**
 * Config file translator not available during osha_tmgmt installation.
 */
function osha_configure_file_translator() {
  /* @var TMGMTTranslator $file */
  $file = tmgmt_translator_load('file');
  if ($file) {
    $file->settings['export_format'] = 'xml';
    $file->settings['allow_override'] = FALSE;
    $file->save();
  }
}


/**
 * Populate initial terms into the newsletter_sections taxonomy.
 */
function osha_newsletter_create_taxonomy() {
  $voc = taxonomy_vocabulary_machine_name_load('newsletter_sections');
  $terms = taxonomy_get_tree($voc->vid);

  if (empty($terms)) {
    $new_terms = array(
      'highlight' => 'Highlights',
      '' => 'OSH matters',
      'publication' => 'Latest publications',
      'newsletter_article' => 'Coming soon',
      'blog' => 'Blog',
      'news' => 'News',
      'event' => 'Events',
    );
    $cont_type_term_map = array();
    $new_terms_ct = array_flip($new_terms);

    $weight = 0;

    foreach ($new_terms as $idx => $term_name) {
      $term = new stdClass();
      $term->name = $term_name;
      $term->language = 'en';
      $term->vid = $voc->vid;
      // weight must be an integer
      $term->weight = $weight++;
      taxonomy_term_save($term);
      if ($term->name == 'Coming soon') {
        variable_set('osha_newsletter_coming_soon_tid', $term->tid);
      }
      $cont_type_term_map[$new_terms_ct[$term->name]] = $term->tid;
    }
    variable_set('osha_newsletter_term_ct_map', $cont_type_term_map);
  }
}


/**
 * Assign required permissions to roles - newsletter.
 */
function osha_configure_newsletter_permissions() {
  user_role_change_permissions(DRUPAL_ANONYMOUS_RID, array(
    'view newsletter_content_collection entity collections' => TRUE
  ));
  user_role_change_permissions(DRUPAL_AUTHENTICATED_RID, array(
    'view newsletter_content_collection entity collections' => TRUE
  ));
}

/**
 * Set-up the search_autocomplete module.
 */
function osha_configure_search_autocomplete() {
  // Disable other search forms - we dont' use them.
  db_update('search_autocomplete_forms')
    ->fields(array(
      'enabled' => 0,
    ))
    ->condition('selector', '#edit-search-block-form--2', '<>')
    ->execute();
  // Configure the search form.
  $fid = db_select('search_autocomplete_forms', 'f')
    ->fields('f', array('fid'))
    ->condition('selector', '#edit-search-block-form--2')
    ->execute()->fetchField(0);
  if ($fid) {
    db_update('search_autocomplete_forms')
      ->fields(array(
        'data_view' => 'solr_autocomplete',
        'theme' => 'basic-blue.css',
        'data_callback' => 'search_autocomplete/autocomplete/' . $fid . '/',
      ))
      ->condition('selector', '#edit-search-block-form--2')
      ->execute();
  }
  else {
    drupal_set_message('Failed to configure search_autocomplete form', 'error');
  }
}

/**
 * Add configuration to wiki feed.
 */
function osha_configure_feeds() {
  drupal_set_message('Configuring Wiki Feed ...');
  $source = feeds_source('wiki');
  $config = array(
    'FeedsHTTPFetcher' => array(
      'source' => 'http://oshwiki-staging.mainstrat.com/wiki/Special:Ask/-5B-5B:%2B-5D-5D-20-5B-5BOSHA_55641D::%2B-5D-5D-20-5B-5BLanguage-20code::en-5D-5D/-3F-23-2D/format%3Dfeed/sort%3DModification-20date/order%3Ddescending/searchlabel%3D-20Atom-20feed-20example/type%3Datom/title%3DSemantic-20MediaWiki/description%3DLatest-20news-20from-20semantic-2Dmediawiki.org/page%3Dfull/offset%3D0',
    ),
  );
  $source->addConfig($config);
  $source->save();
  // Add to schedule, make sure importer is scheduled, too.
  $source->schedule();
  $source->importer->schedule();
}

/**
 * Add configuration to addtoany contrib module.
 */
function osha_configure_addtoany_social_share() {
  drupal_set_message('Configuring Addtoany contrib module ...');

  variable_set('addtoany_buttons_size', 32);
  variable_set('addtoany_additional_html', '<div class="a2a_kit a2a_kit_size_32 a2a_default_style"><a class="a2a_button_twitter"></a><a class="a2a_button_facebook"></a><a class="a2a_button_linkedin"></a><a class="a2a_button_google_plus"></a></div><script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>');
  variable_set('addtoany_display_in_nodecont', '0');
  variable_set('addtoany_display_in_nodelink', '1');
  variable_set('addtoany_display_in_teasers', '0');
  variable_set('addtoany_nodetypes', array(
    'news' => 'news',
    'article' => 0,
    'page' => 0,
    'blog' => 0,
    'calls' => 0,
    'highlight' => 0,
    'job_vacancies' => 0,
    'newsletter_article' => 0,
    'press_release' => 0,
    'publication' => 0,
    'wiki_page' => 0,
    )
  );
}
