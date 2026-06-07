#include"person.h"
using namespace std;
class faculty:public person
{
private:
	int courses;
	int ext;
public:
	faculty(string ,string ,int, int ,int );
	void print();
	~faculty();
};