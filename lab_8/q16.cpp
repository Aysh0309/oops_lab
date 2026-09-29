#include <iostream>
using namespace std;

inline void checkEvenOdd(int n) {
    if (n % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    checkEvenOdd(n);

    return 0;
}