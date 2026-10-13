#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int m1, m2, m3;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter three marks: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Student {
public:
    void display() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.display();
    return 0;
}