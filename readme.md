OSHA
====

Build scripts and source code for the Osha project

[![Build Status](http://ci.edw.ro/buildStatus/icon?job=osha&dummy=1)](http://ci.edw.ro/job/osha/)

##Pre-requisites

1. Drush
2. Virtual host for your Drupal instance that points to the docroot/ directory from this repo

##Quick start##

1. Edit [conf/config.json](https://github.com/eaudeweb/osha/blob/master/conf/config.json) to customize to your local settings

```json
{
    "db" : {
        "host": "database server ip or name, ex: localhost",
        "username" : "database username, ex. user1",
        "password" : "database password, ex. password1",
        "port": 3306,
        "database" : "database name, ex. osha_test",
        "root_username": "root",
        "root_password": "s3cr3t"
    },
    "admin" : {
        "username": "admin",
        "password": "admin",
        "email": "your.email@domain.org"
    },
    "uri": "http://you-vh.localhost",
    "site_mail": "your.email@domain.org"
}
```

2. Run [install.sh](https://github.com/eaudeweb/osha/blob/master/install.sh) (wrapper around few drush commands)

3. (Optional) To run the migration/migration tests see the documentation from [osha_migration](https://github.com/eaudeweb/osha/tree/master/docroot/sites/all/modules/osha_migration) module


##Repository Layout##
Breakdown for what each directory/file is used for. See also readme inside directories.

* [conf](https://github.com/eaudeweb/osha/tree/master/conf)
 * Project specific configuration files
* [docroot](https://github.com/eaudeweb/osha/tree/master/docroot)
 * Drupal root directory
* [drush](https://github.com/eaudeweb/osha/tree/master/drush)
 * Contains project specific drush commands, aliases, and configurations.
* [results](https://github.com/eaudeweb/osha/tree/master/results)
 * This directory is just used to export test results to. A good example of this
   is when running drush test-run with the --xml option. You can export the xml
   to this directory for parsing by external tools.
* [scripts](https://github.com/eaudeweb/osha/tree/master/scripts)
 * A directory for project-specific scripts.
* [test](https://github.com/eaudeweb/osha/tree/master/test)
 * A directory for external tests. This is great for non drupal specific tests
 such as selenium, qunit, casperjs.
* [.gitignore](https://github.com/eaudeweb/osha/blob/master/.gitignore)
 * Contains the a list of the most common excluded files.

-- edw

