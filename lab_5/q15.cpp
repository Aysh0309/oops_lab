#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:

    void acceptAge() {
        cout << "Enter age: ";
        cin >> age;
    }

    float averageAge(Student s) {
        return (age + s.age) / 2.0;
    }
};

int main() {

    Student s1, s2;

    cout << "Enter age of Student 1:\n";
    s1.acceptAge();

    cout << "\nEnter age of Student 2:\n";
    s2.acceptAge();

    float average = s1.averageAge(s2);

    cout << "\nAverage age = " << average << endl;

    return 0;
}