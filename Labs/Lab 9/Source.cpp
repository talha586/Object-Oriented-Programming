#include<iostream>
#include"person.h"
#include"faculty.h"
#include"grad.h"
#include"student.h"
#include"undergrad.h"

int main()
{
	person p("talha", "afzal", 19);
	p.print();
	cout << "\n---------------------\n";
	student s("talha", "afzal", 19,3.2);
	s.print();
	cout << "\n----------------------\n";
	undergrad u("talha", "afzal", 19, 3.2,"appdev");
	u.print();
	cout << "\n----------------------\n";
	grad g("talha", "afzal", 19, 3.2, "ai bot");
	g.print();
	cout << "\n----------------------\n";
	faculty f("talha", "afzal", 19, 3, 234);
	f.print();
	cout << "\n----------------------\n";
	cout<<"name:"<<f.getfname();
	cout << "\n----------------------\n";
}