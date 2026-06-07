#include<iostream>
using namespace std;

template<class T>
class Pair
{
private:
	T* arr;
	int size;
public:
	Pair(T i,T j)
	{
		size = 2;
		arr = new T[size];
		arr[0] = i;
		arr[1] = j;
	}
	template<class U>
	friend ostream& operator<<(ostream&cout,const Pair<U>& p);
}
template <class U>
ostream& operator<<(ostream& cout, const Pair<U>& p)
{
	cout << p.arr[0] << " " << p.arr[1] << endl;
}

template <class T,int N>
class Sequence 
{
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};
template<class T,int N>
void Sequence <T,N> ::setmember(int x, T value)
{
	memblock[x] = value;
}
template<class T,int N>
T Sequence<T,N>::getmember(int x)
{
	return memblock[x];
}

template <class T>
class Pair 
{
private:
	T x, y;
public:
	Pair();
	Pair();
	~Pair();
	template <class identifier> friend ostream& operator << (ostream& out,const Pair<identifier>& p);
};

int main()
{
	Pair <double> y(2.23, 3.45);
	Sequence <Pair<double>, 5> myPairs;
	myPairs.setmember(0, y);
	cout << myPairs.getmember(0) << '\n';
	return 0;
}