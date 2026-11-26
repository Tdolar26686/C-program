#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter class: ";
        getline(cin >> ws, studentClass);
    }

    void displayStudent() {
        cout << "\n--- STUDENT DETAILS ---" << endl;

        // Display inherited details
        displayPerson();

        cout << "Admission Number: "
             << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student student;

    student.inputDetails();
    student.displayStudent();

    return 0;
}
