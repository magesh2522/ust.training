#include<iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mt;
int count = 0;

//using namespace std;

void printNumbers(string name) {

	while (true) {
		mt.lock();
		if (::count <= 1000) {
			cout << "Thread id :"<<name << ::count++ << endl;

		}
		else {
			mt.unlock();
			break;


		}
		mt.unlock();
	}
	//mt.unlock();
}

int main() {
	thread t1(printNumbers ,"thread1");
	thread t2(printNumbers, "thread2");
	thread t3(printNumbers, "thread3");


	t1.join();
	t2.join();
	t3.join();
}