#include <iostream>
using namespace std;

int main() {
    double k, a;

    cout << "Enter speed in kilometers per hour: ";
    cin >> k;

    a = k * 0.621371; 

    cout << "Speed in miles per hour: " << a << endl;

    return 0;
}
