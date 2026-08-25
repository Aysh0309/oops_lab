#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n ;
        cin>> n;
        int len =2*n;
        vector<int> a(len);
        for(int i=0;i<len;i++)
        cin>> a[i];
        vector<int> seen(n+1,0),single(n+1,0);
        vector<long long> st,stSize;
        long long ans=0;
        for(int i=0;i<len;i++){
            int val=a[i];
            if(single[val]){
                ans+=1;
                single[val]=0;
            }
            else if(!seen[val]){
                seen[val]=1;
                st.push_back(val);
                stSize.push_back(1);
            }
            else{
                long long sum=0;
                vector<int> crossed;
                while(st.back()!=val){
                    crossed.push_back(st.back());
                    sum+=stSize.back();
                    stSize.pop_back();
                    st.pop_back();
                }

                    sum+=stSize.back();
                    stSize.pop_back();
                    st.pop_back();

                    sum+=1;

                    if(!crossed.empty()){
                        ans+=sum*sum;
                        for(auto x:crossed)
                        single[x]=1;
                    }
                    else{
                        if(!st.empty()){
                            stSize.back()+=sum;
                        }
                        else
                        {
                            ans+=sum*sum;
                        }
                    }
            }
        }
        cout<<ans<<"\n";
    }
}
