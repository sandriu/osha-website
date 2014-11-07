#!/bin/bash

cd docroot/

echo "Disabling the modules no longer in use ..."
#drush dis -y ...

echo "Switching to RELEASE branch ..."
git checkout sprint-4

echo "Enabling new modules ..."
drush en -y multiple_selects

drush cc all

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/s4/pre-update.php

drush cc all

echo "FEATURE REVERT ..."
drush fr osha_workflow --force -y
drush fr osha_tmgmt --force -y

echo "UPDATEDB ..."
drush updatedb -y


echo "POST-UPDATE tasks ..."
drush php-script ../scripts/s4/post-update.php

echo "Running cron to cleanup ..."
drush cron

drush cc all
