#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin >> ws, studentName);

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Function to make fee payment
    void makePayment() {
        double payment;

        cout << "\nEnter amount to pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance = feeBalance - payment;

            cout << "Payment successful!" << endl;
        }
        else {
            cout << "Invalid payment amount!" << endl;
        }
    }

    // Function to display student status
    void displayStatus() {
        cout << "\n--- STUDENT FEE STATUS ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: "
             << admissionNumber << endl;
        cout << "Remaining Fee Balance: "
             << feeBalance << endl;
    }
};

int main() {
    // Creating a Student object
    Student student;

    // Input student details
    student.inputStudentData();

    // Process fee payment
    student.makePayment();

    // Display updated fee status
    student.displayStatus();

    return 0;
}
