//#include<iostream>
//#include<memory>
//using namespace std;
//
//int findlength(const char* para)
//{
//    int length = 0;
//    while (*(para + length) != '\0')
//    {
//        length++;
//    }
//    return length;
//}
//
//
//int main()
//{
//
//    char para[100];
//    cout << "Enter the paragraph: ";
//    cin.getline(para, 100);
//
//
//    int strLength = findlength(para);
//
//
//    unique_ptr <char[]> name(new char[strLength + 1]);
//
//
//    for (int i = 0; i < strLength; i++)
//    {
//        name[i] = *(para + i);
//    }
//    name[strLength] = '\0';
//
//    char to_Find[100], to_Replace[100];
//    cout << "enter the text to find: ";
//    cin.getline(to_Find, 100);
//    cout << "enter the text to replace: ";
//    cin.getline(to_Replace, 100);
//
//    int Find_Length = findlength(to_Find);
//    int Replace_Length = findlength(to_Replace);
//
//
//    int count = 0;
//    for (int i = 0; i <= strLength - Find_Length; i++)
//    {
//        bool flag = true;
//        for (int j = 0; j < Find_Length; j++)
//        {
//            if (*(para + i + j) != *(to_Find + j))
//            {
//                flag = false;
//                break;
//            }
//        }
//        if (flag)
//        {
//            count++;
//            i += Find_Length - 1;
//        }
//    }
//
//    int newLength = strLength + count * (Replace_Length - Find_Length);
//
//    unique_ptr <char[]> new_name(new char[newLength + 1]);
//
//    int i = 0, j = 0;
//    while (i < strLength)
//    {
//        bool found = true;
//        for (int k = 0; k < Find_Length; k++)
//        {
//            if (*(para + i + k) != *(to_Find + k))
//            {
//                found = false;
//                break;
//            }
//        }
//        if (found)
//        {
//
//            for (int k = 0; k < Replace_Length; k++)
//            {
//                new_name[j] = *(to_Replace + k);
//                j++;
//            }
//            i += Find_Length;
//        }
//        else
//        {
//
//            new_name[j] = *(para + i);
//            i++;
//            j++;
//        }
//    }
//    new_name[j] = '\0';
//    cout << "New Data is: " << new_name << endl;
//
//    return 0;
//}