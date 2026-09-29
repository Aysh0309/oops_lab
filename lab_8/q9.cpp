#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Sum of two integers: " << c.add(10, 20) << endl;
    cout << "Sum of three integers: " << c.add(10, 20, 30) << endl;
    cout << "Sum of two floats: " << c.add(2.5f, 3.5f) << endl;

    return 0;
}