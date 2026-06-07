#include"student.h"
using namespace std;
student::student(string f,string l,int a,float c):person(f,l,a)
{
	cgpa = c;
	cout << "student() called" << endl;
}
student::~student()
{
	cout << "~student() called" << endl;
}
void student::print()
{
	person::print();
	cout << "CGPA:" << cgpa << endl;
}