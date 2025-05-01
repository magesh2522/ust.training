#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) { 
            sum += i;       
        }
    }

    return sum == num;
}

int main() {
    int armyNumber;
    cout << "Enter the army number: ";
    cin >> armyNumber; 

    if (isPerfectNumber(armyNumber)) {
        cout << "The army is perfect!" << endl;
    }
    else {
        cout << "The army is not perfect!" << endl;
    }

    return 0;
}
/* King's Perfect Army
A king decided only perfect armies can enter the final battle.
An army's number is perfect if the sum of its divisors equals the number itself.
Check whether a given army number is perfect.

*/
