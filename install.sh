#!/bin/sh

# Extract variables from conf/config.json and expose inside current environment
migration_data_dir=`php scripts/config_parser.php osha_data_dir`
ret=$?

if [ ! "${ret}" -eq 0 ]; then
	echo "Error getting environment variable osha_data_dir! Quitting ...";
	exit ${ret}
fi

# Setup a clean site
cd docroot/
drush site-install -y
drush init
drush build

# Configuring migrations
drush vset osha_data_dir ${migration_data_dir}

echo "Registering migrations ..."
drush migrate-auto-register

echo "Importing NACE codes taxonomy"
drush migrate-import NaceCodes

echo "Importing ESENER taxonomy"
drush migrate-import EsenerTaxonomy

drush cc all
