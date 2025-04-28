#include <iostream>
using namespace std;

int countZero(int num) {
	if (num == 0) {
		return 1; 
	}
	if (num < 10) {
		return 0; 
	}
	int count = (num % 10 == 0) ? 1 : 0; 
	return count + countZero(num / 10); 

}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int count = countZero(num);
	cout << "Number of zeros in " << num << " is: " << count << endl;
	return 0;
}