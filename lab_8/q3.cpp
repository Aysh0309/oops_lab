#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void calculate() {
        total = 0;

        for (int i = 0; i < 5; i++)
            total += marks[i];

        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();

    return 0;
}