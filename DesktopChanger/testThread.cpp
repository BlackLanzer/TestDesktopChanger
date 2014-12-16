#include "stdafx.h"
#include "testThread.h"
#include <iostream>
#include <string>
#include <thread>
#include <cstdlib>


using namespace std;

testThread::testThread(int t, string s)
{
	tempo = t;
	str = s;
	go = true;
	t1 = new thread(&testThread::test, this);
}


testThread::~testThread()
{
}

void testThread::test(testThread* _tt)
{
	while (_tt->go)
	{
		this_thread::sleep_for(chrono::milliseconds(_tt->tempo));
		cout << _tt->str << endl;
	}
}

void testThread::start()
{
	t1->detach();
}

void testThread::stop()
{
	go = false;
}

void testThread::setString(string s)
{
	str = s;
}