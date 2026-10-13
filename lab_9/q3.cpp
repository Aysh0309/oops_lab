#include <iostream>
using namespace std;

class Student{
    string name;
    int marks;

    public:
    void get_student_details(){
        cout<<"Enter Student name and marks :\n";
        getline(cin,name);
        cin>> marks;
    }
    void student_display(){
        cout<< name <<" " << marks<<" ";
    }
};

class Sports{
    int score;
    string sport_name;
    public:
    void get_score(){
        cout<<"Enter Name of Sports and Score"<<endl;
        cin>> sport_name>> score;
    }
    void sport_display(){
        cout<< sport_name<<" "<< score<<endl;
    }
};

class Result:public Student, public Sports{

    public:
    void get_and_show_result(){
    get_student_details();
    get_score();
    student_display();
    sport_display();
    }
};

int main(){
    Result s;
    s.get_and_show_result();
}