#include "ConfigService.h"
#include<iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>


ConfigService::ConfigService(string configFile) {

	boost::property_tree::ptree pt;
	boost::property_tree::ini_parser::read_ini(configFile, pt);

	DB = pt.get<std::string>("MYSQL.db");
	DB_USER = pt.get<std::string>("MYSQL.user");
	DB_PASSWD = pt.get<std::string>("MYSQL.password");

	SMTP_ADD = pt.get<std::string>("SMTP.address");
	SMTP_PORT = pt.get<std::string>("SMTP.port");
	SMTP_APP_USER = pt.get<std::string>("SMTP.user");
	SMTP_APP_PASSWD = pt.get<std::string>("SMTP.appPassword");
	SMTP_FROM_EMAIL = pt.get<std::string>("SMTP.from_email");
	SMTP_SUBJECT = pt.get<std::string>("SMTP.subject");

}
string ConfigService::DB = "";
string ConfigService::DB_USER = "";
string ConfigService::DB_PASSWD = "";

string ConfigService::SMTP_ADD = "";
string ConfigService::SMTP_PORT = "";
string ConfigService::SMTP_APP_USER = "";
string ConfigService::SMTP_APP_PASSWD = "";
string ConfigService::SMTP_FROM_EMAIL = "";
string ConfigService::SMTP_SUBJECT = "";