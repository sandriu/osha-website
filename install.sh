#!/bin/sh
# Setup a clean site
cd docroot/
drush site-install -y
drush init
drush build