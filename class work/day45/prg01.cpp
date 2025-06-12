#include <iostream>
#include <thread>
#include <mutex>
using namespace std;


/*std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    std::lock_guard<std::mutex> lock1(mtx1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(mtx2); // waits for mtx2
    std::cout << "Thread 1 finished\n";
}

void thread2() {
    std::lock_guard<std::mutex> lock2(mtx2);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock1(mtx1); // waits for mtx1
    std::cout << "Thread 2 finished\n";
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();
}*/

mutex mt1;
mutex mt2;

void thread1() {
    lock_guard<mutex>lock1(mt1);
    this_thread::sleep_for(chrono::milliseconds(100));
    lock_guard<mutex>lock2(mt2);
    cout << "thread one finish:" << endl;

}
void thread2() {
    lock_guard<mutex>lock1(mt1);
    this_thread::sleep_for(chrono::milliseconds(100));
    lock_guard<mutex>lock2(mt2);
    cout << "thread two finish:" << endl;
}
int main() {
   thread t1(thread1);
  thread t2(thread2);

    t1.join();
    t2.join();




}
