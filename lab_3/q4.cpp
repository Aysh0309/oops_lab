#include<iostream>
using namespace std;

class Student {
public:
    int roll;
    string firstName;
    string lastName;
    float per;
};

int main() {
    Student s;

    s.roll = 64;
    s.firstName="Aayush";
    s.lastName="Awasthi";
    s.per = 97.4;

    cout << "Student's Roll No.: " << s.roll << endl;
    cout << "Student's Name: " << s.firstName+" "+s.lastName << endl;
    cout << "Student's Percentage: " << s.per<<endl;

    return 0;
}