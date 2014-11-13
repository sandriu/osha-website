@echo off
echo "POST-UPDATE tasks ..."
call drush php-script ../scripts/s4/post-update.php

echo "Running cron to cleanup ..."
call drush cron

call drush cc all