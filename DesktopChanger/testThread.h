#include <iostream>
#include <thread>

#pragma once

using namespace std;

class testThread
{
	int tempo;
	string str;
	thread *t1;
	bool go;

public:
	testThread(int tempo, string str);
	~testThread();
	static void test(testThread*);
	void start();
	void setString(string);
	void stop();
};

