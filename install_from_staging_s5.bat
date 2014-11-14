@echo off

rem Go to docroot/
cd docroot/

call drush site-install -y

rem Sync from edw staging
call drush downsync_sql @osha.staging.sync @osha.local -y -v

echo "Run pre update"

rem Before s4...
echo "Disabling the modules no longer in use ..."
call drush dis -y osha_taxonomies_uuid osha_content_edw

echo "PRE-UPDATE tasks ..."
call drush php-script ../scripts/s4/pre-update.php 

rem Before s5...

rem Build the site
call drush osha_build -y

rem Devify - development settings
call drush devify --yes
call drush devify_solr

call drush cc all

echo "POST-UPDATE tasks ..."
call drush php-script ../scripts/s4/post-update.php
call drush cc all
call drush php-script ../scripts/s5/post-update.php
call drush cc all

mkdir ../docroot/sites/default/files/slideshare

echo "Running cron to cleanup ..."
call drush cron

call drush cc all

echo "Migrating new data"
call drush mr PressRelease
call drush mi NoteToEditor
call drush mi PressRelease
