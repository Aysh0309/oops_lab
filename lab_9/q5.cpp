#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;
public:
    void getEmployee() {
        cout << "Enter ID and name: ";
        cin >> id >> name;
    }
};

class Manager : public Employee {
private:
    float salary;
    string department;
public:
    void getDetails() {
        getEmployee();
        cout << "Enter salary and department: ";
        cin >> salary >> department;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.getDetails();
    m.display();
    return 0;
}