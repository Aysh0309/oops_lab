#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    void getData() {
        cout << "Enter value: ";
        cin >> x;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Derived d;
    d.getData();
    d.display();
    return 0;
}