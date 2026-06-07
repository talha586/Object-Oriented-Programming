#include"student.h"
using namespace std;
class grad:public student
{
private:
	string thesis;
public:
	grad(string ,string ,int , float ,string );
	void print();
	~grad();
};