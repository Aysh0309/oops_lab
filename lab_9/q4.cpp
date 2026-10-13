#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    float radius;

    void area() {
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    int length, breadth;

    void area() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.display();
    c.area();

    r.display();
    r.area();

    return 0;
}