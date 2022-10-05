#include <iostream>
#include <vector>
#include "sqlite3.h"
#include "log_msg.h"

class logger{

private:
	std::string appname;
sqlite3 * dbhandle;
char *errmsg;

public: 

logger(std::string appName);

~logger();

void write(std::string msg);

std::vector<log_msg> read_all();

};
