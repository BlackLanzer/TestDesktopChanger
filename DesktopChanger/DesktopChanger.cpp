// DesktopChanger.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <urlmon.h>
#include "testProgress.h"
#include "testJSON.h"
#include <memory>
#include "testInternet.h"


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
	/*
	char * str1 = "{\"kind\": \"Listing\", \"data\": {\"modhash\": \"zuri8otd2ccc6e3e070705ee6e281c4b7523f5811522b791f9\", \"children\": [{\"kind\": \"t3\", \"data\": {\"domain\": \"self.EarthPorn\", \"banned_by\": null, \"media_embed\": {}, \"subreddit\": \"EarthPorn\", \"likes\": null, \"user_reports\": [], \"secure_media\": null, \"link_flair_text\": null, \"id\": \"2l64y8\", \"gilded\": 0, \"secure_media_embed\": {}, \"clicked\": false, \"report_reasons\": null, \"author\": \"ryandury\", \"media\": null, \"score\": 254, \"approved_by\": null, \"over_18\": false, \"hidden\": false, \"thumbnail\": \"self\", \"subreddit_id\": \"t5_2sbq3\", \"edited\": 1415125531.0, \"link_flair_css_class\": null, \"author_flair_css_class\": \"Camera\", \"downs\": 0, \"mod_reports\": [], \"saved\": false, \"is_self\": true, \"name\": \"t3_2l64y8\", \"permalink\": \"/r/EarthPorn/comments/2l64y8/earthporn_in_every_new_chrome_tab/\", \"stickied\": true, \"created\": 1415062297.0, \"url\": \"http://www.reddit.com/r/EarthPorn/comments/2l64y8/earthporn_in_every_new_chrome_tab/\", \"author_flair_text\": null, \"title\": \"EarthPorn in every new Chrome Tab!\", \"created_utc\": 1415033497.0, \"ups\": 254, \"num_comments\": 87, \"visited\": false, \"num_reports\": null, \"distinguished\": null}} ] } }";
	char * str2 = "{ \"kind\": \"Listing\", \"data\": {\"modhash\": \"zuri8otd2ccc6e3e070705ee6e281c4b7523f5811522b791f9\", \"children\": [{\"kind\": \"t3\", \"data\": {\"domain\": \"self.EarthPorn\", \"banned_by\": null, \"media_embed\": {}, \"subreddit\": \"EarthPorn\", \"likes\": null, \"user_reports\": [], \"secure_media\": null, \"link_flair_text\": null, \"id\": \"2l64y8\", \"gilded\": 0, \"secure_media_embed\": {}, \"clicked\": false, \"report_reasons\": null, \"author\": \"ryandury\", \"media\": null, \"score\": 254, \"approved_by\": null, \"over_18\": false, \"hidden\": false, \"thumbnail\": \"self\", \"subreddit_id\": \"t5_2sbq3\", \"edited\": 1415125531.0, \"link_flair_css_class\": null, \"author_flair_css_class\": \"Camera\", \"downs\": 0, \"mod_reports\": [], \"saved\": false, \"is_self\": true, \"name\": \"t3_2l64y8\", \"permalink\": \"/r/EarthPorn/comments/2l64y8/earthporn_in_every_new_chrome_tab/\", \"stickied\": true, \"created\": 1415062297.0, \"url\": \"https://ppcdn.500px.org/89501729/42328a8e31a7438d85031779f0282a5c48785dda/2048.jpg\", \"author_flair_text\": null, \"title\": \"EarthPorn in every new Chrome Tab!\", \"created_utc\": 1415033497.0, \"ups\": 254, \"num_comments\": 87, \"visited\": false, \"num_reports\": null, \"distinguished\": null}} ] } }";

	testJSON tj;
	auto url1 = tj.test(str1);
	auto url2 = tj.test(str2);
	printf("%s\n", url1);
	printf("%s\n", url2);
	*/

	testInternet ti;
	ti.test(0);

	system("PAUSE");

	return 0;
}

