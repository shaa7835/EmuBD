#pragma once
#include <vector>
#include <string>


using namespace std;

struct automobile
{
	char name[20];
	unsigned int serial;
	unsigned short int mesta;
};

typedef vector <automobile> automobileList;

class autodb
{
private:
	automobileList am;

public:
	//automobileList am;
	autodb(void);
	~autodb(void);
	static string ToSting(automobile t);
	automobile& operator [](int v) { return am.at(v); }

};

