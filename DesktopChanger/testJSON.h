#pragma once

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson\reader.h"
#include <iostream>

using namespace rapidjson;
using namespace std;



class testJSON
{
public:
	char* test(const char* json);
};

