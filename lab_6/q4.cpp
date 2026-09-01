#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    string accountHolderName;
    double balance;

public:
    BankAccount(int no, string name, double bal) {
        accountNo = no;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccountDetails() const {
        cout << "Account No: " << accountNo << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account1(101, "Aayush", 10000);

    cout << "Normal Account:" << endl;

    account1.deposit(2000);
    account1.withdraw(1000);
    account1.displayAccountDetails();

    // Here we also use the const obj of the class and the thing is that class must have a constructor as this obj cnat be updated 
    const BankAccount account2(102, "Rahul", 5000);
    //a const obj can call only a const function;
    cout << "\nConst Account:" << endl;

    account2.displayAccountDetails();

    // These cannot be called using a const object:
    // account2.deposit(1000);   // ERROR
    // account2.withdraw(500);  // ERROR

    return 0;
}