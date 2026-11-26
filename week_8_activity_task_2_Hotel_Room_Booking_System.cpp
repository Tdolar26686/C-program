#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDays;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        numberOfDays = days;

        cout << "\nRoom booking confirmed" << endl;
    }

    // Member function to display booking details
    void displayBooking() {
        cout << "\n--- HOTEL ROOM BOOKING DETAILS ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days Booked: " << numberOfDays << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    string name;
    int room, days;

    cout << "Enter guest name: ";
    getline(cin, name);

    cout << "Enter room number: ";
    cin >> room;

    cout << "Enter number of days booked: ";
    cin >> days;

    // Creating an object
    RoomBooking booking(name, room, days);

    // Display booking details
    booking.displayBooking();

    return 0;
}
