#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the starting number for the countdown: ";
    cin >> n; 

    cout << "Spaceship Countdown:" << endl;
    while (n > 0) {
        cout << n << endl;
        n--;               
    }

    cout << "Liftoff!" << endl;
    return 0;
}

/*Spaceship Countdown
Before launching, a spaceship performs a countdown from a given number n to 1.
Write a program to simulate the countdown using a while loop.*/