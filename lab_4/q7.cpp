#include <iostream>
using namespace std;

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Value: ";
    cout << a << " " << b << endl;
}

void swapAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nCall by Value:\n";
    swapValue(a, b);
    cout << "After function: " << a << " " << b << endl;


    cout << "\nCall by Address:\n";
    swapAddress(&a, &b);
    cout << "After function: " << a << " " << b << endl;

    cout << "\nCall by Reference:\n";
    swapReference(a, b);
    cout << "After function: " << a << " " << b << endl;

    return 0;
}