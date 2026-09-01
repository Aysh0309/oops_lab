#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int numA;

public:
    void setValue(int x) {
        numA = x;
    }
    friend int add(ClassA, ClassB);
};

class ClassB {
private:
    int numB;

public:
    void setValue(int x) {
        numB = x;
    }

    friend int add(ClassA, ClassB);
};

int add(ClassA a, ClassB b) {
    return a.numA + b.numB;
}

int main() {
    ClassA a;
    ClassB b;

    a.setValue(23);
    b.setValue(20);

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}