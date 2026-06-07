//#include<iostream>
//using namespace std;
//class employe
//{
//public:
//	void setemploye() 
//	{
//		cout << "Enter the name of employee:";
//		cin.getline(name,100);
//		do
//		{
//			cout << "Enter employe ID:";
//			cin >> employeeID;
//		} while (employeeID<0);
//		do
//		{
//			cout << "Enter basic salary:";
//			cin >> salary;
//		} while (salary<0);
//		cout << "Enter tax percentage:";
//		cin >> taxpercent;
//	}
//	int calculatesalary()
//	{
//		netsalary = salary - (salary * (taxpercent / 100));
//		return netsalary;
//	}
//	void display()
//	{
//		cout << "Name:" << name<<endl;
//		cout << "Employee ID:" << employeeID<<endl;
//		cout << "Basic salary:" << salary<<endl;
//		cout << "Tax percentage:" << taxpercent << "%" << endl;
//		cout << "Net Salary:" << netsalary;
//	}
//private:
//	char name[100];
//	int employeeID;
//	double netsalary,salary;
//	double taxpercent;
//};
//int main()
//{
//	int net;
//	employe e1;
//	e1.setemploye();
//	net=e1.calculatesalary();
//	e1.display();
//}