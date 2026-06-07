#include "data.h"
int main()
{
	date d1;
	d1.print();

	date d2(0,0,0);
	d2.input();
	d2.print();
	
	date d3;
	d3.input();
	d3.print();
	int result;
	result=d2.compare(d3);

	if (result==1)
	{
		cout << "The first date is greater";
	}
	else if(result==-1)
	{
		cout << "the second date is greater";
	}
	else
	{
		cout << "Both are equal";
	}
	
	date d4=d2.incrementmonth();
	
	cout << "New date:";
	d4.print();
}