#include<iostream>
#include"cddrive.h"
#include"compactdisc.h"
using namespace std;
CDDrive::CDDrive()
{
	cout << "Enter the manufacturer:";
	cin >> manufacturer;
	cout << "Enter the speed:";
	cin >> speed;
	acompacdisc = nullptr;
	cout << "CDDrive() called" << endl;
}

void CDDrive:: insertcd(compactdisc& c)
{
	acompacdisc = &c;
}

void CDDrive::play()
{
	if (acompacdisc == nullptr)
	{
		cout << "No CD was present" << endl;
		return;
	}
	else
	{
		cout << "The title of disc:";
		cout << acompacdisc->grttitle();
		cout << endl;
		cout << "The capacity of disc:";
		cout << acompacdisc->getcapacity();
		cout << endl;
		return;
	}
}

compactdisc* CDDrive:: ejectmethod()
{
	if (acompacdisc != nullptr)
	{
		compactdisc* temp;
		temp = acompacdisc;
		acompacdisc = nullptr;
		return temp;
	}
	else
	{
		return acompacdisc;
	}
}

CDDrive::~CDDrive()
{
	cout << "~CDDrive () called" << endl;
}