#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    // Creating derived class objects
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    // Creating a base class pointer
    Shape* ptr;

    // Calling draw() using the base class pointer
    ptr = &circle;
    ptr->draw();

    ptr = &rectangle;
    ptr->draw();

    ptr = &triangle;
    ptr->draw();

    return 0;
}
