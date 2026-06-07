#include<iostream>
#include"conio.h"
using namespace std;
class animal
{
private:
	char* speak;
public:

	virtual char* speaking()
	{
		speak = new char[16] {'s','p','e','a','k','(',')','c','a','l','l','e','d','\0'};
		return speak;
	}
	virtual ~animal() { cout << "~Animal() called." << endl; }
};
class dog :public animal
{
private:
	char* s;
public:
	char* speaking()
	{
		s = new char[6] {'w', 'o', 'o', 'f', '!', '\0'};
		return s;
	}
	~dog() { cout << "~Dog() called." << endl; }

};
class cat :public animal
{
private:
	char* s;
public:
	char* speaking()
	{
		s = new char[6] {'m', 'e', 'o', 'w', '!', '\0'};
		return s;
	}
	~cat() { cout << "~Cat() called." << endl; }
};
class sheep :public animal
{
private:
	char* s;
public:
	char* speaking()
	{
		s = new char[7] {'b', 'l', 'e', 'a', 't','!', '\0'};
		return s;
	}
	~sheep() { cout << "~sheep() called." << endl; }
};
class cow :public animal
{
private:
	char* s;
public:
	char* speaking()
	{
		s = new char[4] {'m', 'o', 'o',  '\0'};
		return s;
	}
	~cow() { cout << "~cow() called." << endl; }
};
class horse :public animal
{
private:
	char* s;
public:
	char* speaking()
	{
		s = new char[7] {'n', 'e', 'i', 'g', 'h', '!', '\0'};
		return s;
	}
	~horse() { cout << "~horse() called." << endl; }
};
int main() {
	const int size = 5;
	animal* myPets[size];

	int i = 0;
	while (i < size)
	{
		int n;
		cout << "Press 1 for a Dog, 2 for a Cat,3 for a sheep, 4 for a cow and 5 for a horse." << endl;
		cin >> n;
		
			if (n == 1) {
				myPets[i] = new dog;
				cout << "Dog added at position " << i << endl << endl;
				i++;
			}

			else if (n == 2) {
				myPets[i] = new cat;
				cout << "Cat added at position " << i << endl << endl;
				i++;
			}
			else if (n == 3) {
				myPets[i] = new sheep;
				cout << "Sheep added at position " << i << endl << endl;
				i++;
			}
			else if (n == 4) {
				myPets[i] = new cow;
				cout << "Cow added at position " << i << endl << endl;
				i++;
			}
			else if (n == 5) {
				myPets[i] = new horse;
				cout << "Horses added at position " << i << endl << endl;
				i++;
			}
			else
				cout << "Invalid input. Enter again." << endl << endl;
		}
	for (int i=0;i<5;i++)
	{
		cout << myPets[i]->speaking() << endl;
	}
	for (int j = 0; j < 5; j++)
	{
		delete myPets[j];
	}
}