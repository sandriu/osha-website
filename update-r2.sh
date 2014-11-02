#!/bin/bash

cd docroot/

# Make sure we're on the master brach - Just in case ...
echo "Make sure we're on MASTER branch ..."
git checkout master

echo "Disabling the modules no longer in use ..."
drush dis -y image_captcha apachesolr apachesolr_search apachesolr_multilingual apachesolr_views

echo "Switching to RELEASE branch ..."
git checkout release

drush cc all

drush dis -y tmgmt_node

drush cc all

echo "Enabling search_api_solr module ..."
drush en -y search_api_solr

echo "PRE-UPDATE tasks ..."
drush php-script ../scripts/r2/pre-update.php

drush cc all

echo "Enabling remanining modules ..."
drush en -y email tmgmt_locale scanner search_and_replace nodeblock osha_homepage osha_breadcrumbs search_api_et search_api_et_solr search_api_views osha_search recaptcha menu_position r4032login devel_node_access

drush cc all

drush features-revert --force -y osha_workflow
drush features-revert --force -y osha_tmgmt
drush features-revert --force -y osha

drush updatedb -y

# Revert osha_tmgmt one more time to set permissions of entity_collection.
drush features-revert --force -y osha_tmgmt

# Revert other remaining features
drush features-revert --force -y osha_blocks osha_blog osha_calls osha_highlight osha_job_vacancies osha_legislation osha_news osha_newsletter osha_press_release osha_publication osha_seminar osha_taxonomies osha_wiki

drush cc all

drush php-script ../scripts/r2/post-update.php

echo "Running cron to cleanup ..."
drush cron

drush cc all
