#include "complexnumber.h"

complexnumber::complexnumber()
{
	*real = 0;
	*imaginary = 0;
}
complexnumber::complexnumber(int,int)
{
	*real = 0;
	*imaginary = 0;
}
void complexnumber::input()
{
	cout << "Enter the real value:";
	cin >> *real;
	cout << "Enter the imaginary value:";
	cin >> *imaginary;
}
void complexnumber::output()
{
	cout << *real << "+" << *imaginary<<"i";

}
float complexnumber::magnitude()
{
	float mag;
	mag = sqrt(pow(*real,2)+pow(*imaginary,2));
	return mag;
}
complexnumber::complexnumber(complexnumber&c)
{
	real = c.real;
	imaginary = c.imaginary;
}

void complexnumber :: ope(complexnumber&c)
{
	if (this!=&c)
	{
		delete real;
		delete imaginary;
		real = c.real;
		imaginary = c.imaginary;
	}
}
complexnumber::~complexnumber()
{
	cout << "Destructor called";
	cout << *real << "+" << *imaginary << "i";
	delete real;
	delete imaginary;
}
