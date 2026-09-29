#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    Employee() {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int i, string n) {
        id = i;
        name = n;
        salary = 0;
    }

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main() {
    Employee e1;
    Employee e2(101, "Rahul");
    Employee e3(102, "Aayush", 50000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}