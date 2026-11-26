#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent()
    {
        cout << "Enter student name: ";
        getline(cin >> ws, studentName);

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment()
    {
        double payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance)
        {
            feeBalance = feeBalance - payment;

            cout << "Payment successful!" << endl;
        }
        else if (payment > feeBalance)
        {
            cout << "Payment exceeds fee balance."
                 << endl;
        }
        else
        {
            cout << "Invalid payment amount."
                 << endl;
        }
    }

    void displayStatus()
    {
        cout << "\n------ STUDENT FEE STATUS ------"
             << endl;

        cout << "Student Name: "
             << studentName << endl;

        cout << "Admission Number: "
             << admissionNumber << endl;

        cout << "Remaining Fee Balance: "
             << feeBalance << endl;
    }
};

int main()
{
    Student student1;

    student1.inputStudent();

    student1.makePayment();

    student1.displayStatus();

    return 0;
}
