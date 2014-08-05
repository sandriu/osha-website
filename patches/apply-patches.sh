#!/bin/bash

echo "Applying existing patches to the instance ..."

# Put your patch commands here ...


# Clear the cache to make sure existing instace see the applied patches
# Suppress error (install.sh complains about non-existing drupal site)
drush cc all > /dev/null 2>&1
