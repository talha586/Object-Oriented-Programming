//#include <iostream>
//#include <exception>
//using namespace std;
//
//class exceptionfound : public exception 
//{
//public:
//    const char* what() const noexcept override 
//    {
//        return "Index out of bound";
//    }
//
//    void printMessage()
//    {
//        cout << "Index must be between 0 to 4" << endl;
//    }
//};
//
//int getElementAtIndex(int i) 
//{
//    int arr[5] = { 10, 20, 30, 40, 50 };
//    if (i < 0 || i >= 5) 
//    {
//        throw exceptionfound();
//    }
//    return arr[i];
//}
//
//int main() 
//{
//    int index;
//
//        cout << "Enter index between 0 and 4:";
//        cin >> index;
//
//    
//
//    try 
//    {
//        int value = getElementAtIndex(index);
//        cout << "Value at index " << index << " is " << value << endl;
//    }
//    catch (exceptionfound& e) 
//    {
//        cout << e.what() << endl;
//        e.printMessage();
//    }
//
//    return 0;
//}
