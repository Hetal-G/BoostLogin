#pragma once

#include<string>


using namespace std;
class EmailService
{

public:
	EmailService() {
		from_email = "hetal.y.goswami@gmail.com";
		subject = "OTP to reset password";
	}

	string sendOTP(string username, string to_email);

private:
	string from_email;
	string subject;
	
};

