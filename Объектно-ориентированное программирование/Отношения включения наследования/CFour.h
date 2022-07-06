class CFour : 
	public CThree
{
private:
	int cent;
public:
	int getCent(void);
	void inpCent(int);
	virtual void display(void);
	CFour();
	CFour(const CThree&, int);
	CFour(const CFour&);
	~CFour();
};
