#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        float area = length * width;

        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {

    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;
    Rectangle r(l, w);

    r.calculateArea();

    return 0;
}