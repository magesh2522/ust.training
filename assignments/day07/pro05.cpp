#include <iostream>
using namespace std;

void convertHours(int hours) {
    int minutes = hours * 60;    
    int seconds = minutes * 60; 

    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours; 

    convertHours(hours);

    return 0;
}
/*Convert Hours into Minutes and Seconds
Problem
Write a function that converts hours into minutes and seconds.

Hint:

1 hour = 60 minutes.
1 minute = 60 seconds.
Multiply properly and print separately.
*/