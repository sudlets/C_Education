#include <iomanip>
#include <iostream>
using namespace std;

#include "function_MY.h"

#define n 5
#define m 10


int main()
{
	int **arr = new int*[n];     //объявление массива
	for (int j = 0; j < n; j++)  //выделение памяти под массив
		arr[j] = new int[m];

	in_mass(arr, n, m);
	out_mass(arr, n, m);
	umnozh(arr, n, m);
	cout << endl;
	out_mass(arr, n, m);
	for (int j = 0; j < n; j++)  //освобождение памяти 
		delete[] arr[j];         //освобождение памяти 
	delete[]arr;                 //освобождение памяти 
    return 0;
}

