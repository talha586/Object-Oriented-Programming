#include"person.h"
person::person(string f, string l, int a)
{
	f_name = f;
	l_name = l;
	age = a;
	cout << "Person() called" << endl;
}
void person::print()
{
	cout << "first name:" << f_name << endl;
	cout << "last name:" << l_name << endl;
	cout << "Age:" << age << endl;
}
person::~person()
{
	cout << "~person() called" << endl;
}
string person::getfname()
{
	return f_name;
}
string person::getlname()
{
	return l_name;
}
int person::getage()
{
	return age;
}
void person::setage()
{
	cout << "Enter age:";
	cin >> age;
}
void person::setfname()
{
	cout << "Enter first name:";
	cin >> f_name;
}
void person::setlname()
{
	cout << "Enter last name:";
	cin >> l_name;
}