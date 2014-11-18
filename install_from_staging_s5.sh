#!/bin/bash

cd docroot/

drush site-install -y

# Sync from edw staging
drush downsync_sql @osha.staging.sync @osha.local -y

echo "Run pre update"

# Before s4...
echo "Disabling the modules no longer in use ..."
drush dis -y osha_taxonomies_uuid osha_content_edw admin_views

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/s4/pre-update.php

# Before s5...

# Build the site
drush osha_build -y

# Devify - development settings
drush devify --yes
drush devify_solr

drush cc all

echo "POST-UPDATE tasks ..."
drush php-script ../scripts/s4/post-update.php
drush cc all
drush php-script ../scripts/s5/post-update.php
drush cc all

# Delete admin_views module
rm -rf sites/all/modules/contrib/admin_views

rm -rf sites/all/modules/contrib/apachesolr
rm -rf sites/all/modules/contrib/apachesolr_multilingual
rm -rf sites/all/modules/contrib/apachesolr_views

echo "Running cron to cleanup ..."
drush cron

drush cc all

#echo "Migrating new data"
#drush mr PressRelease
#drush mi NoteToEditor
#drush mi PressRelease
