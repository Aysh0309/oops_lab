#include<iostream>
using namespace std;

class BankAccount {
public:
    int acc;
    string name;
    float bal;
};

int main() {
    BankAccount b;

    b.acc = 101;
    b.name = "Aayush";
    b.bal = 50000;

    cout << "Account Number: " << b.acc << endl;
    cout << "Account Holder: " << b.name << endl;
    cout << "Balance: " << b.bal;

    return 0;
}