#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;
    string department;

public:

    Employee() {
        empId = 0;
        name = "Unknown";
        salary = 0;
        department = "None";

        cout << "Default constructor called" << endl;
    }
    Employee(int id, string n, float s, string d) {
        empId = id;
        name = n;
        salary = s;
        department = d;

        cout << "Parameterized constructor called" << endl;
    }

    Employee(const Employee &e) {
        empId = e.empId;
        name = e.name;
        salary = e.salary;
        department = e.department;

        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "\nEmployee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }

    ~Employee() {
        cout << "Destructor called for Employee "
             << empId << endl;
    }
};

int main() {

    Employee e1;

    Employee e2(101, "Aayush", 60000, "CSE");

    Employee e3(e2);

    cout << "\nEmployee Details:" << endl;

    e1.display();
    e2.display();
    e3.display();

    return 0;
}