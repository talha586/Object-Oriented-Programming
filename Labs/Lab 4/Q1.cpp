//#include<iostream>
//#include<memory>
//using namespace std;
//int main()
//{
//	int s1, s2;
//	do {
//		cout << "Enter the size of first array: ";
//		cin >> s1;
//	} while (s1 <= 0);
//	unique_ptr <int[]> arr1(new int[s1]);
//
//	for (int i = 0; i < s1; i++)
//	{
//		cout << "Enter the values of first array: ";
//		cin >> arr1[i];
//	}
//	do {
//		cout << "Enter the size of second array: ";
//		cin >> s2;
//	} while (s2 <= 0 || s2 == s1);
//	unique_ptr <int[]> arr2(new int[s2]);
//
//	for (int i = 0; i < s2; i++)
//	{
//		cout << "Enter the values of second array: ";
//		cin >> arr2[i];
//	}
//	unique_ptr <int[]> arr3(new int[s1 + s2]);
//	int x;
//	for (x = 0; x < s1; x++)
//		arr3[x] = arr1[x];
//	for (int y = 0; y < s2; x++, y++)
//		arr3[x] = arr2[y];
//
//	for (x = 0; x < s1 + s2 - 1; x++)
//	{
//		for (int z = 0; z < s1 + s2 - 1; z++)
//		{
//			if (arr3[z] > arr3[z + 1])
//			{
//				int temp = arr3[z];
//				arr3[z] = arr3[z + 1];
//				arr3[z + 1] = temp;
//			}
//		}
//	}
//	cout << "The merged and sorted array is: ";
//	for (x = 0; x < s1 + s2; x++)
//		cout << arr3[x] << " ";
//	cout << endl;
//}