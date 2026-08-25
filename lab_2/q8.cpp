#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>> n;
    cout<<"\n" <<"\n";
    while(n){
        cout<<n<<"\n";
        n=n/10;
    }
}