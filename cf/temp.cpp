#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    
    A(int x,int y){
        a=x;
        b=y;
    }
};
int main(){
    A a(5,10);
    A b=a;
    cout<< b.a<<endl;
    
}