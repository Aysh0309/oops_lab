#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    Student() {
        rollNo = 1;
        name = "Aayush";
        marks = 85;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}