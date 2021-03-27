#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Xfinish, Xstart, y, fx1, fx2, x, dx, m;
	int j, k, N;
	cin >> m >> Xstart >> Xfinish >> N;
	x = Xstart;
	dx = (Xfinish - Xstart) / (N - 1);
	fx1 = 0;
	fx2 = 0;

	for (k = 1; k <= m; k++)
		fx2 += k * k;

	cout << "N" << "         " << "y" << endl;

	for (int n = 1; n <= N; n++)
	{
		for (int j = 1; j <= m; j++)
			fx1 += pow((2 + x + (j / x) * fx2), 2);

		y = pow((2 * x * x + fx1), 1. / 2);
		cout << n << "         " << y << endl;
		x += dx;
	}

	return 0;
}