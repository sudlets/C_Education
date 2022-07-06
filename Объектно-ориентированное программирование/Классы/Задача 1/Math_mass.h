class math_mass
{
private:
	int *mass, len;
public:
	math_mass();
	math_mass(const int*, int);
	math_mass(const math_mass &);
	void cpy_mass(const int *, int);
	void paste_mass(int *, int, int);
	void input_mass(int);
	void display_mass();
	void appiend(int);
	void erase(int, int);
	int mul_mass();
	int size_mass();
	~math_mass();
}; 
