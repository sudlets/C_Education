#include "CFour.h"

CFour::CFour() : cent(0), CThree()
{
}

CFour::CFour(const CThree& cpy, int s) : CThree(cpy), cent(s)
{
}

CFour::CFour(const CFour& cpy) : CThree(cpy), cent(cpy.cent)
{
}

void CFour::inpCent(int s)
{
	cent = s;
}

int CFour::getCent()
{
	return cent;
}

void CFour::display(void)
{
	cout << "cent = " << cent << endl;
	cout << "CThree: \n";
	CThree::display();
}

CFour::~CFour()
{
}
