#include <iostream>
#include <thread>///header file 
using namespace std;

void val() {
    cout << "Hello from thread!\n";
}

int main() {
    thread t(val);
    t.join();//attach the process to main thread 
    cout << "End of the program:" << endl;
    cout << "End of the program Again:" << endl;///parent and child both will execute 

   // t.join();we cant give two join at the same time (joinable)
    return 0;
}