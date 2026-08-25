#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    int integerValue;
    double floatValue1, floatValue2;
    long long number;
    string name, institute;

    // 3.1
    cout << "Enter an integer: ";
    cin >> integerValue;
    cout << "Output: " << integerValue << endl << endl;

    // 3.2
    cout << "Enter a floating-point number: ";
    cin >> floatValue1;
    cout << "Output: " << floatValue1 << endl << endl;

    // 3.3
    cout << "Enter a floating-point number (display up to 4 decimal places): ";
    cin >> floatValue1;
    cout << "Output: " << fixed << setprecision(4) << floatValue1 << endl << endl;

    // 3.4
    cout << "Enter a floating-point number (display up to 2 decimal places): ";
    cin >> floatValue2;
    cout << "Output: " << fixed << setprecision(2) << floatValue2 << endl << endl;

    cout << "Enter an integer: ";
    cin >> number;
    cout << "Output: " << number << " * " << number << endl << endl;

    cin.ignore();
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 3.6
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Output: " << name << endl << endl;

    // 3.7
    cout << "Enter your institute name: ";
    getline(cin, institute);
    cout << "Output: " << institute << endl;

    return 0;
}