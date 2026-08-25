#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int units;
    double bill;

    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 0.60;
    else if (units <= 300)
        bill = 100 * 0.60 + (units - 100) * 0.80;
    else
        bill = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;

    if (bill < 50)
        bill = 50;

    if (bill > 300)
        bill += bill * 0.15;

    cout << fixed << setprecision(2);
    cout << "\nCustomer Name : " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill    : Rs. " << bill << endl;

    return 0;
}