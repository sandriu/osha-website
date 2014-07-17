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

echo "Importing NACE codes taxonomy"
drush migrate-import NaceCodes

echo "Importing ESENER taxonomy"
drush migrate-import EsenerTaxonomy

echo "Importing Publication types taxonomy"
drush migrate-import PublicationTypesTaxonomy

drush cc all
