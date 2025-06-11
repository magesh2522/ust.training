#include <iostream>
#include <thread >

using namespace std;

void printOddNum(int N, bool flag) {
	N = 79;
	for (int i = 0;i <=N; i++) {
		if( N % 2==flag)
			cout << i << endl;
	} 
}

int main() {
	int N = 20;
	thread t1(printOddNum, N ,true);
	thread t2(printOddNum, N,false);

	t1.join();
	t2.join();

	cout << "Odd num completed " << endl;

}