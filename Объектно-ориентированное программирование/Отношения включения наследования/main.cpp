#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
using namespace std;
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"

void displayAll(CTwo** const mass, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "mass[" << i << "]: \n";
		mass[i]->display();
		cout << endl;
	}
}

int main()
{
	CTwo a, b, c;
	COne abc(23, "str");
	a.display(); //1
	cout << endl;
	b.display(); //2
	cout << endl;
	c.display(); //3
	cout << endl;
	c.inpS(abc);
	c.display(); //4
	cout << endl;
	c.inpD(99.999);
	abc.inpS("proth");
	c.display(); //5
	cout << endl;
	abc.display(); //6
	cout << endl;
	CTwo par(22, abc);
	abc.inpS("expected");
	abc.inpL(5);
	par.display(); //7
	cout << endl;
	CTwo cpy = par;
	par.inpS(abc);
	cpy.display(); //8
	cout << endl;
	par.display();
	cout << endl; //9

	CThree Testing;
	Testing.display();
	cout << endl; //10
	CThree Testing_par(par);
	Testing_par.display();
	cout << endl; //11
	CThree Testing_cpy(Testing_par);
	Testing_par.inpD(100);
	Testing_par.display();
	cout << endl; //12
	
	CFour fo4(Testing_par, 55);
	fo4.display();
	cout << endl; //13

	cout << "Test displayAll\n";
	CTwo* mass[5];
	mass[0] = &a;
	mass[1] = &par;
	mass[2] = &fo4;
	mass[3] = &Testing;
	mass[4] = &cpy;
	displayAll(mass, 5);

	a = a;
	a.display();
    return 0;
}
