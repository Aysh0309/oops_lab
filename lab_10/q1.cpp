
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }
};

int main() {
    SavingsAccount s1(101, "Aayush", 10000, 5);

    cout << "Initial Account Details:\n" << endl;
    s1.displayAccount();

    cout << "\nAfter Deposit:\n" << endl;
    s1.deposit(2000);
    s1.displayAccount();

    cout << "\nAfter Withdrawal:\n" << endl;
    s1.withdraw(3000);
    s1.displayAccount();

    cout << "\nAfter Adding Interest:" << endl;
    s1.addInterest();
    s1.displayAccount();

    return 0;
}
