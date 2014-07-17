<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201407171712
 */

$config_file = sprintf('%s/../conf/config.json', dirname(__FILE__));
if(!is_readable($config_file)) {
	die("Cannot read config file! ($config_file). Please configure your project correctly");
}
$json = json_decode(file_get_contents($config_file), TRUE);

// OSHA_CONFIG_VARIABLE not available yet
variable_set('osha_config', @serialize($json));

if(!empty($json['osha_data_dir'])) {
	variable_set('osha_data_dir', $json['osha_data_dir']);
}

if(!empty($json['variables']) && is_array($json['variables'])) {
	foreach($json['variables'] as $k => $v) {
		variable_set($k, $v);
	}
}
