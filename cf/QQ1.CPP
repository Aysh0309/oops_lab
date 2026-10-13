#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n ;
        vector<long long> val(n);
        for(int i=0;i<n;i++){
            cin>> val[i];
        }
        if(n-4 < 2)
        {cout<< 0<<endl;
        continue;}
        else{
            vector<long long> v(n-4);
            for(int i=0;i<n-4;i++){
                v[i]=val[i]+val[i+2]-val[i+4];
            }
            long long ans=0;
            unordered_map<long long,long long> mpp;
            for(int i=0;i<n-4;i++){
                if(i>=5){
                    mpp[v[i-5]]++;
                }
                if(mpp.count(v[i]))
                ans+=mpp[v[i]];
                if(i-1>=0 && v[i-1]==v[i]) ans++;
                 if(i-3>=0 && v[i-3]==v[i]) ans++;

            }
            cout<< ans << endl;
        }
    }
}