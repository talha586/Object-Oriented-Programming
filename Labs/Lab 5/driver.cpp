#include "complexnumber.h"

int main()
{
	complexnumber c1(0,0), c2(0,0);
	c1.input();
	c1.output();
	float mag;
	mag = c1.magnitude();

	complexnumber *cptr; //for implicit calling
	cptr = new complexnumber(3,5);
	cptr->output();
	delete cptr;

	complexnumber arr[5];
	for (int i=0;i<5;i++)
	{
		cout << "Enter complex number";
		arr[i].input();
		cout << "the value of this complex number is:" << arr[i].magnitude();
	}
	
	int size;
	do
	{
		cout << "Enter the size of array";
		cin >> size;
	} while (size<0);

	complexnumber* arr2 = new complexnumber[size];

	for (int i=0;i<size;i++)
	{
		cout << "Enter number:";
		arr2[i].input();
	}

	for (int i=0;i<size;i++)
	{
		arr2[i].output();
		cout << endl;
		cout << "The value of this is:" << arr2[i].magnitude();
	}

	c2.input();
	
	cout << "For copy:"<<endl;

	complexnumber c3 = c2;

	cout << endl;

	complexnumber c4;
	cout << "For assignment operator:";
	c4 = c2;
	delete  [] arr2;
}
