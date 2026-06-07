#include<iostream>
using namespace std;

class complex {
private:
    int real, imaginary;

public:
    complex() {
        real = 0;
        imaginary = 0;
    }

    void input() {
        cout << "Enter the real number:";
        cin >> real;
        cout << "Enter the imaginary number:";
        cin >> imaginary;
    }

    complex(complex& c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    complex operator+(complex& c2) {
        complex temp;
        temp.real = real + c2.real;
        temp.imaginary = imaginary + c2.imaginary;
        return temp;
    }

    complex operator-(complex& c2) {
        complex temp;
        temp.real = real - c2.real;
        temp.imaginary = imaginary - c2.imaginary;
        return temp;
    }

    complex operator*(complex& c2) {
        complex temp;
        temp.real = real * c2.real - (imaginary * c2.imaginary);
        temp.imaginary = real * c2.imaginary + (imaginary * c2.real);
        return temp;
    }

    complex operator/(complex& c2) {
        if (c2.real == 0 && c2.imaginary == 0) {
            cout << "DIVISION CANNOT BE OPERATED";
        }
        else {
            complex temp;
            temp.real = (real * c2.real + imaginary * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
            temp.imaginary = (real * c2.imaginary - imaginary * c2.real) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
            return temp;
        }
    }

    complex operator++(int) {
        complex temp = *this;
        real++;
        imaginary++;
        return temp;
    }

    complex operator++() {
        real++;
        imaginary++;
        return *this;
    }

    void output() {
        cout << real << "+" << imaginary << "i";
    }

    friend complex operator+(int, complex);
    friend complex operator-(int, complex);
    friend complex operator*(int, complex);
};

complex operator+(int a, complex c) {
    complex temp;
    temp.real = a + c.real;
    temp.imaginary = c.imaginary;
    return temp;
}

complex operator-(int a, complex c)
{
    complex temp;
    temp.real = a - c.real;
    temp.imaginary = c.imaginary;
    return temp;

}
complex operator*(int a, complex c)
{
    complex temp;
    temp.real = a * c.real;
    temp.imaginary = c.imaginary;
    return temp;
}
int main() {
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1 + c2;
    c3.output();
    c3 = c1 - c2;
    cout << endl;
    c3.output();
    c3 = c1 * c2;
    cout << endl;
    c3.output();
    cout << endl;
    c3 = c1 / c2;
    c3.output();
    cout << endl;
    ++c1;
    c1.output();
    cout << endl;
    c1++;
    c1.output();
    int a;
    cout << endl;
    cout << "Enter the number:";
    cin >> a;
    complex c4;
    c4=a + c1;
    c4.output();
    cout << endl;
    complex c5;
    c5=a - c1;
    c5.output();
    cout << endl;
    complex c6;
    c6 = a * c1;
    c6.output();
}
