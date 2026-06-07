//#include<iostream>
//using namespace std;
//template<class T>
//class Container
//{
//private:
//	T data;
//public:
//	Container(T d)
//	{
//		data = d;
//	}
//
//	T increase();
//};
//template<class T>
// T Container<T> :: increase()
//{
//	return ++data;
//}
//template<>
//class Container<char>
//{
//private:
//	char data;
//public:
//	Container(char a)
//	{
//		data = a;
//	}
//
//	char uppercase();
//};
//char Container<char> :: uppercase()
//{
//	return (data - 32);
//}
//
//int main()
//{
//	Container<int> myint(7);
//	Container<char> mychar('j');
//	cout << "Increase in number:"<<myint.increase() << endl;
//	cout << "Capital Letter:" <<mychar.uppercase() << endl;
//	return 0;
//}