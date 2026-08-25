#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1)
        prime = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << n << " is a Prime Number" << endl;
    else
        cout << n << " is Not a Prime Number" << endl;

    return 0;
}