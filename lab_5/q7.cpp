#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

class Number {
private:
    int value;

public:
    Number(int x) {
        value = x;
    }

    friend void display(Number n);
};

void display(Number n) {
    cout << "Private value = " << n.value << endl;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square = " << square(num) << endl;

    Number obj(50);

    display(obj);

    return 0;
}