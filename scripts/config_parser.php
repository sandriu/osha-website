<?php
/*
 * This script reads config.json and returns the value associated with the key passed as parameter from command line.
 *
 * Usage examples:
 * php config_parser.php osha_data_dir - for root values you can pass simple key name
 * php config_parser.php [\'admin\'][\'email'\] - for sub-values
 */

$config_file = sprintf('%s/../conf/config.json', dirname(__FILE__));
if(!is_readable($config_file)) {
	die("Cannot read config file! ($config_file). Please configure your project correctly");
}
$json = json_decode(file_get_contents($config_file), TRUE);
if(empty($argv[1])) {
	exit(1);
}
$setting = $argv[1];

if($setting[0] == '[') { // Eval values such as ['db']['username'], crude but efficient :D
	echo @eval("return \$json$setting;");
} else {
	if(!empty($json[$setting])) {
		echo $json[$setting];
	}
}
