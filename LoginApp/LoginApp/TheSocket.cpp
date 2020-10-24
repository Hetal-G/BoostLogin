#include "TheSocket.h"
#include <iostream>

using namespace std;

class TheSocket::Impl
{

private:
	asio::io_service io_service;
	tcp::socket socket;

public:
	Impl(string server, uint16_t port):socket(io_service) {
		//server name to tcp endpoint
		tcp::resolver resolver(io_service);
		tcp::resolver::query query(server, to_string(port));
		tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

		//connect to socker
		asio::connect(socket, endpoint_iterator);
	
	}

	tcp::socket* getSocket() { return &socket; }
};

TheSocket::TheSocket(string server, uint16_t port) :impl(new Impl(server,port))
{

}

tcp::socket* TheSocket::getSocket() 
{
	return impl->getSocket(); 
};

TheSocket::~TheSocket()
{
	//delete impl;
}

