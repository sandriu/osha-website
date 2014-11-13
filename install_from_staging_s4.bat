@echo off

rem Go to docroot/
cd docroot/

call drush site-install -y

rem Sync from edw staging
call drush downsync_sql @osha.staging.sync @osha.local -y -v

echo "Run pre update"
call ..\update_s4_before.bat

rem Build the site
call drush osha_build -y

rem Devify - development settings
call drush devify --yes
call drush devify_solr

call drush cc all

call ..\update_s4_after.bat

call drush cc all
