#include <iostream>
using namespace std;

int main() {
	int batteryStatus, mobileStatus;
	cout << "mobile status(1/0): ";
	cin >> mobileStatus;
	if (mobileStatus == 1) {
		cout << "battery status(0-100): ";
		cin >> batteryStatus;
		if (batteryStatus <= 10) {
			cout << "charge is low ,plz plug on ." << endl;

		}


		cout << "charge is good" << endl;
		cout << "you can now use whatever you want." << endl;


	}
	else {
		cout << "powering on the mobile" << endl;
		mobileStatus = 1;
		cin >> batteryStatus;
		if (batteryStatus <= 10) {
			cout << "charge is low ,plz plug on ." << endl;

		}


		cout << "charge is good" << endl;
		cout << "you can now use whatever you want." << endl;

	}
}