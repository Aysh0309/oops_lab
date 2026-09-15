#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int a, int b) {
        x = a;
        y = b;
    }

    Point operator++() {
        x++;
        y++;

        return Point(x, y);
    }

    Point operator++(int) {
        Point old(x, y);

        x++;
        y++;

        return old;
    }
    Point operator+(Point p) {

        return Point(x + p.x, y + p.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    Point p1(2, 3);
    Point p2(5, 7);

    cout << "Initial p1: ";
    p1.display();

    cout << "Initial p2: ";
    p2.display();

    Point pre = ++p1;

    cout << "\nAfter ++p1: ";
    p1.display();

    cout << "Returned value: ";
    pre.display();
    Point post = p1++;

    cout << "\nReturned value from p1++: ";
    post.display();

    cout << "After p1++: ";
    p1.display();

    Point p3 = p1 + p2;

    cout << "\np1 + p2 = ";
    p3.display();

    return 0;
}