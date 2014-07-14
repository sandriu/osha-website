osha_migration
============

Scripts to migrate data from old website. For a list of available migrations:

Installation
============

* `drush vset osha_data_dir /path/to/data/directory` - Configure the data source directory where OSHA data is located
* `drush en -y migrate_ui osha_migration` - Enable the osha_migration module
* `drush migrate-import NaceCodes` - To run the NaceCodes migration

