#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks1, marks2, marks3;

    float calculatePercentage() {
        float total = marks1 + marks2 + marks3;
        return total / 3.0;
    }

public:

    void acceptDetails() {
        cout << "Enter student name: ";
       getline(cin,name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks in three subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void displayResult() {
        float total = marks1 + marks2 + marks3;

        float percentage = calculatePercentage();

        cout << "\nStudent Result\n\n" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

int main() {

    Student s;

    s.acceptDetails();
    s.displayResult();

    return 0;
}