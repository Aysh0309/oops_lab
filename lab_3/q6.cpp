#include<iostream>
using namespace std;

class Time {
public:
    int sec;

    void display() {
        int h = sec / 3600;
        sec %= 3600;

        int m = sec / 60;
        int s = sec % 60;

        cout << h << ":" << m << ":" << s<<endl;
    }
};

int main() {
    Time t;
    cout<<"Enter the time in seconds\n";
    cin >> t.sec;
    t.display();

    return 0;
}