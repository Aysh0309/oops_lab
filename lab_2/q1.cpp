#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number" << endl;
    cin>> n;

    if(n<=2)
    cout<<n<< endl;
    else
    {
        long long ans=1;
        for(int i=2;i<=n;i++){
        ans*=i;
    }
    cout<<ans<<endl;
    }
}