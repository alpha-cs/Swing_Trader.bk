#include "dataharvest.h"

// init data harvest tool
void dataharvest()
{
    printf("\nInit Data Harvest");
    query();

    // loop harvest tool
    // dataharvest();
}

// this function is used to query the database
void query()
{
    printf("\nExec Query");
    sql::Driver *driver;
    sql::Connection *connect;
    sql::PreparedStatement *stmt;
    sql::ResultSet *result;
    
    try
    {
        driver = get_driver_instance();
        // for demonstration only. never save password in the code!
        connect = driver->connect(_HOST, _USER, _PASS);
    }
    catch (sql::SQLException e)
    {
        std::cout << "Could not connect to server. Error message: " << e.what() << std::endl;
        system("pause");
        exit(1);
    }

    connect->setSchema("world");

    // select
    stmt = connect->prepareStatement("SELECT * FROM world.city;");
    result = stmt->executeQuery();

    while (result->next())
        printf("Reading from table=(%d, %s, %s, %s %d)\n", result->getInt(1), result->getString(2).c_str(), result->getString(3).c_str(), result->getString(4).c_str(), result->getInt(5));

    delete result;
    delete stmt;
    delete connect;
}
