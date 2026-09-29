#include <iostream>
using namespace std;

class Circle;

class Rectangle {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    friend void calculateAreas(Rectangle, Circle);
};

class Circle {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    friend void calculateAreas(Rectangle, Circle);
};

void calculateAreas(Rectangle r, Circle c) {
    cout << "Area of Rectangle: " << r.length * r.width << endl;
    cout << "Area of Circle: " << 3.14159 * c.radius * c.radius << endl;
}

int main() {
    Rectangle r(10, 5);
    Circle c(7);

    calculateAreas(r, c);

    return 0;
}