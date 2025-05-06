#include <iostream>
using namespace std;	

int main() {
	cout<<"find the given number is palindrome or not"<<endl;	
	int n;
	cout << "enter the number" << endl;
	cin>>n;	
	int original = n;
	int reversed = 0;
	while (n > 0) {
		int digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}
	if (original == reversed) {
		cout << original << " is a palindrome." << endl;
	}
	else {
		cout << original << " is not a palindrome." << endl;
	}
}