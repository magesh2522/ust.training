#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Distance(int f, int i) {
        feet = f;
        inches = i;
        normalize();
        cout << "Parameterized constructor called.\n";
    }

    // Destructor
    ~Distance() {
        cout << "Destructor called for Distance object.\n";
    }

    // Function to normalize inches >= 12 into feet
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    Distance operator+(const Distance& d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;
        result.normalize();
        return result;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8);      // 5 feet 8 inches
    Distance d2(3, 11);     // 3 feet 11 inches

    Distance d3 = d1 + d2;  // Add using overloaded +

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
