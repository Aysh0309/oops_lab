#include<iostream>
using namespace std;

class Showroom {
public:
    int carPrice, bikePrice, nc, nb;
};

int main() {
    Showroom s;

    s.carPrice = 10000;
    s.bikePrice = 2000;
    s.nc = 4;
    s.nb = 3;

    cout << "Price of Car A1 = " << s.carPrice << endl;
    cout << "Price of Bike A2 = " << s.bikePrice << endl;
    cout << "Number of Car available = " << s.nc << endl;
    cout << "Number of Bike available = " << s.nb<<endl;

    return 0;
}