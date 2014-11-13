#!/bin/bash

# Go to docroot/
cd /var/local/osha-website/docroot

# Pulling the last Updates
git pull

# Sync from edw staging
drush downsync @osha.staging @osha.staging.edw -y

drush cc all
