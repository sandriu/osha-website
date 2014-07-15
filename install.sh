#!/bin/sh
# Setup a clean site
cd docroot/
drush site-install -y
drush init
drush build

# Configuring migrations
drush vset osha_data_dir /Work/osha/data

echo "Registering migrations ..."
drush migrate-auto-register

echo "Importing taxonomies"
drush migrate-import NaceCodes

drush cc all
