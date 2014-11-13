#!/bin/bash 

cd docroot/

drush site-install -y

# Sync from edw staging
drush downsync_sql @osha.staging.sync @osha.local -y -v

echo "Run pre update"

# Before s4...
echo "Disabling the modules no longer in use ..."
drush dis -y osha_taxonomies_uuid osha_content osha_content_edw

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

echo "Running cron to cleanup ..."
drush cron

drush cc all

echo "Migrating new data"
drush mr PressRelease
drush mi NoteToEditor
drush mi PressRelease
