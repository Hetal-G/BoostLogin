#pragma once
#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <exception>
#include <iostream>
#include <string>
#include <exception>
#include<boost/move/unique_ptr.hpp>
#include<regex>
#include "ConfigService.h"

using namespace soci;
using namespace std;

class LoginService
{
public:
	LoginService() {
		try
		{
			// Connect to MySQL database
			//session sql(mysql, "db=app_db user=hetal password=hetal123");
			const string connString = "db=" + ConfigService::DB + " user=" + ConfigService::DB_USER +
				" password=" + ConfigService::DB_PASSWD;

			sql = new soci::session(*soci::factory_mysql(), 
				connString);
		}
		catch (std::exception e) {
			std::cout << "Error connecting database" << endl; //should go to logger
		}

	}

	~LoginService() {
		if (sql)
		{
			if (sql) sql->close();
			//delete sql;
		}
	}

	int registerUser(string username, string password, string email);
	bool isUserRegistered(string username);
	bool validateUser(string username, string password);
	string getEmailForUser(string username);
	int sendOTPToUser(string username);
	bool isOTPValid(string otp) { return otp == m_lastSentOTP; }
	bool updateUserPassword(string username, string password);

	bool is_email_valid(const std::string& email)
	{
		// define a regular expression	
		const std::regex expression("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		// try to match the string with the regular expression
		return std::regex_match(email, expression);
	}
	
private:
	soci::session* sql;
	string m_lastSentOTP;
	
};




