#include "CTwo.h"

class CThree :
	public CTwo
{
private:
	double s;
public:
	CThree();
	CThree(const CTwo &);
	CThree(const CThree &);
	double getS();
	virtual void display();
	~CThree();
};
