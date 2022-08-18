#ifndef DATAHARVEST_H
#define DATAHARVEST_H

#include <stdio.h>
#include "db_const.h"
#include "constants.h" // includes debug

/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce your build time!
*/
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>

void dataharvest();
void query();

#endif // DATAHARVEST_H