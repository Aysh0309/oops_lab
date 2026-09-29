#include <iostream>
using namespace std;

class Calculator {
public:
    inline float add(float a, float b) {
        return a + b;
    }

    inline float subtract(float a, float b) {
        return a - b;
    }

    inline float multiply(float a, float b) {
        return a * b;
    }

    inline float divide(float a, float b) {
        return a / b;
    }
};

int main() {
    Calculator c;

    cout << "Addition: " << c.add(10, 5) << endl;
    cout << "Subtraction: " << c.subtract(10, 5) << endl;
    cout << "Multiplication: " << c.multiply(10, 5) << endl;
    cout << "Division: " << c.divide(10, 5) << endl;

    return 0;
}