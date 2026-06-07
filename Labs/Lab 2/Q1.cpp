//PROBLEM 1
//#include<iostream>
//using namespace std;
//int* AllocateArray(int&size)
//{
//	do
//	{
//		cout << "Enter the size of array:";
//		cin >> size;
//	} while (size<=0);
//	int* arr = new int[size];
//	return arr;
//}
//
//void outputarray(int*&arr,int&size)
//{
//	for (int i=0;i<size;i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//}
//
//void doublethearray(int*&arr,int&size)
//{
//	int nsize= 2 * size;
//	int* narr = new int[nsize];
//	for (int i=0;i<size;i++)
//	{
//		*(narr + i) = *(arr + i);
//	}
//	delete [] arr;
//	arr = narr;
//	size = nsize;
//}
//
//int* compressarray(int*& arr, int& size)
//{
//    int ori_size = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (arr[i] != -1)
//        {
//            ori_size++;
//        }
//    }
//    int* fir_arr = new int[ori_size]; 
//    int j = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (arr[i] != -1)
//        {
//            fir_arr[j++] = arr[i];
//        }
//    }
//    delete[] arr; 
//    arr = fir_arr; 
//    size = ori_size; 
//    return arr;
//}
//void input(int*&arr, int&size)
//{
//    int x;
//    int counter = 0;
//    while (true)
//    {
//        cout << "Enter the term:";
//        cin >> x;
//        if (x == -1)
//        {
//            break;
//        }
//        else if (counter == size)
//        {
//            doublethearray(arr, size);
//        }
//    }
//    if (counter<size)
//    {
//        arr = compressarray(arr,size);
//    }
//}
//int* removeoccuerence(int*& arr, int& size)
//{
//    if (size == 0) return arr;
//
//    int* n_arr = new int[size];
//    int n_size = 0;
//    n_arr[n_size++] = arr[0]; 
//
//    for (int i = 1; i < size; i++) 
//    {
//        if (arr[i] != arr[i - 1])
//        {
//            n_arr[n_size++] = arr[i]; 
//        }
//    }
//
//    delete[] arr; 
//    arr = n_arr; 
//    size = n_size; 
//    return arr;
//}
//int main()
//{
//    int size;
//    int* arr = AllocateArray(size);
//    input(arr, size);
//    cout << "Typed array: "<<endl;
//    outputarray(arr, size);
//
//    arr = removeoccuerence(arr, size);
//    cout << "Array after removing consecutive duplicates: "<<endl;
//    outputarray(arr, size); 
//
//    delete[] arr; 
//    return 0;
//}


//PROBLEM 2
//#include <iostream>
//using namespace std;
//void ReadName(char*& name) 
//{
//    char buffer[100];
//    cout << "Enter a name:";
//    cin.getline(buffer, 100);
//    int length = strlen(buffer);
//    name = new char[length + 1];
//    for (int i = 0; i < length; i++) 
//    {
//        *(name + i) = *(buffer+i);
//    }
//    *(name+length) = '\0'; 
//}
//char* FindAndReplaceString(char* str, const char* toFind, const char* toReplace) 
//{
//    int length = strlen(str);
//    int find_len = strlen(toFind);
//    int rep_len = strlen(toReplace);
//
//    int count = 0;
//    for (int i = 0; i <= length - find_len; i++) 
//    {
//        bool flag = true;
//        for (int j = 0; j < find_len; j++) 
//        {
//            if (*(str+i + j) != *(toFind+j)) 
//            {
//                flag = false;
//                break;
//            }
//        }
//        if (flag) 
//        {
//            count++;
//            i += find_len - 1;
//        }
//    }
//    int newLength = length + count * (rep_len - find_len);
//    char* newStr = new char[newLength + 1];
//
//    int i = 0, j = 0;
//    while (i < length) 
//    {
//        bool match = true;
//        for (int k = 0; k < find_len; k++) 
//        {
//            if (*(str+i + k) != *(toFind+k)) 
//            {
//                match = false;
//                break;
//            }
//        }
//        if (match) 
//        {
//            for (int k = 0; k < rep_len; k++) 
//            {
//                *(newStr+j++) = *(toReplace+k);
//            }
//            i += find_len;
//        }
//        else 
//        {
//            *(newStr+j++) = *(str+i++);
//        }
//    }
//    *(newStr+j) = '\0';
//    return newStr;
//}
//int main() 
//{
//    char* name = nullptr;
//    ReadName(name);
//    char toFind[100], toReplace[100];
//    cout << "Substring to find:";
//    cin.getline(toFind, 100);
//    cout << "Substring to replace with:";
//    cin.getline(toReplace, 100);
//    char* newName = FindAndReplaceString(name, toFind, toReplace);
//    cout << "New Name: " << newName << endl;
//    delete [] name;
//    delete [] newName;
//}