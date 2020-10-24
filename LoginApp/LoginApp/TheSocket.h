#pragma once
#include <string>

#ifdef WIN32
#ifdef USE_ASIO
//     Set the proper SDK version before including boost/Asio
#include <SDKDDKVer.h>
//     Note boost/ASIO includes Windows.h. 
#include <boost/asio.hpp>
#else //  USE_ASIO
#include <Windows.h>
#endif //  USE_ASIO
#else // _WIN32
#ifdef USE_ASIO
#include <boost/asio.hpp>
#endif // USE_ASIO
#endif //_WIN32

using namespace boost;

using boost::asio::ip::tcp;

class TheSocket {

public:
	TheSocket(std::string server, uint16_t port);
	tcp::socket* getSocket();

	~TheSocket();
private:
	class Impl;
	std::unique_ptr<Impl> impl;

	
};

