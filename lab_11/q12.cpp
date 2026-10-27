#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* ptr;
    Base b;
    Derived d;

    ptr = &b;
    ptr->display();

    ptr = &d;
    ptr->display();

    return 0;
}