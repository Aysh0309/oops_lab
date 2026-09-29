#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter ID, name and salary: ";
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary() {
        return salary;
    }
};

int main() {
    Employee e[3];

    for (int i = 0; i < 3; i++)
        e[i].input();

    int highest = 0;

    for (int i = 1; i < 3; i++) {
        if (e[i].getSalary() > e[highest].getSalary())
            highest = i;
    }

    cout << "\nEmployee with highest salary:\n";
    e[highest].display();

    return 0;
}