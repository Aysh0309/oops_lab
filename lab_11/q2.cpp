#include <iostream>
using namespace std;

double area(double r) {
    return 3.14159 * r * r;
}

int area(int l, int b) {
    return l * b;
}

int area(int s) {
    return s * s;
}

int main() {
    cout << "Area of circle: " << area(3.0) << endl;
    cout << "Area of rectangle: " << area(4, 5) << endl;
    cout << "Area of square: " << area(4) << endl;

    return 0;
}