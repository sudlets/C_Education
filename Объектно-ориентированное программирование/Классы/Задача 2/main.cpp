#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <clocale>
#include "Rational.h"
using namespace std;

int main()
{
	setlocale(0, "");
	Rational a(3, 10), b(2, 10), c;
	c = a + b + a + b;
	cout << "C:\n";
	c.display();
	cout << "\nA:\n";
	a.display();
	cout << "\nB:\n";
	b.display();
	return 0;
}
