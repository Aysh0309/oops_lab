#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    friend Distance operator+(Distance d1, Distance d2);

    void display() {
        cout << feet << " feet "
             << inches << " inches" << endl;
    }
};

Distance operator+(Distance d1, Distance d2) {

    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    if (totalInches >= 12) {
        totalFeet = totalFeet + totalInches / 12;
        totalInches = totalInches % 12;
    }

    return Distance(totalFeet, totalInches);
}

int main() {

    Distance d1(5, 8);
    Distance d2(3, 7);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    Distance d3 = d1 + d2;

    cout << "Sum: ";
    d3.display();

    return 0;
}