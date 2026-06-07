#include<iostream>
#include"compactdisc.h"
using namespace std;

class CDDrive
{
private:
	string manufacturer;
	int speed;
	compactdisc* acompacdisc;
public:
	CDDrive();
	void insertcd(compactdisc& c);
	void play();
	compactdisc* ejectmethod();
	~CDDrive();
};