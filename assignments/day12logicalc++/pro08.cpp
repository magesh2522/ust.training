#include <iostream>
using namespace std;

int highestPowerOfTwo(int energy) {
    int power = 1; 
    while (power * 2 <= energy) {
        power *= 2; 
    }
    return power; 
}

int main() {
    int energyReading;
    cout << "Enter the energy reading: ";
    cin >> energyReading;
    if (energyReading <= 0) {
        cout << "Invalid energy reading. Please enter a positive integer." << endl;
    }
    else {
        cout << "Highest power of 2 less than or equal to " << energyReading << " is: "
            << highestPowerOfTwo(energyReading) << endl;
    }

    return 0;
}
/*Energy Crystals
An alien crystal's energy level is always a power of 2 (like 2, 4, 8, 16, 32...).
Given an energy reading, find the highest power of 2 less than or equal to the reading.*/
