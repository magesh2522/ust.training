#include <iostream>
using namespace std;

void brokenClock(int hour) {
    cout << "The clock will ring at these minutes for hour " << hour << ": ";
    for (int minute = 1; minute <= 59; ++minute) {
        if (hour % minute == 0) {
            cout << minute << " ";
        }
    }
    cout << endl;
}

int main() {
    int hour;
    cout << "Enter the hour: ";
    cin >> hour;
    if (hour > 0 && hour <= 12) {
        brokenClock(hour); 
    }
    else {
        cout << "Invalid hour. Please enter a value between 1 and 12." << endl;
    }

    return 0;
}
/*3. Broken Clock
A magical clock only rings when the current minute is a divisor of the hour shown.
Given an hour value, print all minutes when the clock will ring.*/