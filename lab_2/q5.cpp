#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Input a number of terms: ";
    cin >> n;

    cout << "The natural numbers up to " << n << "th terms are: ";

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << "\nThe sum of the natural numbers is: " << sum<<"\n";

    return 0;
}