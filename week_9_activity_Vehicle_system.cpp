#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: "
             << yearOfManufacture << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputDetails() {
        cout << "Enter vehicle brand: ";
        getline(cin >> ws, brand);

        cout << "Enter year of manufacture: ";
        cin >> yearOfManufacture;

        cout << "Enter number of doors: ";
        cin >> numberOfDoors;

        cout << "Enter engine capacity (in litres): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\n--- CAR DETAILS ---" << endl;

        // Display inherited vehicle details
        displayVehicle();

        cout << "Number of Doors: "
             << numberOfDoors << endl;
        cout << "Engine Capacity: "
             << engineCapacity << " litres" << endl;
    }
};

int main() {
    Car car;

    car.inputDetails();
    car.displayCar();

    return 0;
}
