#pragma once

#include "TheSocket.h"
#include "TheOpenSSL.h"
#include <string>
#include <boost/archive/iterators/base64_from_binary.hpp>
#include <boost/archive/iterators/transform_width.hpp>


using namespace std;
using namespace boost;

class SMTPClient {

private:
	struct ReceiveFunctor {
		enum { codeLength = 3};
		const string code;

		ReceiveFunctor(int expectedCode):code(to_string(expectedCode)) {
		
			if (code.length() != codeLength)
				throw runtime_error("SMTP Code must be three digit");
		}
		bool operator() (const string& msg) const {

			if (msg.length() < codeLength) return false;
			string receivedcode = msg.substr(0, codeLength);
			if (code != receivedcode) throw runtime_error("SMTP Code is not received.");
			const size_t posNewLine = msg.find_first_of('\n', codeLength);
			if (posNewLine == string::npos) return false;
			if (msg.at(codeLength) == ' ') return true;
			if (msg.at(codeLength) == '-') return this->operator() (msg.substr(posNewLine + 1));
			throw runtime_error("Unexpected return code received.");
			
		}
	
	};

	static string EncodeBase64(const string& data)
	{
		typedef archive::iterators::base64_from_binary<
			archive::iterators::transform_width<const char*,6,8>
		> Base64;

		return string(Base64(data.c_str()), Base64(data.c_str() + data.length()));

	}
public:
	void static sendSSL(const string& server, uint16_t port, const string& username, const string& password,
		const string& from, const string& to, const string& subject,const string& mesg) {

		static const string newline = "\r\n";
		TheSocket socket(server, port);
		TheOpenSSL openSSL(socket.getSocket()->native_handle());
		
		cout << openSSL.Read(ReceiveFunctor(220)); //220 mx.google.com ESMTP

		openSSL.write( string("HELO ") + server + newline);
		cout << openSSL.Read(ReceiveFunctor(250)); //250 mx.google.com, I am glad to meet you 

		openSSL.write(string("AUTH LOGIN ")  + newline);
		cout << openSSL.Read(ReceiveFunctor(334)); //334

		openSSL.write(EncodeBase64(username) + newline);
		cout << openSSL.Read(ReceiveFunctor(334)); //334
		openSSL.write(EncodeBase64(password) + newline);
		cout << openSSL.Read(ReceiveFunctor(235)); //Credential Acccepted

		openSSL.write(string("MAIL FROM:<" + from +">") + newline);
		cout << openSSL.Read(ReceiveFunctor(250)); //250 OK 

		openSSL.write(string("RCPT TO:<" + to + ">") + newline);
		cout << openSSL.Read(ReceiveFunctor(250)); //250 OK 

		openSSL.write(string("DATA") + newline);
		cout << openSSL.Read(ReceiveFunctor(354)); //354 Go ahead 

		openSSL.write(string("From: <" + from + ">") + newline);
		openSSL.write(string("To: <" + to + ">") + newline);
		openSSL.write(string("Subject: <" + subject + ">") + newline);
		openSSL.write(newline + mesg + newline + "." + newline);
		cout << openSSL.Read(ReceiveFunctor(250)); //250 OK 

		openSSL.write(string("QUIT") + newline);
		cout << openSSL.Read(ReceiveFunctor(221)); //221 closing connection
	}
};
