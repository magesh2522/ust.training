#include <iostream>
#include <thread>
#include <windows.h>
#include <mutex>


using namespace std;
mutex mt;
int amt = 0;
void addAmount(int a) {
	mt.lock();
	cout << "Amount add" << amt << endl;
	amt += a;
	Sleep(10);
	mt.unlock();
}
void sumAmount(int b) {
	cout << "Amount add" << amt << endl;

	amt -= b;

}
int main() {
	thread t1(addAmount, 290);
	thread t2(sumAmount, 300);

	t2.join();
	cout << "AMOUNT IS :" << amt << endl;

	t1.join();
	cout << "AMOUNT IS :" << amt << endl;

	return 0;



}