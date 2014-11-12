#!/bin/bash

echo "Disabling the modules no longer in use ..."
drush dis -y osha_taxonomies_uuid osha_content osha_content edw

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/s4/pre-update.php
