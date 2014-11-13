@echo off

echo "Disabling the modules no longer in use ..."
call drush dis -y osha_taxonomies_uuid osha_content osha_content_edw

echo "PRE-UPDATE tasks ..."
call drush php-script ../scripts/s4/pre-update.php
