
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // Pure virtual
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

 class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* s1 = new Rectangle(10, 5);
    Shape* s2 = new Circle(7);

    cout << "Rectangle Area: " << s1->area() << endl;
    cout << "Circle Area: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}
