#include <iostream> 
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers" << endl;
    cin>> a>> b;
    cout<< endl;
    cout<< "Before swapping the numbers are "<< a<< " and "<< b << endl;
    cout<<"Swapping using extra variable"<< endl;
    int c;
    c=a;
    a=b;
    b=c;
    cout<< "After swapping the numbers are "<< a<< " and "<< b << endl;
    cout<<"Swapping without using extra variable "<< endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<< "After swapping the numbers are "<< a<< " and "<< b << endl;
}
