#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin >> ws, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    void borrowBook()
    {
        if (copiesAvailable > 0)
        {
            copiesAvailable--;

            cout << "Book borrowed successfully!"
                 << endl;
        }
        else
        {
            cout << "No copies available."
                 << endl;
        }
    }

    void displayDetails()
    {
        cout << "\n------ BOOK DETAILS ------" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: "
             << copiesAvailable << endl;
    }
};

int main()
{
    Book book1;

    book1.inputDetails();

    book1.borrowBook();

    book1.displayDetails();

    return 0;
}
