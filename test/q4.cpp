
#include <iostream>
using namespace std;

class Student{

    int rollNo;
    int marks;

public:
 Student(int r,int m){
    rollNo=r;
    marks=m;
 }
 friend void compareStudent(Student s1,Student s2);
};

void compareStudent (Student s1,Student s2){
    if(s1.marks>s2.marks){
        cout<<"Student with roll number "<<s1.rollNo<<" has higher marks: "<<s1.marks<<endl;
    }
    else if(s2.marks>s1.marks){
        cout<<"Student with roll number "<<s2.rollNo<<" has higher marks: "<<s2.marks<<endl;
    }
    else{
        cout<<"Both students have equal marks."<<endl;
    }
}
int main(){
    int roll1,roll2,marks1,marks2;
    cout<<"Enter roll number and marks of first student: ";
    cin>>roll1>>marks1;
    cout<<"Enter roll number and marks of second student: ";   
    cin>>roll2>>marks2;
    Student s1(roll1,marks1);
    Student s2(roll2,marks2);
    compareStudent(s1,s2);
    return 0;
}       