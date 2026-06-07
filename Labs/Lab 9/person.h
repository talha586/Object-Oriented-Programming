#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
private:
	string f_name;
	string l_name;
protected:
	int age;
public:
	person(string , string , int );
	~person();
	void print();
	string getfname();
	string getlname();
	void setfname();
	void setlname();
	void setage();
	int getage();
};