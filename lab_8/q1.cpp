#include <iostream>
using namespace std;

class Product {
    int productID;
    string name;
    int quantity;
    float price;

public:
    void input() {
        cout << "Enter product ID, name, quantity and price: ";
        cin >> productID >> name >> quantity >> price;
    }

    float totalCost() {
        return quantity * price;
    }

    void display() {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Total Cost: " << totalCost() << endl;
    }
};

int main() {
    Product p;
    p.input();
    p.display();

    return 0;
}