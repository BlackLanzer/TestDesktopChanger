#include "stdafx.h"
#include "testInternet.h"

using namespace std;



testInternet::testInternet()
{
}


testInternet::~testInternet()
{
}

void testInternet::test(const char* url)
{
	HINTERNET intSession = InternetOpen(_T("desktopChanger"), INTERNET_OPEN_TYPE_DIRECT, 0, 0, 0);

	HINTERNET httpSession = InternetConnect(intSession, _T("reddit.com"), 80, 0, 0, INTERNET_SERVICE_HTTP, 0, NULL);

	HINTERNET httpRequest = HttpOpenRequest(httpSession, _T("GET"), _T("r/earthporn.json"), 0, 0, 0, 0, 0);

	char req[1024] = "";
	HttpSendRequest(httpRequest, 0, 0, req, 1024);

	char buffer[1025];
	DWORD dwRead = 0;
	while (InternetReadFile(httpRequest, buffer, 1024, &dwRead) && dwRead)
	{
		buffer[dwRead] = 0;
		cout << buffer << endl;
		dwRead = 0;
	}
}
