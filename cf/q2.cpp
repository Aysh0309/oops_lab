#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        for(int i=0;i<m;i++){
            cin>> b[i];
        }
        bool isPossible=true;
        if(n<2*m)
        isPossible=false;
        else{
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());

            for(int i=0;i<m && isPossible;i++){
                int low=a[i];
                int high=a[n-m+i];
                int val=b[i];
                if(val>low && val<high )
                continue;
                else
                isPossible=false;
            }

        }
        if(isPossible)
        cout<<"YES"<< "\n";
        else
        cout<<"NO" << "\n";
    }
}