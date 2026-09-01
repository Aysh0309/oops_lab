#include <iostream>
using namespace std;

class ATM {
private:
    int accountNumber;
    double balance;
    int pin;

    bool verifyPIN(int enteredPin) {
        return enteredPin == pin;
    }
    void updateBalance(double amount) {
        balance = balance - amount;
    }

public:
    
    ATM(int accNo, double bal, int p) {
        accountNumber = accNo;
        balance = bal;
        pin = p;

    }

    void withdraw(double amount, int enteredPin) {

        if (verifyPIN(enteredPin)) {

            if (amount <= balance) {
                updateBalance(amount);

                cout << "Withdrawal successful!" << endl;
                cout << "Amount withdrawn: " << amount << endl;
            }
            else {
                cout << "Insufficient balance!" << endl;
            }

        }
        else {
            cout << "Incorrect PIN!" << endl;
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {

    ATM account(12345, 10000, 1234);
    int enteredPin;
    double amount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    account.withdraw(amount, enteredPin);

    account.displayBalance();

    return 0;
}