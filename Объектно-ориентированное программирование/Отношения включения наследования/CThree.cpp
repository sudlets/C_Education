#include "CThree.h"

CThree::CThree() : s(0), CTwo()
{
}

CThree::CThree(const CTwo &cpy) : CTwo(cpy)
{
	s = getD() + getP().getL();
}

CThree::CThree(const CThree &cpy) : CTwo(cpy), s(cpy.s)
{
}
void CThree::display()
{
	s = getD() + getP().getL();
	cout << "sum = " << s << endl;
	cout << "CTwo: \n";
	CTwo::display();
}

CThree::~CThree()
{
}
