#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle() {
        length = 10;
        breadth = 5;
        cout << "Default constructor called" << endl;
    }
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
        cout << "Parameterized constructor called" << endl;
    }
    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
        cout << "Copy constructor called" << endl;
    }
    void displayArea() {
        cout << "Area = " << length * breadth << endl;
    }
    ~Rectangle() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    Rectangle r1;

    Rectangle r2(20, 10);

    Rectangle r3(r2);

    cout << "\nAreas:" << endl;

    r1.displayArea();
    r2.displayArea();
    r3.displayArea();

    return 0;
}