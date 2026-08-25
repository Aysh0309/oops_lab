#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Addition of two integers: " << add(10, 20) << endl;

    cout << "Addition of floats: " << add(10.5f, 20.8f) << endl;

    cout << "Addition of three integers: " << add(10, 20, 30) << endl;

    return 0;
}