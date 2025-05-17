#include <iostream>
#include<cstdlib>
using namespace std;



int main() {
    for (int i = 2; i <= 10; i++) { // Loop through numbers 2 to 10
        cout << "Multiplication Table for " << i << ":\n";
        for (int j = 1; j <= 10; j++) { // Multiplication up to 10
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl; // Adding space between tables
    }
    return 0;
}
