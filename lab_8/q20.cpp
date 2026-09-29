#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;

public:
    void inputEmployee() {
        cout << "Enter name and salary: ";
        cin >> name >> salary;
    }
};

class Manager : public Employee {
    string department;

public:
    void input() {
        inputEmployee();

        cout << "Enter department: ";
        cin >> department;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.input();
    m.display();

    return 0;
}