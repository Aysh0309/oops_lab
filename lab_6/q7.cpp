#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;

public:

    Product(int id, string name, float p) {
        productId = id;
        productName = name;
        price = p;

        cout << "Constructor called for Product "
             << productId << endl;
    }

    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }

    ~Product() {
        cout << "Destructor called for Product "
             << productId << endl;
    }
};

int main() {
    Product products[5] = {
        Product(101, "Laptop", 50000),
        Product(102, "Phone", 30000),
        Product(103, "Tablet", 25000),
        Product(104, "Watch", 5000),
        Product(105, "Headphone", 3000)
    };

    cout << "\nProduct Details:\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nProduct " << i + 1 << endl;
        products[i].display();
    }

    return 0;
}