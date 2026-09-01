#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;

    void accept() {
        cout << "Enter Employee ID: \n";
        cin >> empId;

        cout << "Enter Name: \n";
        cin >> name;

        cout << "Enter Salary: \n";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.accept();

    Employee *ptr = &e;

    float Employee::*salaryPtr = &Employee::salary;

    ptr->*salaryPtr = 60000;

    ptr->display();

    return 0;
}