#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    float speed;

public:
    void inputVehicle() {
        cout << "Enter brand and speed: ";
        cin >> brand >> speed;
    }
};

class Car : public Vehicle {
    string model;
    float price;

public:
    void input() {
        inputVehicle();

        cout << "Enter model and price: ";
        cin >> model >> price;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c;

    c.input();
    c.display();

    return 0;
}