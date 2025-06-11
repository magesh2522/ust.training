#include <iostream>
#include <thread>
using namespace std;


void print(string name, int x, int y) {
	for (x;x < y;x++)
		cout << name << "x= " << x << ";y= " << y << endl;
}
int main() {
	thread t1(print , "thread1", 10, 80);
	thread t2(print, "thread2", 100, 800);

	t1.join();
	t2.join();



}