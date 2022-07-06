#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <clocale>
#include "math_mass.h"
using namespace std;

int main()
{
	setlocale(0, "");
	int mass[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	math_mass mat(mass, 12);
	mat.appiend(13);
	mat.appiend(14);
	mat.appiend(15);
	mat.erase(3, 7);
	mat.display_mass();
	cout << "Размер массива mat = " << mat.size_mass() << endl;
	cout << "Произведение всех элементов массива mat = " << mat.mul_mass() << endl << endl;
	math_mass mat2;
	mat2.input_mass(9);
	mat2.erase(3, 2);
	mat2.display_mass();
	cout << "Размер массива mat2 = " << mat2.size_mass() << endl;
	cout << "Произведение всех элементов массива mat2 = " << mat2.mul_mass() << endl;
	math_mass cpy(mat2);
	cpy.erase(3, 15);
	cpy.display_mass();
	return 0;
}
