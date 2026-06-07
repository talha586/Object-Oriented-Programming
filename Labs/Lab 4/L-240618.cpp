////PROBLEM 3
//#include<iostream>
//using namespace std;
//class book
//{
//private:
//	char title[100], author[100];
//	bool isavailable;
//	int ISBN;
//	char bookborrow,result;
//public:
//	void setbookdetails()
//	{
//		cout << "Enter the name of book:";
//		cin.getline(title,100);
//		cout << "Enter the name of author:";
//		cin.getline(author,100);
//		cout << "Enter the ISBN number:";
//		cin >> ISBN;
//		cout << "Enter the book is available or not(0/1)?";
//		cin >> isavailable;
//	}
//	void DisplayBookDetails()
//	{
//		cout << "Title: " << title<<endl;
//		cout << "Name: " << author<<endl;
//		cout << "ISBN Number:" << ISBN<<endl;
//	}
//	void borrow()
//	{
//		if (isavailable == 1)
//		{
//			cout << "Do you want to borrow this book(y for yes OR n for no)?";
//			cin >> bookborrow;
//			if (bookborrow==1)
//			{
//				cout << "Borrow book succesfully";
//				isavailable = 0;
//			}
//			else
//			{
//				isavailable = 1;
//			}
//			
//		}
//		else 
//		{
//			cout << "Book is not available"<<endl;
//		}
//	}
//	void ReturnBook()
//	{
//		if (isavailable == 0)
//		{
//			cout << "Do you want to return this book successfully(y for yes/n for no)?";
//			cin >> result;
//
//			if (result==1)
//			{
//				cout << "The book is returned" << endl;
//				isavailable = 1;
//			}
//			else
//			{
//				cout << "the book is not returned"<<endl;
//			}
//		}
//	}
//};
//
//int main()
//{
//	book b1;
//	b1.setbookdetails();
//	b1.borrow();
//	b1.ReturnBook();
//	b1.DisplayBookDetails();
//}