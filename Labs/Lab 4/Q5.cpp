//#include<iostream>
//using namespace std;
//class bankaccount
//{
//private:
//	char name[100];
//	int number;
//	double balance,deposit,withdraw,current_balance;
//	char depositamount, withdrawamount;
//public:
//	void data()
//	{
//		cout << "Enter the name of account holder:";
//		cin.getline(name, 100);
//		cout << "Enter account number:";
//		cin >> number;
//		cout << "Enter initial balance:";
//		cin >> balance;
//		current_balance = balance;
//	}
//	void deposit_()
//	{
//		cout << "Do you want to deposit amount?(y for yes/n for no)";
//		cin >> depositamount;
//		if (depositamount=='y')
//		{
//			do
//			{
//				cout << "Enter deposit amount:" << endl;
//				cin >> deposit;
//				current_balance =balance+ deposit;
//			} while (deposit<0);
//		}
//		else
//		{
//			cout << "Deposit not required"<<endl;
//		}
//	}
//	void withdraw_()
//	{
//		cout << "Do you want to withdraw amount(y for yes/n for no)?";
//		cin >> withdrawamount;
//		if (withdrawamount == 'y')
//		{
//			do
//			{
//				cout << "Enter withdraw amount:" << endl;
//				cin >> withdraw;
//			} while (withdraw < 0);
//			current_balance = current_balance - withdraw;
//			while (current_balance<0)
//			{
//				cout << "Balance insufficient";
//				do
//				{
//					cout << "Enter amount again:"; 
//					cin >> withdraw;
//				} while (withdraw<0);
//				current_balance = balance - withdraw;
//			}
//		}
//		else
//		{
//			cout << "withdraw not required" << endl;
//		}
//	}
//	void display()
//	{
//		cout << "Name:" << name<<endl;
//		cout << "Number:" << number<<endl;
//		cout << "Initial balance:" << balance<<endl;
//		cout << "Current balance:" << current_balance;
//	}
//};
//
//int main()
//{
//
//	bankaccount b1;
//	b1.data();
//	b1.deposit_();
//	b1.withdraw_();
//	b1.display();
//}