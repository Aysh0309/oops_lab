#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator++() {
        value++;
        return Number(value);
    }

    Number operator++(int) {
        Number old(value);

        value++;

        return old;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {

    Number n(5);

    cout << "Initial value: ";
    n.display();

    Number pre = ++n;

    cout << "After ++n: ";
    n.display();

    cout << "Returned value: ";
    pre.display();

    Number post = n++;

    cout << "\nReturned value from n++: ";
    post.display();

    cout << "After n++: ";
    n.display();

    return 0;
}