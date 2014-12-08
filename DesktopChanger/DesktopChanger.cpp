// DesktopChanger.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <urlmon.h>
#include "testProgress.h"


#pragma comment(lib, "urlmon.lib")

using namespace std;

wstring ExePath() {
	wchar_t buffer[MAX_PATH];
	GetModuleFileName(NULL, buffer, MAX_PATH);
	wstring::size_type pos = wstring(buffer).find_last_of(L"\\/");
	return wstring(buffer).substr(0, pos + 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	LPWSTR file = L"E:\\sfondi\\2048 (1).jpg";
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, file, SPIF_UPDATEINIFILE);

	std::cout << "sfondo cambiato" << std::endl;
	*/

	/*
	wchar_t buffer[MAX_PATH];
	GetModuleFileName(NULL,buffer, MAX_PATH);

	cout << buffer << endl;
	wcout << buffer << endl;
	*/

	TCHAR directory[MAX_PATH]; //path dell'eseguibile
	GetModuleFileName(NULL, directory, MAX_PATH);
	//GetCurrentDirectoryW(MAX_PATH, directory);

	/*
	wstring ritorno = ExePath();
	wchar_t * path = (wchar_t*) malloc(sizeof(wchar_t) * 250);
	lstrcpyW(path, &(ritorno[0]));
	lstrcat(path, L"prova.gif");

	testProgress tp;

	URLDownloadToFile(NULL, L"http://giant.gfycat.com/AnimatedGrippingCottonmouth.gif", path, 0, &tp);
	*/

	return 0;
}

