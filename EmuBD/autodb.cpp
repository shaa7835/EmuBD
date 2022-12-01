#include "autodb.h"

autodb::autodb(void)
{
	automobile* am1 = new(automobile);
	
	for (int i = 0;i<20; i++) {
		am1->name[i] = '2';
	}
	am1->serial = 0;
	am1->mesta = 9;
	am.push_back(*am1);
	delete am1;
}

autodb::~autodb(void)
{
}

string autodb::ToSting(automobile t)
{
	return "jfsdksjd";//string();
}
