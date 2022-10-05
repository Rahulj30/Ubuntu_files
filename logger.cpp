#include <iostream>
#include "logger.h"
#include <cstring>
#include<stdlib.h>
#include "sqlite3.h"
#include <ctime>

using namespace std;



	logger:: logger(string app){
		appname = app;

		string query = "create table if not exists" + appname;
		query = query + " (timestamp varchar(255), message varchar(255));";

		int tmp = sqlite3_open("dbase.db",&dbhandle);
		int tmp1 = sqlite3_exec(dbhandle, query.c_str(), NULL,NULL,&errmsg);
	}

	logger::~logger(){
	}

	void logger:: write(string msg){
		
		string message = msg;
		time_t now = time (0);
		char* dt = ctime(&now);
	        string query = "insert into" +appname+ "values(dt,message)";
		
		int tmp2 = sqlite3_exec(dbhandle,query.c_str(), NULL, NULL,&errmsg);


	}

	vector<log_msg> logger::read_all(){
		vector<log_msg> obj;
		return  obj;
	}
int main (){
	logger obj("application");
}







