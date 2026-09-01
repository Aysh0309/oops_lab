#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float percentage;

public:

    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void compare(Student s) {

        if (percentage > s.percentage) {
            cout << name << " has obtained higher marks." << endl;
        }
        else if (percentage < s.percentage) {
            cout << s.name << " has obtained higher marks." << endl;
        }
        else {
            cout << "Both students have obtained equal marks." << endl;
        }
    }
};

int main() {

    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.acceptDetails();

    cout << "\nEnter details of Student 2:\n";
    s2.acceptDetails();

    cout << "\nResult:\n";

    s1.compare(s2);

    return 0;
}