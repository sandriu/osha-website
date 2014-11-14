echo "Run post update S4"
drush php-script ../scripts/s4/post-update.php
drush cc all

echo "Run post update S5"
drush php-script ../scripts/s5/post-update.php
drush cc all

echo "Run cron to cleanup"
drush cron

drush cc all

echo "Migrating new data"
drush mr PressRelease
drush mi NoteToEditor
drush mi PressRelease