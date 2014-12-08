#include "stdafx.h"
#include "testJSON.h"

using namespace rapidjson;

class UrlHandler {
private:
	char *url;
	bool isUrl; // true quando trova l'url da salvare
public:
	UrlHandler(char*);

	bool Null() { cout << "Null()" << endl; return true; }
	bool Bool(bool b) { cout << "Bool(" << boolalpha << b << ")" << endl; return true; }
	bool Int(int i) { cout << "Int(" << i << ")" << endl; return true; }
	bool Uint(unsigned u) { cout << "Uint(" << u << ")" << endl; return true; }
	bool Int64(int64_t i) { cout << "Int64(" << i << ")" << endl; return true; }
	bool Uint64(uint64_t u) { cout << "Uint64(" << u << ")" << endl; return true; }
	bool Double(double d) { cout << "Double(" << d << ")" << endl; return true; }
	bool String(const char* str, SizeType length, bool copy) {
		cout << "String(" << str << ", " << length << ", " << boolalpha << copy << ")" << endl;
		if (isUrl)
		{
			isUrl = false;
			strcpy_s(url, length+1, str);
		}
		return true;
	}
	bool StartObject() { cout << "StartObject()" << endl; return true; }
	bool Key(const char* str, SizeType length, bool copy) {
		cout << "Key(" << str << ", " << length << ", " << boolalpha << copy << ")" << endl;
		if (strcmp(str, "url")==0)
		{
			isUrl = true;
		}
		return true;
	}
	bool EndObject(SizeType memberCount) { cout << "EndObject(" << memberCount << ")" << endl; return true; }
	bool StartArray() { cout << "StartArray()" << endl; return true; }
	bool EndArray(SizeType elementCount) { cout << "EndArray(" << elementCount << ")" << endl; return true; }
};

UrlHandler::UrlHandler(char *url)
{
	this->url = url;
	this->isUrl = false;
}

char* testJSON::test(const char * str)
{
	// 1. Parse a JSON string into DOM.
	const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
	/*Document d;
	d.Parse(json);

	// 2. Modify it by DOM.
	Value& s = d["stars"];
	s.SetInt(s.GetInt() + 1);

	// 3. Stringify the DOM
	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	d.Accept(writer);

	// Output {"project":"rapidjson","stars":11}
	std::cout << buffer.GetString() << std::endl;
	*/
	/*
	MyHandler handler;
	Reader reader;
	StringStream ss(json);
	reader.Parse(ss, handler);
	*/
	//char url[250];
	char * url = (char*) malloc(250);
	UrlHandler handler(url);
	Reader reader;
	StringStream s(str);
	reader.Parse(s, handler);


	return url;
}
