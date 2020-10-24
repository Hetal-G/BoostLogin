#include "LoginService.h"
#include<boost/optional/optional.hpp>
#include<boost/tuple/tuple.hpp>
#include "EmailService.h"

using namespace boost;

int LoginService::registerUser(string username, string password, string email)
{
	if (!isUserRegistered(username))
	{

		*sql << "INSERT INTO users(name,password, email) VALUES(:usr, :pwd, :e)",
			use(username, "usr"), use(password, "pwd"), use(email, "e");

		cout << "User " << username << " Successfully registered." << endl;

		return 1;
	}
	else {
		cout << "User " << username << " is already registered." << endl;
		return 0;
	}

}

bool LoginService::isUserRegistered(string username)
{
	boost::optional<string> name;
	*sql << "select name from users where name = :name", use(username, "name"), into(name);
	
	return name.is_initialized() ? true : false;
}

bool LoginService::validateUser(string username, string password)
{
	boost::tuple<string,string> userCred;
	*sql << "select name,password from users where name = :name", use(username, "name"), into(userCred);

	if (userCred.get<0>() == username && userCred.get<1>() == password)
		return true;
	else
		return false;
}

string LoginService::getEmailForUser(string username)
{
	boost::tuple<optional<string>, string> userEmail;
	*sql << "select name,email from users where name = :name", use(username, "name"), into(userEmail);

	if (userEmail.get<0>().is_initialized())
		return userEmail.get<1>();
	else
		return nullptr;

}

int LoginService::sendOTPToUser(string username)
{
	boost::tuple<optional<string>, string> userEmail;
	*sql << "select name,email from users where name = :name", use(username, "name"), into(userEmail);

	if (userEmail.get<0>().is_initialized())
	{
		string to_email =  userEmail.get<1>();
		EmailService emailService;
		m_lastSentOTP = emailService.sendOTP(username, to_email);
		return 1;
	}
	else //user does not exist
	{
		return 0;
	}
	
	return -1;
}
bool LoginService::updateUserPassword(string username, string password)
{
	try
	{
		*sql << "UPDATE users SET password = :pwd WHERE name = :name", use(password, "pwd"), use(username, "name");
		cout << "New Password for " + username + " succesfully updated";
		return true;
	}
	catch (std::exception e)
	{
		return false;
	}
	

}