class COne
{
private:
	long l;
	string s;
public:
	COne();
	COne(long, string);
	COne(const COne &);
	int getL();
	string getS();
	void inpL(long);
	void inpS(string);
	void display();
	COne operator=(COne);
	~COne();
};
