#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

    static int totalAccounts;

public:

    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;

        totalAccounts++;
    }

    static void getTotalAccounts() {
        cout << "Total Accounts = " << totalAccounts << endl;
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main() {

    BankAccount a1(101, "Aayush", 50000);

    BankAccount::getTotalAccounts();

    BankAccount a2(102, "Rahul", 40000);

    BankAccount::getTotalAccounts();

    BankAccount a3(103, "Aman", 60000);

    BankAccount::getTotalAccounts();

    a1.display();
    a2.display();
    a3.display();

    return 0;
}