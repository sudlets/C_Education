#include "COne.h"

COne::COne():l(0), s("?")
{
}

COne::COne(long l, std::string s) : l(l), s(s)
{
}

COne::COne(const COne & cpy) : l(cpy.l), s(cpy.s)
{
}

void COne::display()
{
	cout << l << endl << s << endl;
}

COne COne::operator=(COne cpy)
{
	COne Temp;
	Temp.l = cpy.l;
	Temp.s = cpy.s;
	return Temp;
}

int COne::getL()
{
	return l;
}

string COne::getS()
{
	return s;
}

void COne::inpL(long l)
{
	this->l = l;
}

void COne::inpS(string s)
{
	this->s = s;
}

COne::~COne()
{
}
