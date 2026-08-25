#include<iostream>
using namespace std;

class Number {
public:
    int n;

    void check() {
        if(n % 2 == 0)
            cout << "Even";
        else
            cout << "Odd";
    }
};

int main() {
    Number n;

    cin >> n.n;
    n.check();

    return 0;
}