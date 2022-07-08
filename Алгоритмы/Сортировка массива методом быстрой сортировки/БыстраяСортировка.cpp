#include <stdio.h>
#include <tchar.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#define p 10
using namespace std;

void q_sort(int *arr, int j) {
	int size =j;
	int k = 0;
	int c = arr[(int)(size / 2)];
	int tmp;
	do {
		while (arr[k] < c)k++;
		while (arr[j] > c)j--;
		if (k <= j) {
			tmp = arr[k];
			arr[k] = arr[j];
			arr[j] = tmp;
			k++;
			j--;
		}
	} while (k <= j);
	if (j > 0) q_sort(arr, j);
	if (size > k) q_sort(&arr[k], size - k);
}
void in_mas(int *arr, int j) {
	srand(time(NULL));
	for (int i = 0; i < j; i++)
		arr[i] = rand() % 10-5;
}
void out_mas(int *arr, int j) {
	for (int i = 0; i < j; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int c = 1;
		int massiv[p];
		in_mas(massiv, p);
		out_mas(massiv, p);
		q_sort(massiv, p - 1);
		out_mas(massiv, p);
		return 0;
}