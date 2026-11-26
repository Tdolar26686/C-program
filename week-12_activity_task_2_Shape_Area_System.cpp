#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double calculateArea() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    void inputRadius() {
        cout << "Enter circle radius: ";
        cin >> radius;
    }

    double calculateArea() override {
        const double PI = 3.14159;
        return PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void inputDimensions() {
        cout << "Enter rectangle length: ";
        cin >> length;

        cout << "Enter rectangle width: ";
        cin >> width;
    }

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    // Input dimensions
    circle.inputRadius();
    rectangle.inputDimensions();

    // Base class pointer
    Shape* ptr;

    // Calculate circle area
    ptr = &circle;
    cout << "\nArea of Circle: "
         << ptr->calculateArea() << endl;

    // Calculate rectangle area
    ptr = &rectangle;
    cout << "Area of Rectangle: "
         << ptr->calculateArea() << endl;

    return 0;
}
