#include <iostream>

using namespace std;

int main() {
    int arr[5];  
    int  gValue = 0; 

   
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i]; 
    }

 
    cout << "You entered the following numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": " << arr[i] << endl;
    }
    cout << "enter the search list value=" << endl;
    cin >> gValue;
    for(int i = 0; i < 5; i++) {
        if (arr[i] == gValue) {
			cout << "Found " << gValue << " at index " << i << endl;
			break; 
		}
		else if (arr[i]==gValue) {
			cout << "Not Found" << endl;

        }
    }

    return 0;
}
