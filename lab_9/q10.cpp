#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getRoll() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Sports : public Person {
public:
    int score;

    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Student, public Sports {
public:
    void getdata(){
        Student::getName();
        getRoll();
        getScore();
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Name: " << Student::name << endl;
        // cout << "Name: " << Sports::name << endl;
    }
};

int main() {
    Result r;
    r.getdata();
    r.display();

    return 0;
}