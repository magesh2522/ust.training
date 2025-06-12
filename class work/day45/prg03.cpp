#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

mutex mtx;
condition_variable cv;
bool pingTurn = true;

void print(const string& text, bool check) {
    for (int i = 0; i < 10; ++i) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [&]{ return pingTurn == check; });
        cout << text << endl;
        pingTurn = !pingTurn;
        cv.notify_one();
    }
}

int main() {
    thread t1(print, "Ping", true);
    thread t2(print, "Pong", false);

    t1.join();
    t2.join();

    return 0;
}