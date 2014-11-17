#echo "POST-UPDATE tasks ..."
drush php-script ../scripts/s4/post-update.php

echo "Running cron to cleanup ..."
drush cron

drush cc all