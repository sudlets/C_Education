#include "COne.h"

class CTwo
{
private:
	COne * p;
	double d;
public:
	CTwo();
	CTwo(double, COne &);
	CTwo(const CTwo &);
	double getD();
	COne getP();
	void inpD(double);
	void inpS(COne &);
	void inpS(long, string);
	virtual void display();
	CTwo& operator=(const CTwo&);
	~CTwo();
};
