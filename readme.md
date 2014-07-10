OSHA
====

Build scripts and source code for the Osha project

[![Build Status](http://ci.edw.ro/buildStatus/icon?job=osha_test&dummy=1)](http://ci.edw.ro/job/osha_test/)

##Getting started##

@todo: Add link/document installation

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

