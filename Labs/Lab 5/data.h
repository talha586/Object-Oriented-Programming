#pragma once
#include<iostream>
using namespace std;
class date
{
private: 
	int day;
	int month;
	int year;
public:
	date();
	date(int d, int m, int y);
	void print();
	void input();
	int compare(date);
	date incrementmonth();
};