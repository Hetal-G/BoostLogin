#pragma once
#include <iostream>
#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

class TheOpenSSL {

private:
	unique_ptr< SSL_CTX, decltype(SSL_CTX_free)* > ctx;
	unique_ptr< SSL, decltype(SSL_free) * > ssl;

	enum { errorBufferSz = 256, readBufferSz = 256 };

public:
	TheOpenSSL(int socket, const SSL_METHOD*method = SSLv23_method()): 
		ctx(nullptr,SSL_CTX_free), ssl(nullptr,SSL_free)
	{
		char errorBuf[errorBufferSz];

		ctx = decltype(ctx) (SSL_CTX_new(method), SSL_CTX_free); // context as a framework to establish TLS/SSL enabled connection
		if (nullptr == ctx)
			throw runtime_error(ERR_error_string(ERR_get_error(), errorBuf));

		ssl = decltype(ssl) (SSL_new(ctx.get()), SSL_free); //structure that holds data for connection
		if (nullptr == ssl)
			throw runtime_error(ERR_error_string(ERR_get_error(), errorBuf));

		const int rstSetFd = SSL_set_fd(ssl.get(), socket);
		if (0 == rstSetFd)
			throw runtime_error(ERR_error_string(ERR_get_error(), errorBuf));

		const int rstConnect = SSL_connect(ssl.get());
		if (0 == rstConnect)
			throw runtime_error("Handshake error");
		if(rstConnect < 0)
			throw runtime_error("Handshake failed");
	}

	~TheOpenSSL() {
		int rstShutdown = SSL_shutdown(ssl.get());
		if (0 == rstShutdown)
			rstShutdown = SSL_shutdown(ssl.get());
		else if (-1 == rstShutdown && SSL_RECEIVED_SHUTDOWN != SSL_get_shutdown(ssl.get()))
			throw runtime_error("SSL shutdown failed");
	}

	void write(string& mesg) {
		const int rstWrite = SSL_write(ssl.get(), mesg.c_str(), mesg.length());
		if( 0 == rstWrite)
			throw runtime_error("SSL Socket write failed. Connection lost");
		else if(0 > rstWrite)
			throw runtime_error("SSL Socket write failed.Unknown Reason");
	}

	template<typename IsDoneReceivingFunctoreType >
	string Read(IsDoneReceivingFunctoreType isDoneReceiving) {
		char buffer[readBufferSz];
		string read;
		while (true)
		{
			const int rstRead = SSL_read(ssl.get(), buffer, readBufferSz);

			if (0 == rstRead)
				throw runtime_error("SSL Socket read failed. Connection lost");

			else if (0 > rstRead && SSL_ERROR_WANT_READ == SSL_get_error(ssl.get(), rstRead)) continue;

			read += string(buffer, buffer + rstRead);

			if (isDoneReceiving(read)) return read;
		}
	}

	struct StaticInitialize
	{
		StaticInitialize()
		{
			ERR_load_crypto_strings();
			SSL_load_error_strings();
			SSL_library_init();
		}

		~StaticInitialize()
		{
			ERR_free_strings();
		}
	};
};
