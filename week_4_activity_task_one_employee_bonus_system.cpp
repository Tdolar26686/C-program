#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string employeeName;
    double basicSalary, bonus, totalSalary;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details for employee " << i << endl;

        cout << "Enter employee name: ";
        getline(cin >> ws, employeeName);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\n------ EMPLOYEE REPORT ------" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
