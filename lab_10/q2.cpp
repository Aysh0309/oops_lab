#include<iostream>
using namespace std;

class Vehicle{
 protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) {
        brand = b;
        year = y;
        cout<<"Vehicle constructor called " << endl;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
    ~Vehicle() {
        cout<<"Vehicle destructor called " << endl;
    }
};
class Car : public Vehicle {
    protected:
    int seatingCapacity;
    public:
    Car(string b, int y,int sc): Vehicle(b,y){
        seatingCapacity = sc;
        cout<<"Car constructor called " << endl;
    }
    void displayCar() {
        displayVehicle();
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
    ~Car() {
        cout<<"Car destructor called " << endl;
    }
};

class ElectricCar : public Car {
    private:
    int batteryCapacity;
    public:
    ElectricCar(string b, int y,int sc,int bc): Car(b,y,sc){
        batteryCapacity = bc;
        cout<<"ElectricCar constructor called " << endl;
    }
    void displayElectricCar() {
        displayCar();
        cout << "Battery Capacity: (inKwh) " << batteryCapacity << endl;
    }
    ~ElectricCar() {
        cout<<"ElectricCar destructor called " << endl;
    }
};


int main(){
   
    ElectricCar e1("Tesla", 2022, 5, 100);
    cout << "Electric Car Details:\n" << endl;
    e1.displayElectricCar();
    return 0;
}