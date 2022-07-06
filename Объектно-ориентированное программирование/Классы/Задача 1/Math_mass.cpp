#include "math_mass.h"

math_mass::math_mass()
{
	mass = new int[1];
	len = 1;
}

math_mass::math_mass(const int *a, int len)
{
	this->len = len;
	mass = new int[len];
	for (int i = 0; i < len; i++)
		mass[i] = a[i];
}

math_mass::math_mass(const math_mass & a)
{
	len = a.len;
	mass = new int[len];
	for (int i = 0; i < len; i++)
		mass[i] = a.mass[i];
}

void math_mass::cpy_mass(const int *a, int len)
{
	delete[] mass;
	int *buf = new int[len];
	for (int i = 0; i < len; i++)
		buf[i] = a[i];
	mass = buf;
	this->len = len;
}

void math_mass::paste_mass(int *a, int len, int inp_len)
{
	for (int i = 0; i < len && i < this->len && i < inp_len; i++)
		a[i] = mass[i];
}

void math_mass::input_mass(int len) {
	delete[] mass;
	this->len = len;
	int *buf = new int[len];
	for (int i = 0; i < len; i++) {
		cout << "Элемент[" << i << "] = ";
		cin >> buf[i];
	}
	mass = buf;
}

void math_mass::display_mass() {
	for (int i = 0; i < len; i++)
		cout << "math_mass[" << i << "] = " << mass[i] << endl;
}

void math_mass::appiend(int sim)
{
	len += 1;
	int *buf = new int[len];
	for (int i = 0; i < len - 1; i++)
		buf[i] = mass[i];
	buf[len - 1] = sim;
	cpy_mass(buf, len);
}

void math_mass::erase(int pos, int l)
{
	if (pos + l >= len)
		l = len - pos;
	int *buf = new int[len - l];
	int i = 0;
	for (; i < pos; i++)
		buf[i] = mass[i];
	for (int j = pos + l; j < len; j++, i++)
		buf[i] = mass[j];
	len -= l;
	cpy_mass(buf, len);
}

int math_mass::mul_mass() {
	int res = 1;
	for (int i = 0; i < len; i++)
		res *= mass[i];
	return res;
}

int math_mass::size_mass() {
	return len;
}

math_mass::~math_mass()
{
		delete[] mass;
}
