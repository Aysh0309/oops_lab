#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudent() {
        getPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getStudent();
    s.display();
    return 0;
}