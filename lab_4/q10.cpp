#include <iostream>
using namespace std;

void avg1()
{
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Average = " << (a + b) / 2 << endl;
}

float avg2()
{
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    return (a + b) / 2;
}

void avg3(float a, float b)
{
    cout << "Average = " << (a + b) / 2 << endl;
}

float avg4(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    float a, b;

    // a. No argument, no return value
    cout << "\nCase A:\n";
    avg1();


    // b. No argument, with return value
    cout << "\nCase B:\n";

    float result = avg2();

    cout << "Average = " << result << endl;


    // c. Argument, no return value
    cout << "\nCase C:\n";

    cout << "Enter two numbers: ";
    cin >> a >> b;

    avg3(a, b);


    // d. Argument, return value
    cout << "\nCase D:\n";

    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = avg4(a, b);

    cout << "Average = " << result << endl;

    return 0;
}