#!/bin/bash

# Go to docroot/
cd docroot/

# Sync from edw staging
drush downsync_sql @osha.staging.edw @osha.local -y

# Build the site
drush osha_build -y

# Devify - development settings
drush devify --yes

drush cc all
