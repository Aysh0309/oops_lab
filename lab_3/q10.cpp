#include<iostream>
using namespace std;

class BankAccount {
public:
    int acc;
    string name;
    float bal;

    void deposit(float x) {
        bal += x;
    }

    void withdraw(float x) {
        if(x > bal)
            cout << "Insufficient balance" << endl;
        else {
            bal -= x;
            cout << "Withdrawal successful" << endl;
        }
    }

    void show() {
        cout << "Balance = " << bal << endl;
    }
};

int main() {
    BankAccount b;

    b.acc = 101;
    b.name = "Aayush";
    b.bal = 5000;

    b.deposit(2000);
    b.show();

    b.withdraw(3000);
    b.show();

    b.withdraw(10000);

    return 0;
}