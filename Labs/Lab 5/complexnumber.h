#include<iostream>
#include<cmath>
using namespace std;

class complexnumber
{
private:
	int* real, * imaginary;
public:
	complexnumber(int , int);
	complexnumber();
	void input();
	void output();
	float magnitude();
	complexnumber(complexnumber&c);
	void ope(complexnumber&c);
	~complexnumber();
};