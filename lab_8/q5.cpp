#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    r.display();

    return 0;
}