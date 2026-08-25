#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    float basicSalary;
    float grossSalary;

public:

    void acceptDetails() {
        cout << "Enter Employee ID: \n";
        cin >> employeeId;

        cout << "Enter Employee Name:\n ";
        cin >> name;

        cout << "Enter Basic Salary: \n";
        cin >> basicSalary;
    }
//this is the assumption to calculate hra and da as the data in the question is not given
    void calculateGrossSalary() {
        float hra = 0.20 * basicSalary;
        float da = 0.10 * basicSalary;

        grossSalary = basicSalary + hra + da;
    }

    void displayDetails() {
        cout << "\nEmployee ID   : " << employeeId << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }

    float getGrossSalary() {
        return grossSalary;
    }

    int getEmployeeId() {
        return employeeId;
    }

    string getName() {
        return name;
    }
};

int main() {

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        employees[i].acceptDetails();
        employees[i].calculateGrossSalary();
    }

    // Display all employees
    cout << "\n========== EMPLOYEE DETAILS ==========" << endl;

    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    // Find employee with highest gross salary
    int highestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (employees[i].getGrossSalary() >
            employees[highestIndex].getGrossSalary()) {

            highestIndex = i;
        }
    }

    cout << "\n===== HIGHEST GROSS SALARY =====" << endl;

    employees[highestIndex].displayDetails();

    return 0;
}