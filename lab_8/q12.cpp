#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time operator+(Time t) {
        Time temp;

        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        if (temp.seconds >= 60) {
            temp.minutes += temp.seconds / 60;
            temp.seconds %= 60;
        }

        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes %= 60;
        }

        return temp;
    }

    void display() {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }
};

int main() {
    Time t1(5, 45, 30);
    Time t2(3, 20, 40);

    Time t3 = t1 + t2;

    t3.display();

    return 0;
}