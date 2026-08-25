#include<iostream>
using namespace std;

double findPow(double m,int n){
    double ans=1;
    while(n--){
        ans*=m;
    }
    return ans;
}
double findPow(double m){
    return m*m;
}

int main(){
    float m;
    int n;
    cout<<"Enter number and its power\n";
    cin>>m>>n;
    cout<<findPow(m,n)<<"\n";
    cout<<"Enter a number \n";
    cin>>m;
    cout<<findPow(m)<<"\n";

}