#include<iostream>
using namespace std;

class Largest {
public:
    int a, b;

    void find() {
        if(a > b)
            cout << "Largest = " << a;
        else
            cout << "Largest = " << b;
    }
};

int main() {
    Largest l;

    cin >> l.a >> l.b;
    l.find();

    return 0;
}