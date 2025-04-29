#include <iostream>
using namespace std;

int main() {
    char ch;  

    cout << "Enter a character: ";
    cin >> ch;  
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    }
    else {
        cout << ch << " is not an uppercase letter." << endl;
    }

    return 0;
}
