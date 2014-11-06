#!/bin/bash

cd docroot/

echo "Disabling the modules no longer in use ..."
#drush dis -y ...

echo "Switching to RELEASE branch ..."
git checkout sprint-5

echo "Enabling new modules ..."
#drush en -y ...

drush cc all

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/s5/pre-update.php

drush cc all

echo "FEATURE REVERT ..."
#drush features-revert --force -y ...

echo "UPDATEDB ..."
drush updatedb -y


echo "POST-UPDATE tasks ..."
drush php-script ../scripts/s5/post-update.php

echo "Running cron to cleanup ..."
drush cron

drush cc all
