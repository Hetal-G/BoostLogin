#include "EmailService.h"
#include "SMTPClient.h"
#include "ConfigService.h"

#include <boost/random/linear_congruential.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

typedef boost::minstd_rand base_generator_type;

string EmailService::sendOTP(string username, string to_email) {

	// Define a random number generator and initialize it with a reproducible seed.
	base_generator_type generator(42);

	// Define a uniform random number distribution which produces "double"
	// values between 100000 and 999999 
	boost::uniform_int<> uni_dist(100000, 999999);
	boost::variate_generator<base_generator_type&, boost::uniform_int<> > uni(generator, uni_dist);

	string theOTP = to_string(uni());

	string message = "Hi " + username + "," + "\n" + "Your One Time Password is " + theOTP;

	SMTPClient::sendSSL(
		ConfigService::SMTP_ADD,				//server address
		std::stoi(ConfigService::SMTP_PORT),	//port
		ConfigService::SMTP_APP_USER,			//User Name
		ConfigService::SMTP_APP_PASSWD,			//App Password
		ConfigService::SMTP_FROM_EMAIL,
		to_email,
		ConfigService::SMTP_SUBJECT,
		message
	);

	return theOTP;
}