#include "CTwo.h"

CTwo::CTwo()
{
	p = new COne;
	d = 0;
}

CTwo::CTwo(double dpy, COne &cpy) : d(dpy)
{
	p = new COne;
	*p = cpy;
}

CTwo::CTwo(const CTwo & cpy) : d(cpy.d)
{
	p = new COne;
	*p = *cpy.p;
}

void CTwo::display()
{
	cout << d << endl;
	cout << "COne: \n";
	p->display();
}

double CTwo::getD()
{
	return d;
}

 COne CTwo::getP()
{
	return *p;
}

void CTwo::inpD(double d)
{
	this->d = d;
}

void CTwo::inpS(COne &cpy)
{
	*p = cpy;
}

void CTwo::inpS(long l, string s)
{
	p->inpL(l);
	p->inpS(s);
}

CTwo& CTwo::operator=(const CTwo& ch)
{
	if (this == &ch)
	{
		cout << "cpy is nelzya!\n";
		return *this;
	}
	d = ch.d;
	*p = *ch.p;
	return *this;
}

CTwo::~CTwo()
{
	delete p;
}
