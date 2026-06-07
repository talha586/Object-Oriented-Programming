#include<iostream>
#include"compactdisc.h"

compactdisc::compactdisc()
{
	cout << "compact disc called()" << endl;
	cout << "Enter the title:";
	cin >> title;
	cout << "Enter the capacity of CD:";
	cin >> capacity;
}

compactdisc::~compactdisc()
{
	cout << "~Compactdisc() called" << endl;
}

string compactdisc:: grttitle()
{
	return title;
}

int compactdisc::getcapacity()
{
	return capacity;
}