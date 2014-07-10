OSHA Boilerplate
=================

Build scripts and source code for the Osha project

Here's a breakdown for what each directory/file is used for. If you want to know more please
read the readme inside the specific directory.

* [conf] - Contains templates for your project configuration (database connection, drupal instance admin user details, vhost template file)
* [docroot] - Where your drupal root should start.
* [drush] - Contains project specific drush commands, aliases, and configurations.
* [results] - This directory is just used to export test results to. A good example of this is when running drush test-run with the --xml option. You can export the xml to this directory for parsing by external tools.
* [scripts] - A directory for project-specific scripts.
* [test] - A directory for external tests. This is great for non drupal specific tests
 such as selenium, qunit, casperjs.
* [.gitignore] - Contains the a list of the most common excluded files.
