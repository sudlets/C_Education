#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = -2;
	double a = 7.3;
	double b = 5.1;
	double y, p, z;
	y = (sin(x)*sin(x) + 5) / 5;
	p = pow(a*y + 57, 1. / 3.);
	z = p / (3 + fabs(cos(b)) + p);
	cout << "Fonction y=f(x) = " << y << endl;
	cout << "Function z=f(y, a, b) " << z << endl;
	system("pause>>void");
    return 0;
}
