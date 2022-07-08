#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double z, y, s, x;
	int c;

	cout << "1-for  2-while  3-do while  0-exit" << endl;
	cin >> c;

	while (c != 0)
	{
		switch (c)
		{
		case 1:
			cout << "for " << endl; cout << "Enter the n= "; cin >> n; cout << "x= "; cin >> x;
			z = 0;
			s = 0;
			y = 0;
			z = 1 / x;

			for (int k = 1; k <= n; k++)
				s = s + pow((-1), k) * ((k * x) / (x * x + k * k));

			y = z + s;
			cout << "y= " << y << endl;
			break;

		case 2:
			cout << "while" << endl; cout << "Enter the n= "; cin >> n; cout << "x= "; cin >> x;
			int k = 1;
			z = 0;
			s = 0;
			y = 0;
			z = 1 / x;

			while (k <= n)
			{
				s = s + pow((-1), k) * ((k * x) / (x * x + k * k));
				k++;
			}

			y = z + s;
			cout << "y= " << y << endl;
			break;

		case 3:
			cout << "do while" << endl; cout << "Enter the n= "; cin >> n; cout << "x= "; cin >> x;
			int k = 1;
			z = 0;
			s = 0;
			y = 0;
			z = 1 / x;

			do {
				s = s + pow((-1), k) * ((k * x) / (x * x + k * k));
				k++;
			} while (k <= n);
			y = z + s;
			cout << "y= " << y << endl;
			break;

		default:
			break;

		}

		cout << "1-for  2-while  3-do while  0-exit" << endl;
		cin >> c;
	}
}

