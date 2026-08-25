#include<iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    Student s1, s2, s3;

    s1.roll = 101;
    s1.name = "Aayush";

    s2.roll = 102;
    s2.name = "Rahul";

    s3.roll = 103;
    s3.name = "Aman";

    cout << s1.roll << " " << s1.name << endl;
    cout << s2.roll << " " << s2.name << endl;
    cout << s3.roll << " " << s3.name <<endl;

    return 0;
}