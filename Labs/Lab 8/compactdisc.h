#pragma once
#include<iostream>
using namespace std;
class compactdisc
{
private:
	string title;
	int capacity;
public:
	compactdisc();
	~compactdisc();
	string grttitle();
	int getcapacity();
};