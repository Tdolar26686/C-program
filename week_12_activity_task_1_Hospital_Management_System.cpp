#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    // Pure virtual function
    virtual double calculateSalary() = 0;

    // Non-virtual function
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived class Doctor
class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    void inputDetails() {
        cout << "\nEnter doctor's name: ";
        getline(cin >> ws, staffName);

        cout << "Enter staff ID: ";
        cin >> staffID;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        cout << "Enter allowance: ";
        cin >> allowance;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

// Derived class Nurse
class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    void inputDetails() {
        cout << "\nEnter nurse's name: ";
        getline(cin >> ws, staffName);

        cout << "Enter staff ID: ";
        cin >> staffID;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        cout << "Enter overtime pay: ";
        cin >> overtimePay;
    }

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    Doctor doctor;
    Nurse nurse;

    // Input details
    doctor.inputDetails();
    nurse.inputDetails();

    // Base class pointer
    MedicalStaff* ptr;

    // Display doctor's details and salary
    cout << "\n--- DOCTOR DETAILS ---" << endl;
    ptr = &doctor;
    ptr->displayDetails();
    cout << "Total Salary: " << ptr->calculateSalary() << endl;

    // Display nurse's details and salary
    cout << "\n--- NURSE DETAILS ---" << endl;
    ptr = &nurse;
    ptr->displayDetails();
    cout << "Total Salary: " << ptr->calculateSalary() << endl;

    return 0;
}
