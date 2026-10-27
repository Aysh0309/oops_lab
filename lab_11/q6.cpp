#include <iostream>
using namespace std;

double volume(double s) {
    return s * s * s;
}

double volume(double l, double b, double h) {
    return l * b * h;
}

double volume(double r, double h) {
    return 3.14159 * r * r * h;
}

int main() {
    cout << "Volume of cube: "
         << volume(3.0) << endl;

    cout << "Volume of cuboid: "
         << volume(2.0, 3.0, 4.0) << endl;

    cout << "Volume of cylinder: "
         << volume(2.0, 5.0) << endl;

    return 0;
}