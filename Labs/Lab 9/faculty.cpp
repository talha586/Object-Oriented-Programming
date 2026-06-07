#include"faculty.h"
using namespace std;
faculty::faculty(string f,string l,int a,int c,int e):person(f,l,a)
{
	ext = e;
	courses = c;
	cout << "faculty() called" << endl;
}

faculty::~faculty()
{
	cout << "~faculty() called" << endl;
}
void faculty::print()
{
	person::print();
	cout << "extension number:" << ext<<endl;
	cout << "courses count:" << courses << endl;
}