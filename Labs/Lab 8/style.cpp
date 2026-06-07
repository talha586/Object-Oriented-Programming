//#include"style.h"
//
//void style::setcolor()
//{
//	cout << "Enter the color:";
//	cin >> color;
//}
//
//void style::setfilled()
//{
//	do
//	{
//		cout << "Enter the boolean value(0/1):";
//		cin >> isfill;
//		if (isfill < 0 || isfill>1)
//		{
//			cout << "Entered the wrong value:" << endl;
//		}
//	} while (isfill < 0 || isfill>1);
//}
//style::style()
//{
//	isfill = 0;
//}
//
//style::style(string col,bool f)
//{
//	isfill = f;
//	color = col;
//}
//
//style::~style()
//{
//	cout << "~style() called" << endl;
//}
//
//void style::print()
//{
//	cout << "Color:" << color << endl;
//	cout << "color is filled:" << isfill << endl;
//}