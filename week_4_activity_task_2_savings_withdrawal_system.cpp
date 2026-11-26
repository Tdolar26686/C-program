 #include <iostream>
using namespace std;

int main()
{
    double balance, withdrawalAmount;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0)
    {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance)
        {
            cout << "Insufficient balance!" << endl;
            break;
        }

        if (withdrawalAmount <= 0)
        {
            cout << "Enter a valid withdrawal amount." << endl;
            continue;
        }

        balance = balance - withdrawalAmount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }

    cout << "\nTransaction ended." << endl;

    return 0;
}
