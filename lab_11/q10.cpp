#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape {
    double r;

public:
    Circle(double radius) {
        r = radius;
    }

    void area() override {
        cout << "Circle area: " << 3.14159 * r * r << endl;
    }
};

class Rectangle : public Shape {
    double l, b;

public:
    Rectangle(double length, double breadth) {
        l = length;
        b = breadth;
    }

    void area() override {
        cout << "Rectangle area: " << l * b << endl;
    }
};

int main() {
    Circle c(3);
    Rectangle r(4, 5);

    Shape* ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}