#include <iostream>
using namespace std;

int reverseArr1(int num) {
	int digit [10];
	int count = 0;

	while (num > 0) {
		digit[count] = num % 10;
		num /= 10;
		count++;
	}
    int reversedNum = 0;
    for (int i = 0; i < count; i++) {
        reversedNum = reversedNum * 10 + digit[i]; 
    }

    return reversedNum;
}

int main() {
    int num = 12345;  
    cout << "Original Number: " << num << endl;

    int reversed = reverseArr1(num);  
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
