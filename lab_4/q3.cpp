#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 123.456789;

    cout << "Using setw():\n";
    cout << setw(10) << 123 << endl;

    cout << "\nUsing setfill():\n";
    cout << setfill('*') << setw(10) << 123 << endl;

    cout << "\nUsing setprecision():\n";
    cout << setprecision(5) << num << endl;

    cout << "\nUsing setprecision() with fixed:\n";
    cout << fixed << setprecision(3) << num << endl;

    return 0;
}