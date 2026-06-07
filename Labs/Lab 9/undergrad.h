#include"student.h"
using namespace std;
class undergrad : public student
{
private:
	string fyp;
public:
	undergrad(string,string,int,float,string);
	~undergrad();
	void print();
};