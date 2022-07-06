template <typename T>
class Rational
{
private:
	T drob[2];
public:
	Rational();
	Rational(T, T);
	Rational(Rational &);
	T getChisl();
	T getZnam();
	T gcd(T, T);
	void raz(T*, T*);
	void display();
	void input_Chisl(T);
	void input_Znam(T);
	void sum(const Rational);
	void sub(const Rational);
	void mul(const Rational);
	void div(const Rational);
	double ratio();
	Rational operator+(Rational);
	Rational operator-(Rational);
	Rational operator*(Rational);
	Rational operator/(Rational);
	bool operator>(Rational);
	bool operator<(Rational);
	bool operator==(Rational);
	bool operator!=(Rational);
	bool operator>=(Rational);
	bool operator<=(Rational);
	~Rational();
};

template <typename T>
Rational<T>::Rational()
{
	drob[0] = 1;
	drob[1] = 1;
}

template <typename T>
Rational<T>::Rational(T a, T b)
{
	drob[0] = a;
	drob[1] = b;
}

template <typename T>
Rational<T>::Rational(Rational & ch)
{
	drob[0] = ch.drob[0];
	drob[1] = ch.drob[1];
}

template <typename T>
Rational<T>::~Rational()
{
}

template <typename T>
T Rational<T>::gcd(T a, T b)
{

	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else b = b % a;
	}
	return a + b;

}


template <typename T>
T Rational<T>::getChisl(void)
{
	return drob[0];
}

template <typename T>
T Rational<T>::getZnam(void)
{
	return drob[1];
}

template <typename T>
void Rational<T>::raz(T *a, T *b)
{
	T nok = gcd(a[1], b[1]);
	T buf1, buf2;
	buf1 = a[1] / nok;
	buf2 = b[1] / nok;
	a[0] *= buf2;
	a[1] *= buf2;
	b[0] *= buf1;
	b[1] *= buf1;
}

template <typename T>
void Rational<T>::display(void)
{
	cout << drob[0] << endl << "-\n" << drob[1] << endl;
}

template <typename T>
void Rational<T>::input_Chisl(T a)
{
	drob[0] = a;
}

template <typename T>
void Rational<T>::input_Znam(T b)
{
	drob[1] = b;
}

template <typename T>
void Rational<T>::sum(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		T buf[2];
		buf[0] = drob2.drob[0];
		buf[1] = drob2.drob[1];
		raz(drob, buf);
		drob[0] += buf[0];
		T nok = gcd(drob[0], drob[1]);
				drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

template <typename T>
void Rational<T>::sub(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		T buf[2];
		buf[0] = drob2.drob[0];
		buf[1] = drob2.drob[1];
		raz(drob, buf);
		drob[0] -= buf[0];
		T nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

template <typename T>
void Rational<T>::mul(const Rational drob2)
{
	if (drob[1] != 0 && drob2.drob[1] != 0)
	{
		drob[0] *= drob2.drob[0];
		drob[1] *= drob2.drob[1];
		T nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

template <typename T>
void Rational<T>::div(const Rational drob2)
{
		if (drob[1] != 0 && drob2.drob[0] != 0)
	{
		drob[0] *= drob2.drob[1];
		drob[1] *= drob2.drob[0];
		T nok = gcd(drob[0], drob[1]);
		drob[0] /= nok;
		drob[1] /= nok;
	}
	else
	{
		drob[0] = 1;
		drob[1] = 1;
	}
}

template <typename T>
double Rational<T>::ratio()
{
	if (drob[1] != 0)
		return drob[0] / (double)drob[1];
	else
		return 0;
}

template <typename T>
Rational<T> Rational<T>::operator+(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
	{
		T buf[2];
		buf[0] = drob[0];
		buf[1] = drob[1];
		raz(Temp.drob, buf);
		Temp.drob[0] += buf[0];
		T nok = gcd(Temp.drob[0], Temp.drob[1]);
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

template <typename T>
Rational<T> Rational<T>::operator-(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
			{
		T buf[2];
		buf[0] = drob[0];
		buf[1] = drob[1];
		raz(Temp.drob, buf);
		Temp.drob[0] = buf[0] - Temp.drob[0];
		T nok = gcd(Temp.drob[0], Temp.drob[1]);
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

template <typename T>
Rational<T> Rational<T>::operator*(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[1] != 0)
	{
		Temp.drob[0] *= drob[0];
		Temp.drob[1] *= drob[1];
		T nok = gcd(Temp.drob[0], Temp.drob[1]);
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

template <typename T>
Rational<T> Rational<T>::operator/(Rational drob2)
{
	Rational Temp = drob2;
	if (drob[1] != 0 && Temp.drob[0] != 0)
	{
		T buf;
		buf = drob[0] * Temp.drob[1];
		Temp.drob[1] = drob[1] * Temp.drob[0];
		Temp.drob[0] = buf;
		T nok = gcd(Temp.drob[0], Temp.drob[1]);
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

template <typename T>
bool Rational<T>::operator>(Rational drob2)
{
	if (ratio() > drob2.ratio())
		return true;
	else return false;
}

template <typename T>
bool Rational<T>::operator<(Rational drob2)
{
	if (ratio() < drob2.ratio())
		return true;
	else return false;
}

template <typename T>
bool Rational<T>::operator==(Rational drob2)
{
	if (ratio() == drob2.ratio())
		return true;
	else return false;
}

template <typename T>
bool Rational<T>::operator>=(Rational drob2)
{
	if (ratio() >= drob2.ratio())
		return true;
	else return false;
}

template <typename T>
bool Rational<T>::operator<=(Rational drob2)
{
	if (ratio() <= drob2.ratio())
		return true;
	else return false;
}

template <typename T>
bool Rational<T>::operator!=(Rational drob2)
{
	if (ratio() != drob2.ratio())
				return true;
	else return false;
}
