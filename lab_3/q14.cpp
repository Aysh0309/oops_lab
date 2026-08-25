#include<iostream>
using namespace std;

class Palindrome {
public:
    int n;

    void check() {
        int x = n, r = 0;

        while(x > 0) {
            r = r * 10 + x % 10;
            x /= 10;
        }

        if(r == n)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
    }
};

int main() {
    Palindrome p;

    cin >> p.n;
    p.check();

    return 0;
}