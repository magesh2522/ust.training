#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int year;
    cin >> year; 

    if (isLeapYear(year)) {
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}

/*Check if a Year is a Leap Year
Problem:
Write a function to check whether a given year is leap year or not.

Hint:
Leap year if:

Divisible by 4 and not divisible by 100, or
Divisible by 400.
Use logical operators && and ||.*/
