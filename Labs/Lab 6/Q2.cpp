#include <iostream>
using namespace std;

class Polynomials {
private:
    int Total_Value;
    int* coeffecient;
    int* exponent;

public:
    Polynomials()
    {
        Total_Value = 0;
        coeffecient = nullptr;
        exponent = nullptr;
    }

    Polynomials(int values, int* x, int* y)
    {
        Total_Value = values;
        coeffecient = new int[Total_Value];
        exponent = new int[Total_Value];

        for (int i = 0; i < Total_Value; i++)
        {
            coeffecient[i] = x[i];
            exponent[i] = y[i];
        }
    }

    Polynomials(Polynomials& random)
    {
        Total_Value = random.Total_Value;
        coeffecient = new int[Total_Value];
        exponent = new int[Total_Value];
        for (int i = 0; i < Total_Value; i++)
        {
            coeffecient[i] = random.coeffecient[i];
            exponent[i] = random.exponent[i];
        }
    }


    Polynomials& operator+=(int value) 
    {
        for (int i = 0; i < Total_Value; i++) 
        {
            if (exponent[i] == 0) 
            {
                coeffecient[i] += value;
                return *this;
            }
        }
        int* newcoeffecient = new int[Total_Value + 1];
        int* newexponent = new int[Total_Value + 1];

        for (int i = 0; i < Total_Value; i++) {
            newcoeffecient[i] = coeffecient[i];
            newexponent[i] = exponent[i];
        }
        newcoeffecient[Total_Value] = value;
        newexponent[Total_Value] = 0;
        Total_Value++;
        delete[] coeffecient;
        delete[] exponent;
        coeffecient = newcoeffecient;
        exponent = newexponent;
        return *this;
    }

    Polynomials operator+(Polynomials& random)
    {
        int* n_coeffecient = new int[Total_Value + random.Total_Value];
        int* n_exponent = new int[Total_Value + random.Total_Value];
        int a = 0, b = 0, c = 0;

        while (a < Total_Value && b < random.Total_Value)
        {
            if (exponent[a] < random.exponent[b]) {
                n_coeffecient[c] = coeffecient[a];
                n_exponent[c] = exponent[a];
                a++;
            }
            else if (exponent[a] > random.exponent[b])
            {
                n_coeffecient[c] = random.coeffecient[b];
                n_exponent[c] = random.exponent[b];
                b++;
            }
            else if (exponent[a] == random.exponent[b])
            {
                n_coeffecient[c] = coeffecient[a] + random.coeffecient[b];
                n_exponent[c] = exponent[a];
                a++;
                b++;
            }
            c++;
        }

        while (b < random.Total_Value)
        {
            n_coeffecient[c] = random.coeffecient[b];
            n_exponent[c] = random.exponent[b];
            b++; c++;
        }

        while (a < Total_Value)
        {
            n_coeffecient[c] = coeffecient[a];
            n_exponent[c] = exponent[a];
            a++; c++;
        }
        
        return Polynomials(c, n_coeffecient, n_exponent);
    }

    Polynomials operator++(int) 
    {
        Polynomials temp = *this;
        (*this)++;
        return temp;
    }

    Polynomials& operator++()
    {
        for (int i = 0; i < Total_Value; i++)
        {
            coeffecient[i] += 1;
        }
        return *this;
    }
    friend ostream& operator<<(ostream& cout,Polynomials& p) 
    {
        for (int i = 0; i < p.Total_Value; i++) 
        {
            if (i > 0 && p.coeffecient[i] >= 0)
                cout << " + ";
            cout << p.coeffecient[i] << "x^" << p.exponent[i];
        }
        return cout;
    }
    ~Polynomials() 
    {
        delete[] coeffecient;
        delete[] exponent;
    }
};

int main()
{
    int coeffecient_P1[] = { 1, 2, 5 };
    int exponent_P1[] = { 4, 2, 0 };

    int coeffecient_P2[] = { 4, 3 };
    int exponent_P2[] = { 6, 2 };

    Polynomials P1(3, coeffecient_P1, exponent_P1);
    Polynomials P2(2, coeffecient_P2, exponent_P2);

    cout << "P1 = " << P1 << endl;
    cout << "P2 = " << P2 << endl;
    if (!P1)
    {
        cout << "The P1 is null" << endl;
    }
    if (P1 != P2)
    {
        cout << "The polynomials P1 and P2 are unequal" << endl;
    }
    Polynomials P3;
    P3=P1 + P2;
    cout << "P3 = " << P3 << endl;
    P3 += 2;
    cout << "Result of P2 after adding 2 = " << P3 << endl;
    cout << "Before increment the value of P1= " << P1 << endl;
    ++P1;
    cout << "After pre-increment value of P1= " << P1 << endl;
    P1++;
    cout << "After post-increment value of P1= " << P1 << endl;
}