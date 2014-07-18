OSHA
====

Build scripts and source code for the Osha project

[![Build Status](http://ci.edw.ro/buildStatus/icon?job=osha&dummy=1)](http://ci.edw.ro/job/osha/)

##Pre-requisites

1. Drush (7.0-dev)
2. Virtual host for your Drupal instance that points to the docroot/ directory from this repo

##Quick start##

1. Copy [conf/config.template.json](https://github.com/EU-OSHA/osha-website/blob/master/conf/config.template.json)
to `config.json` and customize to suit your environment

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
        "site_mail": "your.email@domain.org",
        "solr_server": {
            "name": "Apache Solr server",
            "enabled": 1,
            "description": "",
            "scheme": "http",
            "host": "localhost",
            "port": 8080,
            "path": "/solr",
            "http_user": "",
            "http_password": "",
            "excerpt": 1,
            "retrieve_data": 1,
            "highlight_data": 1,
            "skip_schema_check": null,
            "solr_version": "",
            "http_method": "AUTO",
            "apachesolr_read_only": null,
            "apachesolr_direct_commit": 1,
            "apachesolr_soft_commit": 1
        },
        "variables": {
            "osha_data_dir": "/var/local/osha/data"
        }
    }
    ```

2. Copy the following code into `~/.drush/drushrc.php` (create if necessary)

    ```php
        <?php
            $repo_dir = drush_get_option('root') ? drush_get_option('root') : getcwd();
            $success = drush_shell_exec('cd %s && git rev-parse --show-toplevel 2> ' . drush_bit_bucket(), $repo_dir);
            if ($success) {
                $output = drush_shell_exec_output();
                $repo = $output[0];
                $options['config'] = $repo . '/drush/drushrc.php';
                $options['include'] = $repo . '/drush/commands';
                $options['alias-path'] = $repo . '/drush/aliases';
            }
    ```
    
3. Run [install.sh](https://github.com/EU-OSHA/osha-website/blob/master/install.sh) (wrapper around few drush commands)

*Note:* You can pass `--skip-migrations` to not install the migrations for you.

4. (Optional) To run the migration/migration tests see the documentation from [osha_migration](https://github.com/EU-OSHA/osha-website/tree/master/docroot/sites/all/modules/osha_migration) module

##Repository Layout##
Breakdown for what each directory/file is used for. See also readme inside directories.

* [conf](https://github.com/EU-OSHA/osha-website/tree/master/conf)
 * Project specific configuration files
* [docroot](https://github.com/EU-OSHA/osha-website/tree/master/docroot)
 * Drupal root directory
* [drush](https://github.com/EU-OSHA/osha-website/tree/master/drush)
 * Contains project specific drush commands, aliases, and configurations.
* [results](https://github.com/EU-OSHA/osha-website/tree/master/results)
 * This directory is just used to export test results to. A good example of this
   is when running drush test-run with the --xml option. You can export the xml
   to this directory for parsing by external tools.
* [scripts](https://github.com/EU-OSHA/osha-website/tree/master/scripts)
 * A directory for project-specific scripts.
* [test](https://github.com/EU-OSHA/osha-website/tree/master/tests)
 * A directory for external tests. This is great for non drupal specific tests
 such as selenium, qunit, casperjs.
* [.gitignore](https://github.com/EU-OSHA/osha-website/blob/master/.gitignore)
 * Contains the a list of the most common excluded files.

-- edw
