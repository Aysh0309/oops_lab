
#include<iostream>
using namespace std;

class Time{
    private:
    int hours;
    int mins;

    public:
    Time(int h,int m){
        hours=h;
        mins=m;
    }
    friend Time operator+(Time t1,Time t2);
    void display(){
        cout<<endl<<hours<<"Hours"<<endl;
        cout <<endl<< mins<<"mins" << endl;
    }

};
Time operator+(Time t1,Time t2){
        int h=t1.hours+t2.hours;
        int m=t1.mins+t2.mins;
        if(m>=60){
            h+=m/60;
            m=m%60;
        }
        return Time(h,m);
    }
int main(){
   Time t1(5,55);
   t1.display();
   Time t2(1,22);
   t2.display();
   Time t3=t1+t2;
   t3.display();
}