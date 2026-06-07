#include"grad.h"
using namespace std;
grad::grad(string f, string l, int a, float c, string t) :student(f, l,a,c)
{
	thesis = t;
	cout << "grad() called" << endl;
}
grad::~grad()
{
	cout << "~grad() called" << endl;
}
void grad::print()
{
	student::print();
	cout << "thesis:" << thesis<<endl;
}
