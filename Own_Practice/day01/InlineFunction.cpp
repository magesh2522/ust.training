#include <iostream>
using namespace std;


inline int max(int a, int b) {
	return a > b ? a : b;

}
int main() {
	cout << max(10, 20)<<endl;
	cout << "" << max(90, 100) << endl;
	cout << max(30, 20) << endl;

	return 0;

}

//there is an important feauture in c++.called an inline function that is commonly used with classes ,,,
// in c++ you can create short function that are not actully called ,rather their code is expanded in line at the point of each inovocation 