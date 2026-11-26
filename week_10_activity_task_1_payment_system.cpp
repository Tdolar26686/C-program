#include <iostream>
using namespace std;

class Payment {
public:
    // Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
    }

    // Card payment
    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;

        cout << "Card Payment: " << finalAmount << endl;
    }

    // Mobile payment
    void processPayment(double amount, double fee,
                        double discount) {
        double finalAmount = amount + fee - discount;

        cout << "Mobile Payment: " << finalAmount << endl;
    }
};

int main() {
    Payment payment;

    // Demonstrating cash payment
    payment.processPayment(1000);

    // Demonstrating card payment
    payment.processPayment(1000.0, 50.0);

    // Demonstrating mobile payment
    payment.processPayment(1000.0, 50.0, 100.0);

    return 0;
}
