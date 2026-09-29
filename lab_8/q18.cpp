#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    inline float area() {
        return length * width;
    }

    inline float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}