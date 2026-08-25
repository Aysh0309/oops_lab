#include<iostream>
using namespace std;

class Circle {
private:
    float r;

public:
    void area() {
        cout << "Enter radius: ";
        cin >> r;

        cout << "Area = " << 3.14 * r * r<<endl;
    }
};

int main() {
    Circle c;
    c.area();

    return 0;
}