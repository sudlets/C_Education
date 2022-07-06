#include "Rational.h"

Rational::Rational()
{
	drob[0] = 1;
	drob[1] = 1;
}

Rational::Rational(int a, int b)
{
	drob[0] = a;
	drob[1] = b;
}

Rational::Rational(Rational & ch)
{
	drob[0] = ch.drob[0];
	drob[1] = ch.drob[1];
}

Rational::~Rational()
{
}

int Rational::gcd(int a, int b)
{
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else b = b % a;
	}
	return a + b;
}

int Rational::getChisl(void)
{
	return drob[0];
}

int Rational::getZnam(void)
{
	return drob[1];
}

void Rational::raz(int *a, int *b)
{
	int nok = gcd(a[1], b[1]);
	int buf1, buf2;
	buf1 = a[1] / nok;
	buf2 = b[1] / nok;
	a[0] *= buf2;
	a[1] *= buf2;
	b[0] *= buf1;
	b[1] *= buf1;
}

void Rational::display(void)
{
	cout << drob[0] << endl << "-\n" << drob[1] << endl;
}

void Rational::input_Chisl(int a)
{
	drob[0] = a;
}

void Rational::input_Znam(int b)
{
	drob[1] = b;
}

void Rational::sum(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		int buf[2];
		buf[0] = drob2.drob[0];
		buf[1] = drob2.drob[1];
		raz(drob, buf);
		drob[0] += buf[0];
		int nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

void Rational::sub(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		int buf[2];
		buf[0] = drob2.drob[0];
		buf[1] = drob2.drob[1];
		raz(drob, buf);
		drob[0] -= buf[0];
		int nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

void Rational::mul(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		drob[0] *= drob2.drob[0];
		drob[1] *= drob2.drob[1];
		int nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

void Rational::div(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[0] != 0)
	{
		drob[0] *= drob2.drob[1];
		drob[1] *= drob2.drob[0];
		int nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

double Rational::ratio()
{
	if (drob[1] != 0)
		return drob[0] / (double)drob[1];
	else
		return 0;
}

Rational Rational::operator+(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
	{
		int buf[2];
		buf[0] = drob[0];
		buf[1] = drob[1];
		raz(Temp.drob, buf);
		Temp.drob[0] += buf[0];
		int nok = gcd(Temp.drob[0], Temp.drob[1]);
		Temp.drob[0] /= nok;
		Temp.drob[1] /= nok;
	}
	else
	{
		Temp.drob[0] = 1;
		Temp.drob[1] = 1;
	}
	return Temp;
}

Rational Rational::operator-(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
	{
		int buf[2];
		buf[0] = drob[0];
		buf[1] = drob[1];
		raz(Temp.drob, buf);
		Temp.drob[0] = buf[0] - Temp.drob[0];
		int nok = gcd(Temp.drob[0], Temp.drob[1]);
		Temp.drob[0] /= nok;
		Temp.drob[1] /= nok;
	}
	else
	{
		Temp.drob[0] = 1;
		Temp.drob[1] = 1;
	}
	return Temp;
}

Rational Rational::operator*(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
	{
		Temp.drob[0] *= drob[0];
		Temp.drob[1] *= drob[1];
		int nok = gcd(Temp.drob[0], Temp.drob[1]);
		Temp.drob[0] /= nok;
		Temp.drob[1] /= nok;
	}
	else
	{
		Temp.drob[0] = 1;
		Temp.drob[1] = 1;
	}
	return Temp;
}

Rational Rational::operator/(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[0] != 0)
	{
		int buf;
		buf = drob[0] * Temp.drob[1];
		Temp.drob[1] = drob[1] * Temp.drob[0];
		Temp.drob[0] = buf;
		int nok = gcd(Temp.drob[0], Temp.drob[1]);
		Temp.drob[0] /= nok;
		Temp.drob[1] /= nok;
	}
	else
	{
		Temp.drob[0] = 1;
		Temp.drob[1] = 1;
	}
	return Temp;
}

bool Rational::operator>(Rational drob2)
{
	if (ratio() > drob2.ratio())
		return true;
	else return false;
}

bool Rational::operator<(Rational drob2)
{
	if (ratio() < drob2.ratio())
		return true;
	else return false;
}

bool Rational::operator==(Rational drob2)
{
	if (ratio() == drob2.ratio())
		return true;
	else return false;
}

bool Rational::operator>=(Rational drob2)
{
	if (ratio() >= drob2.ratio())
		return true;
	else return false;
}

bool Rational::operator<=(Rational drob2)
{
	if (ratio() <= drob2.ratio())
		return true;
	else return false;
}

bool Rational::operator!=(Rational drob2)
{
	if (ratio() != drob2.ratio())
		return true;
	else return false;
}
