#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c) {

        return Complex(real + c.real,imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    Complex c1(3, 4);
    Complex c2(5, 2);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = c1 + c2;

    cout << "Sum: ";
    c3.display();

    return 0;
}