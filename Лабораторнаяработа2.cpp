#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cin >> x;

	if (x > 9)
		cout << pow(x, 1. / 2) << endl;
	
	else if (x > 2) 
		cout << 5 * exp(-1) << endl;

	else if (x > 1) 
		cout << exp(x) << endl;
	
	else 
		cout << cos(x) << endl;

	return 0;
}

