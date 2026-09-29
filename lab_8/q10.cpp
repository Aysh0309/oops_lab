#include <iostream>
using namespace std;

class Area {
public:
    float calculateArea(float radius) {
        return 3.14159 * radius * radius;
    }

    float calculateArea(float length, float width) {
        return length * width;
    }

    float calculateArea(float base, float height, int) {
        return 0.5 * base * height;
    }
};

int main() {
    Area a;

    cout << "Area of circle: " << a.calculateArea(5.0f) << endl;
    cout << "Area of rectangle: " << a.calculateArea(10.0f, 5.0f) << endl;
    cout << "Area of triangle: " << a.calculateArea(10.0f, 5.0f, 1) << endl;

    return 0;
}