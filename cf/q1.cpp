#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>> s;
        string bestOfAlice="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0') continue;
            string afterAlice=s.substr(0,i)+s.substr(i+1);
            bool firstTime=true;
            string bestOfBob="";

            for(int j=0;j<afterAlice.size();j++){
                if(afterAlice[j]!='1') continue;
            string afterBob=afterAlice.substr(0,j)+afterAlice.substr(j+1);

            if(firstTime || bestOfBob>afterBob)
            {bestOfBob=afterBob;
            firstTime=false;}
            }

            if(bestOfAlice.size()==0 || bestOfBob>bestOfAlice)
            bestOfAlice=bestOfBob;
        }
        cout<<bestOfAlice<<endl;

    }
}