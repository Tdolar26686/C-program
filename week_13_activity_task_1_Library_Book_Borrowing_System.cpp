#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string bookTitle;

    // Open file in append mode
    ofstream file("borrowed_books.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter book title: ";
    getline(cin, bookTitle);

    // Store book title in the file
    file << bookTitle << endl;

    // Close the file
    file.close();

    cout << "Book title successfully stored!" << endl;

    return 0;
}
