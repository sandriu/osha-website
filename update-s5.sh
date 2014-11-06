#!/bin/bash

cd docroot/

echo "Disabling the modules no longer in use ..."
#drush dis -y ...

echo "Switching to RELEASE branch ..."
git checkout sprint-5

echo "Enabling new modules ..."
drush en -y entityreference_view_widget
drush en -y flickr
drush en -y flickr_block
drush en -y flickrfield
drush en -y youtube
drush en -y osha_resources
drush en -y osha_slideshare
drush en -y osha_press_contact

drush cc all

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/s5/pre-update.php
drush cc all

echo "FEATURE REVERT ..."
drush  features-revert --force -y osha_press_release
drush cc all

echo "UPDATEDB ..."
drush updatedb -y
drush cc all

echo "POST-UPDATE tasks ..."
drush php-script ../scripts/s5/post-update.php
drush cc all

echo "Running cron to cleanup ..."
drush cron

drush cc all
