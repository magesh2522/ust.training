#include<iostream>
using namespace std;

int main() {
	int arr[] = { 101,201,333 };
	cout << "cap/size of array="<<sizeof(arr) << endl;
	cout<<"Address of arr[0]="<<arr[0] << endl;
	cout<<"Address of arr[1]="<<arr[1] << endl;
	cout<<"Address of arr[2]="<<arr[2] << endl;
	cout << "Address of arr[3]=" << arr[3] << endl;

	for (int i = 0;i < 3;i++) {
		cout << "arr[" << i << "]=" << arr[i] << endl;
		arr[0] = 222;
		arr[1] = arr[0] * 10;
		for (int i = 0;i < 3;i++) {
			cout << "arr[" << i << "]=" << arr[i] << endl;

		}
	}


}