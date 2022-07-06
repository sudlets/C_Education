class Rational
{
private:
	int drob[2];
public:
	Rational();
	Rational(int, int);
	Rational(Rational &);
	int getChisl();
	int getZnam();
	int gcd(int, int);
	void raz(int*, int*);
	void display();
	void input_Chisl(int);
	void input_Znam(int);
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
