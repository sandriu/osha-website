<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201407171748
 */

osha_configure_solr();


function osha_configure_solr() {
	$cfg = variable_get(OSHA_CONFIG_VARIABLE, NULL);
	if(!empty($cfg)) {
		$cfg = unserialize($cfg);
		if(!empty($cfg['solr_server'])) {

			// Configure Search API: submit search_api_admin_add_server form
			module_load_include('inc', 'search_api', 'search_api.admin');
			drupal_set_message('Creating Solr server using machine name: search_server ...');
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
					'http_method' => 'AUTO'
				), $cfg['solr_server']
			);
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
							)
						)
					)
				)
			);
			drupal_form_submit('search_api_admin_add_server', $form_state);


			// Configure apachesolr: submit apachesolr_environment_edit_form
			module_load_include('inc', 'apachesolr', 'apachesolr.admin');
			drupal_set_message('Configuring Apachesolr search environment ...');

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
			// drupal_form_submit('apachesolr_environment_edit_form', $form_state, $environment);

		} else {
			drupal_set_message('Unable to find solr_server section in config. Solr integration may be broken', 'warning');
		}
	} else {
		drupal_set_message('Unable to find load configuration from ' . OSHA_CONFIG_VARIABLE, 'warning');
	}
}
