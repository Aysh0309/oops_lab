#include <iostream>
using namespace std;

class Student {
    int marks[3];

public:
    void input() {
        cout << "Enter marks of 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    Student operator+(Student s) {
        Student temp;

        for (int i = 0; i < 3; i++)
            temp.marks[i] = marks[i] + s.marks[i];

        return temp;
    }

    void display() {
        cout << "Added marks: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";

        cout << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.input();
    s2.input();

    s3 = s1 + s2;

    s3.display();

    return 0;
}