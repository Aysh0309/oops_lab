#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;

public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }

    static float Product::* getPricePointer() {
        return &Product::price;
    }
};

int main() {
    Product products[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of Product " << i + 1 << endl;
        products[i].accept();
    }

    Product *ptr = products;

    float Product::*pricePtr = Product::getPricePointer();

    cout << "\nPrices of all products:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Product " << i + 1 << ": "
             << (ptr + i)->*pricePtr << endl;
    }

    int highestIndex = 0;

    for (int i = 1; i < 5; i++) {
        if ((ptr + i)->*pricePtr >
            (ptr + highestIndex)->*pricePtr) {
            highestIndex = i;
        }
    }

    cout << "\nProduct with highest price:\n";
    (ptr + highestIndex)->display();

    return 0;
}