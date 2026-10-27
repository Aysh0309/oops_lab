#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Square : public Shape {
    int side;

public:
    Square(int s) {
        side = s;
    }

    void area() override {
        cout << "Area of square: "
             << side * side << endl;
    }
};

class Rectangle : public Shape {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of rectangle: "
             << length * breadth << endl;
    }
};

int main() {
    Square s(4);
    Rectangle r(5, 3);

    Shape* ptr = &s;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}