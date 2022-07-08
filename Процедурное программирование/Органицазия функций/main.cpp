#include <iostream>
#include <cmath>
using namespace std;

int y_fun(int a, int k, int m, int z) 
{
	int y = 0;
	for (; k <= m; k++)
		y += (z*k*k*k + a);

	return y;
}

void y_fun_adress(int a, int k, int m, int z, int &znach) 
{
	int y = 0;
	for (; k <= m; k++)
		y += (z*k*k*k + a);
	znach = y;
}

void y_fun_ykaz(int a, int k, int m, int z, int *znach) 
{
	int y = 0;
	for (; k <= m; k++)
		y += (z*k*k*k + a);
	*znach = y;
}

int main()
{
	int a, n, m;

	cout << "Enter the\na\nn\nm\n";
	cin >> a >> n >> m;
	int up, down;

	y_fun_ykaz(1, 2, n, 2, &up);
	y_fun_ykaz(a, 1, m, 1, &down);
	double funct = (double)(a + up) / (2 + down);
	cout << funct << endl;

	y_fun_adress(1, 2, n, 2, up);
	y_fun_adress(a, 1, m, 1, down);
	funct = (double)(a + up) / (2 + down);
	cout << funct << endl;

	cout << (double)(a + y_fun(1, 2, n, 2)) / (2 + y_fun(a, 1, m, 1));

	return 0;
}
