#!/bin/bash

echo "Applying existing patches to the instance ..."

#Declare path variables to be used in patch paths
PATCHDIR=$PWD/patches
DOCROOT=$PWD/docroot

# Put your patch commands here ...

# entity_translation
# Fix bug of incorrect language none for pathauto alias
# https://www.drupal.org/node/1925848
# https://www.drupal.org/files/entitytranslation-incorrect_pathauto_pattern-1925848-8.patch
patch -d $DOCROOT/sites/all/modules/contrib/entity_translation -N -r /dev/null -p1 < $PATCHDIR/entity_translation/entitytranslation-incorrect_pathauto_pattern-1925848-8.patch



# Clear the cache to make sure existing instace see the applied patches
# Suppress error (install.sh complains about non-existing drupal site)
drush cc all > /dev/null 2>&1
