//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice;
//    cout << "Enter 1 for int,2 for double,3 for string:";
//    cin >> choice;
//
//    try 
//    {
//        switch (choice) 
//        {
//        case 1:
//            throw 42;
//        case 2:
//            throw 3.14;
//        case 3:
//            throw string("Flag");
//        default:
//            cout << "Invalid choice"<<endl;
//            return 1;
//        }
//    }
//    catch (int e) 
//    {
//        cout << "Integer exception found" << e << endl;
//    }
//    catch (double d) 
//    {
//        cout << "Double exception found" << d << endl;
//    }
//    catch (...) 
//    {
//        cout << "Exception found"<<endl;
//    }
//}
