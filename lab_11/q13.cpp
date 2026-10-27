#include <iostream>
using namespace std;

class Employee {
public:
    virtual void salary() {
        cout << "Employee salary: Rs. 20000" << endl;
    }
};

class Manager : public Employee {
public:
    void salary() override {
        cout << "Manager salary: Rs. 60000" << endl;
    }
};

class Developer : public Employee {
public:
    void salary() override {
        cout << "Developer salary: Rs. 45000" << endl;
    }
};

int main() {
    Manager m;
    Developer d;

    Employee* ptr = &m;
    ptr->salary();

    ptr = &d;
    ptr->salary();

    return 0;
}