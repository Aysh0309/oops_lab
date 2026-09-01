#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void initialize(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.initialize(101, "Aayush", 92.5);

    Student *ptr = &s;

    float Student::*marksPtr = &Student::marks;

    ptr->display();
    
    cout << "Marks using pointers: " << ptr->*marksPtr << endl;

    return 0;
}