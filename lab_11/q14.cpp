#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void display() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void display() override {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void display() override {
        cout << "This is a bike" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    Vehicle* ptr;

    ptr = &c;
    ptr->display();

    ptr = &b;
    ptr->display();

    return 0;
}