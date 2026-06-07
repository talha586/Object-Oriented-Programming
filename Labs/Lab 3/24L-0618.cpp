////PROBLEM 1
//#include<iostream>
//using namespace std;
//bool IsMatrixUpperTriangular(int**&arr,int&size)
//{
//	for (int i=1;i<size;i++)
//	{
//		for (int j=0;j<size;j++)
//		{
//			if (i>j)
//			{
//				if (*(*(arr+i)+j)!=0)
//				{
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//void deallocateMemory(int**&arr,int&size)
//{
//	for (int i=0;i<size;i++)
//	{
//		delete [] *(arr+i);
//	}
//	delete [] arr;
//}
//int main()
//{
//	int size;
//	cout << "Enter the size of array:";
//	cin >> size;
//
//	int** arr = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = new int[size];
//	}
//	for (int i=0;i<size;i++)
//	{
//		for (int j=0;j<size;j++)
//		{
//			cout << "Enter number:";
//			cin >> *(*(arr + i) + j);
//		}
//	}
//	bool flag;
//	flag=IsMatrixUpperTriangular(arr,size);
//	cout << "The matrix is "<<flag<<" upper triangular";
//	deallocateMemory(arr,size);
//}

//PROBLEM 2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int size;
//	do
//	{
//		cout << "Enter the size of array:";
//		cin >> size;
//	} while (size<=0);
//	
//	int** arr = new int*[size];
//
//	for (int i=0;i<size;i++)
//	{
//		*(arr + i) = new int[size];
//	}
//
//	for (int i=0;i<size;i++)
//	{
//		for (int j = 0; j <size; j++)
//		{
//			cout << "enter number:";
//			do
//			{
//				cin >> *(*(arr + i) + j);
//			} while (*(*(arr+i)+j)!=0 && *(*(arr+i)+j)!=1);
//		}
//	}
//
//	for (int row=0;row<size;row++)
//	{
//		int start = 0,end=size-1;
//		while (start<end)
//		{
//			int temp;
//			temp = *(*(arr + row) + start);
//			*(*(arr + row) + start) = *(*(arr + row) + end);
//			*(*(arr + row) + end) = temp;
//			start++, end--;
//		}
//	}
//
//	for (int i=0;i<size;i++)
//	{
//		for (int j=0;j<size;j++)
//		{
//			cout << *(*(arr + i) + j);
//		}
//		cout << endl;
//	}
//
//	for (int i=0;i<size;i++)
//	{
//		for (int j=0;j<size;j++)
//		{
//			if (*(*(arr+i)+j)==1)
//			{
//				*(*(arr + i) + j) = 0;
//			}
//			else if (*(*(arr + i) + j) == 0)
//			{
//				*(*(arr + i) + j) = 1;
//			}
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << *(*(arr + i) + j);
//		}
//		cout << endl;
//	}
//}
//
//QUESTIOn 3
//#include<iostream>
//using namespace std;
//int number;
//int length(char* input)
//{
//    int len = 0;
//    while (*(input + len) != '\0')
//    {
//        len++;
//    }
//    return len;
//}
//
//char** ReadStudentsListFromConsole()
//{
//    int columns;
//    char input[100];
//    do
//    {
//        cout << "Enter number of students: ";
//        cin >> number;
//    } while (number < 0);
//    cin.ignore();
//    char** name = new char* [number];
//    for (int i = 0; i < number; i++)
//    {
//        cout << "Enter the name: ";
//        cin.getline(input, 100);
//        columns = length(input);
//        *(name + i) = new char[columns + 1];
//        for (int j = 0; j < columns; j++)
//        {
//            *(*(name + i) + j) = *(input + j);
//        }
//        *(*(name + i) + columns) = '\0';
//    }
//    return name;
//}
//
//void PrintAllNames(char** studentsList, int& size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(studentsList + i) << endl;
//    }
//}
//
//int FirstIndexOfSubString(char* myStr, char* strToFind)
//{
//    int lenMyStr = length(myStr);
//    int lenStrToFind = length(strToFind);
//    for (int i = 0; i <= lenMyStr - lenStrToFind; i++)
//    {
//        bool found = true;
//        for (int j = 0; j < lenStrToFind; j++)
//        {
//            if (*(myStr + i + j) != *(strToFind + j))
//            {
//                found = false;
//                break;
//            }
//        }
//        if (found)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//char** FindNameFromStudentsList(char** list, char* SearchString, int size, int& foundCount)
//{
//    foundCount = 0;
//    char** foundNames = new char* [size];
//    for (int i = 0; i < size; i++)
//    {
//        if (FirstIndexOfSubString(*(list + i), SearchString) != -1)
//        {
//            *(foundNames + foundCount) = *(list + i);
//            foundCount++;
//        }
//    }
//    return foundNames;
//}
//
//void RemoveStudents(char**& studentsList, int& size, char* searchString)
//{
//    char** newList = new char* [size];
//    int newSize = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (FirstIndexOfSubString(*(studentsList + i), searchString) == -1)
//        {
//            *(newList + newSize) = *(studentsList + i);
//            newSize++;
//        }
//        else
//        {
//            delete[] * (studentsList + i);
//        }
//    }
//    delete[] studentsList;
//    studentsList = newList;
//    size = newSize;
//}
//
//int main()
//{
//    char** name = ReadStudentsListFromConsole();
//    PrintAllNames(name, number);
//    int foundCount;
//    char searchString[100];
//    cout << "Enter search string: ";
//    cin.getline(searchString, 100);
//    char** foundNames = FindNameFromStudentsList(name, searchString, number, foundCount);
//    if (foundCount == 0)
//    {
//        cout << "No Result Found" << endl;
//    }
//    else
//    {
//        cout << "Result Found:" << endl;
//        PrintAllNames(foundNames, foundCount);
//    }
//    cout << "Enter string to remove: ";
//    cin.getline(searchString, 100);
//    RemoveStudents(name, number, searchString);
//    PrintAllNames(name, number);
//    for (int i = 0; i < number; i++)
//    {
//        delete[] * (name + i);
//    }
//    delete[] name;
//    delete[] foundNames;
//}
