#ifndef CONSTANTS_H
#define CONSTANTS_H

const double PI{3.1415926535897932384626433832795};

// Used for loging to console
#define _LOG(x) std::cout << x << std::endl;

// example of struct
//  c++ struct on mysql connection details
//  struct connection_details
//  {
//      const char *server;
//      const char *user;
//      const char *password;
//      const char *database;
//  };
//  connection_details *conec = new connection_details;

#endif // CONSTANTS_H