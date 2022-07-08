// Бинарныйпоиск.cpp: определяет точку входа для консольного приложения.
//

#include <stdio.h>
#include <tchar.h>
#include <iostream>
using namespace std;

void binsearch(int *arr, int size, int znach) {
	int left = 0;
	int right = size;
	int search = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (znach == arr[mid]) {
			search = mid;
			break;
		}
		if (znach < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	if (search == -1)
		cout << "Element didn't been searched\n";
	else 
		cout << "Search element = " << znach <<" Key = "<< search << endl;

}

int main()
{
	int x;
	cin >> x;
	int arr[10] = { 1, 20, 25, 40, 40, 42, 43 ,44 ,100, 101 };
	binsearch(arr, 10, 403);
    return 0;
}

