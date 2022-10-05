#include "log_msg.h"
#include <stdio.h>

using namespace std;

log_msg::log_msg (string stmt, string timestamp){
msg = stmt;
tmstmp = timestamp;
}

log_msg::~log_msg(){
}

string log_msg::get_message(){
	return msg;
}

string log_msg::get_timestamp(){
	return tmstmp;
}

