#include<iostream>
using namespace std;
int main()
    {
        float p, r, t;
        cout<<"Enter the principal amount, rate of interest and time in years"<< endl;
        cin>> p>> r>> t;
        float si, ci;
        si=(p*r*t)/100;
        ci=p*(pow((1+r/100),t));
        cout<< "Simple interest is "<< si<< endl;
        cout<< "Compound interest is "<< ci<< endl;
    }