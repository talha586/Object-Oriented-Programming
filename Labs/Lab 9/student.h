#pragma once
#include"person.h"
class student : public person
{
private:
	float cgpa;
public:
	student(string ,string ,int ,float );
	~student();
	void print();
};