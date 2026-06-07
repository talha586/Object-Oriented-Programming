//QUESTION 2
//#include<iostream>
//using namespace std;
//int* findMax(int* arr, int& size)
//{
//	int max = *arr,posi=0;
//	for (int i=0;i<size;i++)
//	{
//		if (*(arr+i)>max)
//		{
//			max = *(arr+i);
//			posi = i;
//		}
//	}
//	return (arr+posi);
//}
//int main()
//{
//	int size,maxvalue;
//	int arr[100];
//	do
//	{
//		cout << "Enter the size of array:";
//		cin >> size;
//	} while (size<=0);
//
//	for (int i=0;i<size;i++)
//	{
//		cout << "Enter numbers:";
//		cin >> *(arr+i);
//	}
//	maxvalue= *findMax(arr, size);
//	cout << "The maximum value:"<<maxvalue;
//}

//QUESTION 3

//#include<iostream>
//using namespace std;
//void swapHalves(int*arr,int&size)
//{
//	int x = (size/2)-1, y = size - 1;
//
//	while (x>=0 && y>=size/2)
//	{
//		int temp;
//		temp = *(arr + x);
//		*(arr + x) = *(arr + y);
//		*(arr + y) = temp;
//		x--;
//		y--;
//	}
//	for (int i=0;i<size;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void cumulativeSum(int* arr, int& size, int* result)
//{
//	int j = 0;
//	int sum = 0;
//	for (int i=0;i<size;i++)
//	{
//	sum =sum+ *(arr + i);
//	*(result + j) = sum;
//	j++;
//	}
//	for (int i=0;i<size;i++)
//	{
//		cout << *(result + i) << " ";
//	}
//}
//
//int main()
//{
//	int arr[100], size;
//	int result[100];
//	do
//	{
//		cout << "Enter the size of array:";
//		cin >> size;
//	} while (size<=0);
//
//	for (int i=0;i<size;i++)
//	{
//		cout << "Enter number:";
//		cin >> *(arr+i);
//	}
//
//	swapHalves(arr,size);
//	cumulativeSum(arr, size, result);
//}

//QUESTION 5

//#include<iostream>
//using namespace std;
//int findfirst(char *arr1,char* arr2,int& len1,int& len2)
//{
//	int x = 0, y = 0;
//	int a, b;
//	while (x<len1 && y<len2)
//	{
//		if (*(arr1+x)!=*(arr2+y))
//		{
//			a = static_cast<int>(*(arr1 + x));
//			b = static_cast<int>(*(arr2 + y));
//			if (a<b)
//			{
//				cout << "The smallest string according to dictionary is:";
//				cout << arr1;
//			}
//			else
//			{
//				cout << "The smallest string according to dictionary is:";
//				cout << arr2;
//			}
//			return 0;
//		}
//		x++;
//		y++;
//
//		if (x==len1-1 || y==len2-1)
//		{
//			if (len1<len2)
//			{
//				cout << "The smallest string according to dictionary is:";
//				cout << arr1;
//				return 0;
//			}
//			else
//			{
//				cout << "The smallest string according to dictionary is:";
//				cout << arr2;
//				return 0;
//			}
//		}
//	}
//}
//int main()
//{
//	char arr1[100], arr2[100];
//
//
//	cout << "Enter the first name:";
//	cin.getline(arr1,100);
//	cout << "Enter the second array:";
//	cin.getline(arr2,100);
//
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//
//	findfirst(arr1, arr2, len1, len2);
//}

//QUESTION 4
// #include<iostream>
// using namespace std;
//void find(int* arr, int size)
//{
//	bool found = false;
//	for (int* x = arr; x < arr + size - 2; x++) 
//	{ 
//		for (int* y = x + 1; y < arr + size - 1; y++) 
//		{
//			for (int* z = y + 1; z < arr + size; z++) 
//			{
//				if (*x + *y + *z == 0) 
//				{
//					cout << "[" << *x << "," << *y << "," << *z << "]" << endl; 
//	                found = true;
//				}
//			} 
//		}
//	} 
//	if (!found)
//	{
//		cout << "[]" << endl;
//	}
//}
//int main()
//
//{
//	int arr[100];
//	int size;
//	do
//	{
//		cout << "Enter the size of the array: ";
//		cin >> size;
//	} while (size<=0);
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter Number: ";
//		cin >> *(arr + i);
//	}
//
//	find(arr, size);
//}