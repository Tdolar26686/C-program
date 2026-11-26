#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "\nAccount successfully created" << endl;
    }

    // Member function to display account details
    void displayAccount() {
        cout << "\n--- BANK ACCOUNT DETAILS ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    string name;
    int number;
    double balance;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> number;

    cout << "Enter account balance: ";
    cin >> balance;

    // Creating an object
    BankAccount account(name, number, balance);

    // Display account details
    account.displayAccount();

    return 0;
}
