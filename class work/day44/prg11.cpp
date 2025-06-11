#include <iostream>
#include <thread >
#include <mutex>

using namespace std;
mutex mtx;////lock_gurd<mutex. lock (mtx)
class Counter {
	int x;
public:
	Counter():x(0){}
	void increment(const string tName) {
		for (int i = 0;i < 5;i++) {
			mtx.lock();
			x += 2;
			cout << "\n "<<tName<<"incress x by "<<x << endl;
			mtx.unlock();
		}
	}
	int get() {
		return x;

	}
};

int main() {
	Counter c;
	thread t1(&Counter::increment, &c,"thread 1");
	thread t2(&Counter::increment, &c,"thread 2");

	t1.join();
	t2.join();

	//c.increment();
	cout << c.get() << endl;

}
