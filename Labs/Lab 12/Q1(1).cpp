#include<iostream>
#include<cstring>
using namespace std;
class ArtPiece
{
protected:
	string name;
	int price;
public:
	ArtPiece()
	{
		price = 0;
		name = "aaa";
	}

	virtual void displayinfo()=0;
	virtual int calculatevalue() = 0;

	virtual ~ArtPiece()
	{}

};
class Painting: public ArtPiece
{
private:
	int dim_x;
	int dim_y;
public:
	Painting(string n,int p,int x,int y)
	{
		this->name = n;
		this->price = p;
		this->dim_x = x;
		this->dim_y = y;
	}

	virtual int calculatevalue()
	{
		return this->price;
	}

	virtual void displayinfo()
	{
		cout << "Name:" << name << endl;
		cout << "Price:" << price << endl;
		cout << "Value:" << calculatevalue() << endl;
		cout << "Dimension:" << dim_x << "x" << dim_y << endl;
	}


};
class Sculpture : public ArtPiece
{
private:
	float weight;
public:
	Sculpture(string n,int p,float w)
	{
		this->name = n;
		this->price = p;
		this->weight = w;
	}

	virtual int calculatevalue()
	{
		return this->price;
	}

	virtual void displayinfo()
	{
		cout << "Name:" << name << endl;
		cout << "Price:" << price << endl;
		cout << "Value:" << calculatevalue() << endl;
		cout << "Weight:" << weight << endl;
	}

};
int main()
{
	int size=3;
	ArtPiece* arr[3];
	arr[0] = new Painting("Stary Night",2000,36,24);
	arr[1] = new Sculpture("David", 15000,500);
	arr[2] = new Painting("Mona Lisa",10000,30,20);

	for (int i=0;i<size;i++)
	{
		arr[i]->displayinfo();
		cout << endl;
	}

	delete[] arr;
}