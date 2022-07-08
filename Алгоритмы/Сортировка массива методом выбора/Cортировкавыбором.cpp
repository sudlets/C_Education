#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <cstdlib>
using namespace std;
#define srznach  20

void insertSort(int *m, int dlina) {
	int buff, min;
	for (int i = 0; i < dlina; i++) {
		min = i;
		for (int j = i + 1; j < dlina; j++) 
			if (m[j] < m[min])
				min = j;
			buff = m[i];
			m[i] = m[min];
			m[min] = buff;
	}
}

void insertSort30(int *m, int dlina) {
	double three = (dlina / 100. * 30);
	cout << "three= " << three << endl;
	int buff, min;
	for (int i = 0; i < three; i++) {
		min = i;
		for (int j = i + 1; j < three; j++)
			if (m[j] > m[min])
				min = j;
		buff = m[i];
		m[i] = m[min];
		m[min] = buff;
	}
}

int main()
{
	int arr[srznach];
	for (int i = 0; i<srznach; i++) {
		arr[i] = rand() % 20 - 5;
		cout << arr[i] << ' ';
	}
	insertSort(arr, srznach);
	cout << endl;
	for (int i = 0; i<srznach; i++)
		cout << arr[i] << ' ';
	insertSort30(arr, srznach);
	for (int i = 0; i<srznach; i++)
		cout << arr[i] << ' ';
	return 0;
}

/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
#define srznach  10

void insertSort(int *m, int dlina) {
	int buff, min;
	for (int i = 0; i < dlina; i++) {
		min = i;
		for (int j = i + 1; j < dlina; j++) 
			if (m[j] < m[min])
				min = j;
			buff = m[i];
			m[i] = m[min];
			m[min] = buff;
	}
}


int main()
{
	int arr[srznach];
	for (int i = 0; i<srznach; i++) {
		arr[i] = rand() % 10 - 5;
		cout << arr[i] << ' ';
	}
	insertSort(arr, srznach);
	cout << endl;
	for (int i = 0; i<srznach; i++)
		cout << arr[i] << ' ';
	return 0;
	}*/