//#include<iostream>
//using namespace std;
//class product
//{
//private:
//	char name[100];
//	int id,quantity, buy_pro,diff;
//	double price;
//public:
//	void data()
//	{
//		cout << "Enter the name of product:";
//		cin.getline(name,100);
//		do
//		{
//			cout << "enter the id:";
//			cin >> id;
//		} while (id<0);
//		do
//		{
//			cout << "Enter the price:";
//			cin >> price;
//		} while (price<0);
//		do
//		{
//			cout << "Enter the amount of products:"; cin >> quantity;
//
//		} while (quantity<0);
//	}
//	void buy()
//	{
//		do
//		{
//			cout << "Enter the amount of product to buy:";
//			cin >> buy_pro;
//		} while (buy_pro<0);
//		 diff = quantity - buy_pro;
//		while (diff<0)
//		{
//			cout << "Enter proper amount:"<<endl;
//			do
//			{
//				cout << "Enter the amount of product to buy:";
//				cin >> buy_pro;
//			} while (buy_pro < 0);
//			diff = quantity - buy_pro;
//		}
//	}
//	void display()
//	{
//		cout << "Name:" << name<<endl;
//		cout << "ID:" << id<<endl;
//		cout << "Price:" << price << endl;
//		cout << "Available quantity:" << quantity << endl;
//		cout << "Remaining quantity:" << diff;
//	}
//};
//
//int main()
//{
//	product p1;
//	p1.data();
//	p1.buy();
//	p1.display();
//}