#pragma once
#include<string>

using namespace std;

class ConfigService {

public:
	static string DB;
	static string DB_USER;
	static string DB_PASSWD;

	static string SMTP_ADD;
	static string SMTP_PORT;
	static string SMTP_APP_USER;
	static string SMTP_APP_PASSWD;
	static string SMTP_FROM_EMAIL;
	static string SMTP_SUBJECT;

public:

	ConfigService(string configFile);
		
};
