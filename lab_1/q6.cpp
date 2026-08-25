#include <iostream> 
using namespace std;
int main(){
    float a,b;
    cout<< "Enter the two  numbers" << endl;
    cin>> a>> b;
    cout<<"Enter 1 for multiplication and 2 for division and 3 for addition and 4 for subtraction"<< endl;
    int c;
    cin>> c;
    if(c==1)
    cout<<a*b;
    else if(c==2)
    cout<<a/b;
    else if(c==3)
    cout<<a+b;
    else if(c==4)
    cout<<a-b;
    else 
    cout<< "Invalid input";
    
    cout<<endl;
}