#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Circle {
protected:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
        cout << "Circle constructor called.\n";
    }

    // Function to compute area
    virtual double area() const {
        return PI * radius * radius;
    }

    // Virtual destructor
    virtual ~Circle() {
        cout << "Circle destructor called.\n";
    }
};

class Cylinder : public Circle {
private:
    double height;

public:
    // Constructor with constructor chaining
    Cylinder(double r, double h) : Circle(r) {
        height = h;
        cout << "Cylinder constructor called.\n";
    }

    // Overriding area function (surface area)
    double area() const override {
        return 2 * PI * radius * (radius + height);
    }

    // Function to compute volume
    double volume() const {
        return PI * radius * radius * height;
    }

    // Destructor
    ~Cylinder() {
        cout << "Cylinder destructor called.\n";
    }
};

int main() {
    Circle c(5);
    cout << "Area of Circle: " << c.area() << endl;

    cout << endl;

    Cylinder cyl(5, 10);
    cout << "Surface Area of Cylinder: " << cyl.area() << endl;
    cout << "Volume of Cylinder: " << cyl.volume() << endl;

    return 0;
}