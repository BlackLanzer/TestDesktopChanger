#include "stdafx.h"
#include "testProgress.h"
#include <iostream>

using namespace std;

testProgress::testProgress()
{
}


testProgress::~testProgress()
{
}

HRESULT testProgress::OnProgress(ULONG ulProgress, ULONG ulProgressMax,
	ULONG ulStatusCode, LPCWSTR wszStatusText)
{
	wcout << ulProgress << " / " << ulProgressMax << endl;
	return S_OK;
}