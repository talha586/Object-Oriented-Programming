//#include<iostream>
//using namespace std;
//template<class T>
//class Pair
//{
//private:
//	T* arr;
//	int size;
//public:
//	Pair(T i,T j)
//	{
//		size = 2;
//		arr = new T[size];
//		arr[0] = i;
//		arr[1] = j;
//	}
//
//	T GetMax()
//	{
//		if (arr[0] > arr[1])
//		{
//			return arr[0];
//		}
//
//		else
//		{
//			return arr[1];
//		}
//	}
//
//	T GetMin();
//
//	~Pair()
//	{
//		delete[] arr;
//	}
//};
//template<typename T>
//T Pair<T> :: GetMin()
//{
//	if (arr[0] < arr[1])
//	{
//		return arr[0];
//	}
//
//	else
//	{
//		return arr[1];
//	}
//}
//int main()
//{
//	Pair <double> myobject(1.012, 1.01234);
//	cout << "The max value:"<<myobject.GetMax() << endl;
//	cout <<"The min value:"<< myobject.GetMin() << endl;
//	return 0;
//}