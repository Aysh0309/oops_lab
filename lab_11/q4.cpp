#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    Student() {
        id = 0;
        name = "Unknown";
    }

    Student(int i) {
        id = i;
        name = "Unknown";
    }

    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2(101);
    Student s3(102, "Rahul");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}