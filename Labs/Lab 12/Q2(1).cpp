//#include<iostream>
//using namespace std;
//class BankAccount
//{
//protected:
//	string name;
//	double balance;
//public:
//	BankAccount()
//	{
//	}
//	virtual void withdraw(double) = 0;
//	virtual void deposit(double) = 0;
//	virtual void displayBalance()=0;
//	virtual ~BankAccount()
//	{}
//};
//class SavingsAccount:public BankAccount
//{
//private:
//	double interestrate;
//public:
//	SavingsAccount(string n,double x)
//	{
//		this->name = n;
//		interestrate = x;
//		balance = 0.0;
//	}
//	virtual void deposit(double y)
//	{
//		if (y>=0)
//		{
//			cout << "The amount eposited:" << y << endl;;
//			balance += y;
//		}
//		else
//		{
//			cout << "Enter proper amount" << endl;
//		}
//		
//	}
//	virtual void withdraw(double z)
//	{
//		if (z<0||z>balance)
//		{
//			cout << "Entered wrong amount" << endl;
//		}
//		else
//		{
//			balance -= z;
//			cout << "Amount withdrawn:" << z << endl;
//		}
//	}
//	virtual void displayBalance()
//	{
//		cout << "Name:" << name << endl;
//		cout << "The remaining balance:" << balance << endl;
//	}
//	virtual ~SavingsAccount()
//	{}
//};
//class CheckingAccount :public BankAccount
//{
//private:
//	double limit;
//public:
//	CheckingAccount(string n)
//	{
//		name = n;
//		balance = 0.0;
//	}
//	virtual void deposit(double y)
//	{
//		if (y < 0)
//		{
//			cout << "Entered wrong amount" << endl;
//		}
//		else
//		{
//			cout << "Amount depsoted:" << y<<endl;
//			balance += y;
//		}
//	}
//
//	virtual void withdraw(double z)
//	{
//		if (z<0 || z>balance)
//		{
//			cout << "Entered wrong amount" << endl;
//		}
//		else
//		{
//			balance -= z;
//			cout << "Amount withdrawn:" << z << endl;
//		}
//	}
//
//	virtual void displayBalance()
//	{
//		cout << "Name:" << name << endl;
//		cout << "The remaining balance:" << balance << endl;
//	}
//
//	virtual ~CheckingAccount()
//	{}
//};
//class FixedDepositAccount :public BankAccount
//{
//private:
//	double interestrate;
//	double principal;
//	int time;
//public:
//	FixedDepositAccount(string n,double i,double p,int t)
//	{
//		name = n;
//		interestrate = i;
//		principal = p;
//		time = t;
//	}
//	virtual void deposit(double y)
//	{
//		cout << "Cannot deposit before maturity" << endl;
//	}
//
//	virtual void withdraw(double z)
//	{
//		cout << "Cannot withdraw before matured" << endl;
//	}
//
//	virtual void displayBalance()
//	{
//		cout << "Name:" << name << endl;
//		double amount= principal + (principal * interestrate * time / 12.0);
//		cout << "The remaining balance:" << amount << endl;
//	}
//	virtual ~FixedDepositAccount()
//	{}
//};
//
//int main() {
//	// Create instances of different types of bank accounts
//	BankAccount* accounts[3];
//	accounts[0] = new SavingsAccount("SA123", 0.05);
//	accounts[1] = new CheckingAccount("CA456");
//	accounts[2] = new FixedDepositAccount("FDA789", 1000.0, 0.08, 12);
//	// Perform transactions and display balances for each account
//	for (int i = 0; i < 3; ++i) 
//	{
//		accounts[i]->deposit(1000.0);
//		accounts[i]->withdraw(500.0);
//		accounts[i]->displayBalance();
//		cout << endl;
//	}
//
//	// Clean up allocated memory
//	for (int i = 0; i < 3; ++i) 
//	{
//		delete accounts[i]; 
//	}
//	return 0;
//}