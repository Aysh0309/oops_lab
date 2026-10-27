#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of floats: " << add(2.5f, 3.5f) << endl;

    return 0;
}