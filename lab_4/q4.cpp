#include<iostream>
using namespace std;

int main(){

    int *p=new int;
    cout<<"Enter a number \n";
    cin>>*p;
    cout<<*p<<endl;

    delete p;

    cout<<"Enter number of elements \n";
    int n;
    cin>>n;

    int *arr=new int[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    delete[] arr;
    

}