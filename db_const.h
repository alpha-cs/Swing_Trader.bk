#ifndef DB_CONST_H
#define DB_CONST_H

#pragma once

// for demonstration only. never save password in the code!
#define _HOST "localhost" // server host
#define _USER "root"	  // server user
#define _PASS "5662"	  // server password | This is my name in number format. :)

// exchange_id enum of us exchanges
enum exchange_id
{
	NASDAQ = 0, // NASDAQ
	NYSE,		// NYSE
	AMEX,		// AMEX
	// reserverd. add more exchanges below
	sizeofExchange // size of exchange_id
};

// holds sql table names as company ticker names
const char *const sql_table[] = {
	"META",	 // facebook
	"AMZN",	 // amazon
	"NFLX",	 // netflix
	"GOOGL", // google
	"MSFT"	 // microsoft
};
// MySQL database name
#define _DB "swingtraderdb" // database name is used for testing

#endif // DB_CONST_H