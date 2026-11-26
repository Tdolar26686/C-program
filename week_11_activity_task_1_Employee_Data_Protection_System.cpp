#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    // Function to input employee details
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin >> ws, employeeName);

        cout << "Enter employee ID: ";
        cin >> employeeID;

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Function to calculate net salary
    double calculateSalary() {
        double allowance = 0.10 * basicSalary;
        double netSalary = basicSalary + allowance;

        return netSalary;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "\n--- EMPLOYEE DETAILS ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp;

    // Input employee details
    emp.setEmployeeDetails();

    // Display employee details
    emp.displayEmployeeDetails();

    return 0;
}
