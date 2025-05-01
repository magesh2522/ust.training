#include <iostream>
using namespace std;

int main() {
    char upper, lower;

    for (char ch = 'A'; ch <= 'J'; ++ch) {
        upper = ch;       
        lower = ch + 32;  

        cout << upper << lower;
    }

    cout << endl; 
    return 0;
}
