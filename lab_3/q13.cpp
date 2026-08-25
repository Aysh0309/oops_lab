#include<iostream>
using namespace std;

class Number {
public:
    int n;

    void check() {
        if(n > 0)
            cout << "Positive";
        else if(n < 0)
            cout << "Negative";
        else
            cout << "Zero";
    }
};

int main() {
    Number n;

    cin >> n.n;
    n.check();

    return 0;
}