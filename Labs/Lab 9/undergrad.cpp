#include"undergrad.h"
using namespace std;
undergrad::undergrad(string fi,string la,int ag,float cg,string proj):student(fi,la,ag,cg)
{
	fyp = proj;
	cout << "undergrad() called" << endl;
}
undergrad ::~undergrad()
{
	cout << "~undergrad() called" << endl;
}
void undergrad::print()
{
     student::print();
     cout <<"FYP:"<< fyp << endl;
}