#include <iostream>
using namespace std;

int sq(int n, int p)
{
    int ans = 1;

    for(int i = 0; i < p; i++)
        ans *= n;

    return ans;
}

void armstrong1()
{
    int n, temp, digit, sum = 0, digits = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += sq(digit, digits);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";
}

bool armstrong2()
{
    int n, temp, digit, sum = 0, digits = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += sq(digit, digits);
        temp /= 10;
    }

    return sum == n;
}
void armstrong3(int n)
{
    int temp = n, digit, sum = 0, digits = 0;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += sq(digit, digits);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";
}

bool armstrong4(int n)
{
    int temp = n, digit, sum = 0, digits = 0;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += sq(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    //a
    armstrong1();

    // b
    if(armstrong2())
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";

    // c
    int n;
    cout << "Enter number: ";
    cin >> n;
    armstrong3(n);

    // d
    cout << "Enter number: ";
    cin >> n;

    if(armstrong4(n))
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";

    return 0;
}