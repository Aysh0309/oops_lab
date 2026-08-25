#include<iostream> 
using namespace std;

int main(){
    cout<< "Enter the radius of the circle "<<endl;
    float r;
    cin>> r;
    if(r>=0)
    cout << 3.14*r*r;
    else
    cout<<" Invalid radius";

    cout<< endl;
}