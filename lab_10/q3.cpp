#include<iostream>
using namespace std;

class Employee{
protected:
    int empId;
    string name;
    double baseSalary;
public:
    Employee(int e,string n,double bs){
        empId=e;
        name=n;
        baseSalary=bs;
    }
    void displayEmployee(){
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Base Salary: "<<baseSalary<<endl;
    }
    ~Employee(){
        cout<<"Employee destructor called "<<endl;  
    }
};
class Manager: public Employee{
    private:
    double bonus;
    public:
    Manager(int e,string n,double bs,double b):Employee(e,n,bs){
        bonus=b;
    }
    void calculateSalary(){
        double totalSalary=baseSalary+bonus;
        displayEmployee();
        cout<<"Total Salary of Manager: "<<totalSalary<<endl;
    }
};
class Developer: public Employee{
    private:
    int overtimeHours;
    public:
    Developer(int e,string n,double bs,int oh):Employee(e,n,bs){
        overtimeHours=oh;
    }
    void calculateSalary(){
        double totalSalary=baseSalary+(overtimeHours*500);
        displayEmployee();
        cout<<"Total Salary of Developer: "<<totalSalary<<endl;
    }

};
class Intern: public Employee{
    private:
    double stipend;
    public:
    Intern(int e,string n,double bs,double s):Employee(e,n,bs){
        stipend=s;
    }
    void calculateSalary(){
        double totalSalary=stipend;
        displayEmployee();
        cout<<"Total Salary of Intern: "<<totalSalary<<endl;
    }
};
int main(){
    Manager m1(101,"Aayush",50000,10000);
    Developer d1(102,"Rohan",40000,20);
    Intern i1(103,"Riya",0,15000);

    cout<<"Manager Details:\n"<<endl;
    m1.calculateSalary();
    cout<<"\nDeveloper Details:\n"<<endl;
    d1.calculateSalary();
    cout<<"\nIntern Details:\n"<<endl;
    i1.calculateSalary();

    return 0;
}