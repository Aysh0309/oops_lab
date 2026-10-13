#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
};

class Base2 {
public:
    int x;

    Base2(int a) {
        x = a;
        cout << "Base class constructor: " << x << endl;
    }
};

class Derived2 : public Base2 {
public:
    int y;

    Derived2(int a, int b) : Base2(a) {
        y = b;
        cout << "Derived class constructor: " << y << endl;
    }
};

int main() {
    Derived d;
    Derived2 d2(20,30);
    return 0;
}