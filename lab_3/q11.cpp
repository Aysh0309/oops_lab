#include<iostream>
using namespace std;

class Factorial {
public:
    int n;

    void fact() {
        long long f = 1;

        for(int i = 1; i <= n; i++)
            f *= i;

        cout << "Factorial = " << f<<endl;
    }
};

int main() {
    Factorial f;
    cout<<"enter a number\n";
    cin >> f.n;
    f.fact();

    return 0;
}