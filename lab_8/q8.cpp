#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display() {
        cout << hours << " hours, "
             << minutes << " minutes, "
             << seconds << " seconds" << endl;
    }
};

int main() {
    Time t(10, 30, 45);
    t.display();

    return 0;
}