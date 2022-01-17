#pragma once
#include <dinput.h>
#include <tchar.h>
#include <iostream>
#include <Urlmon.h>

#include <WinInet.h>


namespace swr {

	extern std::string getRequest(std::string site, std::string param);
	extern bool downloadRequest(std::string site, std::string filename);


}