#include <iostream>
#include <Windows.h>
#include "requests.hpp"

// Forward declarations of helper functions


// Main code
void main()
{


	//Here the first argument is the website domain, without any HTTPs or trailing slashes, the second part is what we want to send, for example swr::getRequest("YourWebsite.com", "api.php?type=login&username=xyz&password=xyz")
	std::string response = swr::getRequest("google.com", "");

	//Here we download a file, this is currently to the same directory the program is running in, you can change this in the second param (Path). Currently you must specify the MIME type.
	swr::downloadRequest("https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/368px-Google_2015_logo.svg.png", "google.png");

	std::cout << response << std::endl;
	
}
