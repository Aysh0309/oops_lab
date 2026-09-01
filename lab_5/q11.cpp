#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int units;
    double bill = 0;
    double surcharge = 0;
    double totalBill;

    cout << "Enter user name: ";
    cin >> name;

    cout << "Enter number of units consumed: ";
    cin >> units;


    if (units <= 100) {
        bill = units * 0.60;
    }
    else if (units <= 300) {
        bill = (100 * 0.60) +
               ((units - 100) * 0.80);
    }
    else {
        bill = (100 * 0.60) +
               (200 * 0.80) +
               ((units - 300) * 0.90);
    }

    if (bill < 50) {
        bill = 50;
    }

    if (bill > 300) {
        surcharge = bill * 0.15;
    }

    totalBill = bill + surcharge;
    cout << "\n----- Electricity Bill -----\n";
    cout << "Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Bill Amount: Rs. " << bill << endl;
    cout << "Surcharge: Rs. " << surcharge << endl;
    cout << "Total Charges: Rs. " << totalBill << endl;

    return 0;
}