#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int maximum(int a, int b, int c) {
    return maximum(maximum(a, b), c);
}

int main() {
    cout << "Maximum of two numbers: "
         << maximum(10, 20) << endl;

    cout << "Maximum of three numbers: "
         << maximum(10, 30, 20) << endl;

    return 0;
}