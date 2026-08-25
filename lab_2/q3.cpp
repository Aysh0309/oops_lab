#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int a = 0, b = 1;

    cout << "Fibonacci series: ";
    while (a <= limit) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout<<"\n";
    return 0;
}