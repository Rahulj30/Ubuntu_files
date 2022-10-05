#include<iostream>
#include"sqlite3.h"

class log_msg{

	private :
	std::string msg;
	std::string tmstmp;
	
	public :
	log_msg(std::string msg, std::string tmstmp);
	~log_msg();
	std::string get_message();
	std::string get_timestamp();

	

};

