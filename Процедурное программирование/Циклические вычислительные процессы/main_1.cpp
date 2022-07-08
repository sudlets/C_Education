#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	float y, N, a, Xstart, Xfinish, dx, x;

	N = 3;
	a = 3;
	Xstart = 0.5;
	Xfinish = 1.5;
	x = Xstart;
	dx = (Xfinish - Xstart) / (N - 1);

	cout << "Result compilations:" << endl;

	for (int i = 1; i <= N; i++)
	{
		y = ((log((a * a) + (x * x))) / (fabs(a + x)));
		cout << "i= " << i << " " << "N" << i << "= " << y;
		cout << endl;
		x += dx;
	}
	return 0;
}

