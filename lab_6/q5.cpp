#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
        cout << "Default constructor called" << endl;
    }
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
        cout << "Parameterized constructor called for "
             << name << endl;
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    Student s1;

    Student s2(101, "Aayush", 92.5);

    Student s3(102, "Rahul", 88.5);

    cout << "\nStudent Details:\n";

    s1.display();
    cout << endl;

    s2.display();
    cout << endl;

    s3.display();

    return 0;
}