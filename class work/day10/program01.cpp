#include <iostream>
using namespace std;

int count0=0;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
int count6=0;
int count7=0;
int count8=0;
int count9=0;

int getDigits(long long int);
void display();

int main() {
	long long int num;
    long long int temp, r;
	num = 34562999000;
	temp = num;
	while (temp) {
		r = temp % 10;

	
		switch (r)
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		default:cout << "Invalid digit" << endl;
			break;

		}
		temp = temp / 10;
	}
	void display();
	cout << "count of 0 is: " << count0 << endl;
	cout << "count of 1 is: " << count1 << endl;
	cout << "count of 2 is: " << count2 << endl;
	cout << "count of 3 is: " << count3 << endl;
	cout << "count of 4 is: " << count4 << endl;
	cout << "count of 5 is: " << count5 << endl;
	cout << "count of 6 is: " << count6 << endl;
	cout << "count of 7 is: " << count7 << endl;
	cout << "count of 8 is: " << count8 << endl;
	cout << "count of 9 is: " << count9 << endl;

	return 0;
}



