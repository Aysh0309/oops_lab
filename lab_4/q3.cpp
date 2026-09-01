// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double num = 123.456789;

//     cout << "Using setw():\n";
//     cout << setw(10) << 123 << endl;

//     cout << "\nUsing setfill():\n";
//     cout << setfill('*') << setw(10) << 123 << endl;

//     cout << "\nUsing setprecision():\n";
//     cout << setprecision(5) << num << endl;

//     cout << "\nUsing setprecision() with fixed:\n";
//     cout << fixed << setprecision(3) << num << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>   // for setw, setfill, setprecision
using namespace std;

int main() {
    int num = 123;
    double pi = 3.1415926535;

   
    cout << "Using setw(6): " << setw(6) << num << endl;
    cout << "Using setw(10): " << setw(10) << num << endl;

    
    cout << "Using setw(6) with setfill('*'): " << setfill('*') << setw(6) << num << endl;
    cout << "Using setw(6) with setfill('0'): " << setw(6) << setfill('0') << num << endl;

   
    cout << "Pi with setprecision(3): " << setprecision(3) << pi << endl;
    cout << "Pi with setprecision(6): " << setprecision(6) << pi << endl;
    cout << "Pi with setprecision(10): " << setprecision(10) << pi << endl;

    return 0;
}