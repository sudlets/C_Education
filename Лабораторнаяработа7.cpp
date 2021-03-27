#include <stdio.h>
#include <tchar.h>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

#include "My_Functions.h"

#define n 10

int main()
{
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];

	in_mass(a, n);
	Sleep(1000);
	in_mass(b, n);
	Sleep(1000);
	in_mass(c, n);
	Sleep(1000);
	out_mass(a, n);
	out_mass(b, n);
	x_mass(a, b, n);
	out_mass(a, n);
	cout << endl;
	out_mass(b, n);
	out_mass(c, n);
	y_mass(b, c, n);
	out_mass(b, n);

	delete[]a;
	delete[]b;
	delete[]c;

    return 0;
}

