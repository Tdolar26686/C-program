#include <iostream>
#include <fstream>
using namespace std;

// Structure to store student information
struct Student {
    char name[50];
    char registrationNumber[30];
    double totalMarks;
};

int main() {
    Student student;

    // Open binary file for reading
    ifstream file("results.dat", ios::binary);

    if (!file) {
        cout << "Error opening results.dat file!" << endl;
        return 1;
    }

    cout << "--- STUDENT EXAMINATION RESULTS ---" << endl;

    // Read and display all student records
    while (file.read(reinterpret_cast<char*>(&student),
                     sizeof(student))) {

        cout << "\nStudent Name: " << student.name << endl;
        cout << "Registration Number: "
             << student.registrationNumber << endl;
        cout << "Total Marks: " << student.totalMarks << endl;
    }

    // Close the file
    file.close();

    return 0;
}
