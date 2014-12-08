#pragma once

#include <iostream>
#include <Windows.h>
#include <WinInet.h>
#include <tchar.h>

#pragma comment(lib,"Wininet.lib")

class testInternet
{
public:
	testInternet();
	~testInternet();

	void test(const char* url);
};

