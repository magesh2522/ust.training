#include <iostream>

using namespace std;

int main() {
    int temperature;  

    cout << "Enter the temperature: ";
    cin >> temperature; 

    if (temperature > 35) {
        cout << "Hot" << endl; 
    }
    else if (temperature >= 20 && temperature <= 35) {
        cout << "Warm" << endl;  
    }
    else {
        cout << "Cold" << endl;  
    }

    return 0;
}
