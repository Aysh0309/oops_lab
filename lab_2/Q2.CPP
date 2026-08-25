#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number" << endl;
    cin>> n;
    int digits=0;
    int temp=n;
    while(temp>0){
        digits++;
        temp/=10;
    }
    int ans=0;
    temp=n;
    while(temp){
        int rem=temp%10;
        ans+=pow(rem,digits);
        temp/=10;
    }
    if(ans==n){
        cout<<"The entered number is armstrong \n";

    }
    else{
        cout<<"The entered number is not armstrong \n";

    }
}