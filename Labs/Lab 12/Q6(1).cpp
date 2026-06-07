//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//class Fraction {
//private:
//    int numerator;
//    int denominator;
//
//public:
//    Fraction(int n, int d) 
//    {
//        if (d == 0) 
//        {
//            throw invalid_argument("Denominator cannot be zero.");
//        }
//        numerator = n;
//        denominator = d;
//    }
//
//    void print()
//    {
//        cout <<"Fraction:"<< numerator << "/" << denominator << endl;
//    }
//
//    double decimal() 
//    {
//        double value;
//        value = static_cast<double>(numerator) / denominator;
//        return value;
//    }
//};
//
//int main() {
//    try 
//    {
//        int num, denom;
//        cout << "Enter numerator: ";
//        cin >> num;
//        cout << "Enter denominator: ";
//        cin >> denom;
//
//        Fraction f(num, denom);
//        f.print();
//        cout << "Decimal value: " << f.decimal() << endl;
//    }
//    catch (invalid_argument& e) 
//    {
//        cout << "Exception: " << e.what();
//    }
//}
