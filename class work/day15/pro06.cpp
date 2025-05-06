#include <iostream>
using namespace std;

int main() {
	cout<<"find the sum of first natural numbers"<<endl;
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

}