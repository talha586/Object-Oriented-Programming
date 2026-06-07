#include<iostream>
using namespace std;
class student 
{
private:
	string name;
	string rollno;
	float gpa;
public:
	student()
	{
		name = "Hello world";
		rollno = "0000000";
		gpa = 0;
	}
	student(string r,string n,float g)
	{
		name = n;
		rollno = r;
		gpa = g;
	}

	void print()
	{
		cout << "Name:" << name <<"   "<<"Roll no:" << rollno << endl;
	}
	int getgpa()
	{
		return gpa;
	}
};
class society
{
	string name;
	student* president;
	student* member[5];
	int count;
public:
	society(string socname)
	{
		name = socname;
		president = nullptr;
		for (int i=0;i<5;i++)
		{
			member[i] = nullptr;
		}
		count = 0;
	}

	void printinfo()
	{
		cout << "Name of society is:" << name<<endl;
		for (int i=0;i<5;i++)
		{
			if (member[i]==nullptr)
			{
				cout <<"Member "<<i+1<<" " << "Not availabe"<<endl;
			}
			else
			{
				cout << "Member " << i + 1 << member[i] << endl;
			}
		}
		if (president==nullptr)
		{
			cout << "President" << " " << "Not available"<<endl;
		}
		else
		{
			cout << "President" << " " << president<<endl;
		}
	}

	void appointpresident(student& st)
	{
		if (st.getgpa()<3)
		{
			cout << "Pesident cannot be appointed"<<endl;
		}
		else
		{
			president = &st;
			st.print();
			cout << " has been appointed as the president"<<endl;
		}
	}
	void addmember(student* st)
	{
		if (president==st)
		{
			cout << "Preseident cannot be the member"<<endl;
		}
		for (int i=0;i<count;i++)
		{

		}
		

	}
};


int main()
{
	student s1("12L1111", "Hashim Amla", 3.99);
	student s2("13L1121", "Virat Kohli", 3.45);
	student s3("13L1126", "Quinton de Kock", 2.98);
	student s4("14L1361", "Joe Root", 2.99);
	student s5("14L1124", "Martin Guptil", 3.09);
	student s6("15L1314", "Rohit Sharma", 3.19);
	s1.print();
	s2.print();
	s3.print();
	s4.print();
	s5.print();
	s6.print();
	
	string socname;
	cout << "Enter the name of society:";
	cin >> socname;
	society soc(socname);
	soc.printinfo();
	soc.appointpresident(s1);

}