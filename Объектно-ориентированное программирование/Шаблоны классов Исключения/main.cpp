#include <iostream>
using namespace std;
#include "Rational.h"

int main()
{
	Rational<int> numeric(4, 5), flying(6, 18);
	Rational<long> rocket(11, 32), sun(99, 102);
	numeric.sum(flying);
	rocket.mul(sun);
	cout << "Numeric: \n";
	numeric.display();

	cout << "Rocket: \n";
	rocket.display();
	
	cout << "Home: \n";
	//home.gcd();
    return 0;
}
