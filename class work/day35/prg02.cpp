#include <iostream>
#include<thread>
#include <chrono>
#include<fstream>

using namespace std;

enum LogginLeval {
	INFO,
	DEBUG,
	WARNING,
	ERROR,
};
class loger {
	ofstream fileOut;
public:
	loger(const char* f1) {
		try {
			fileOut.open(f1, ios::app);
			if (!fileOut.is_open()) {
				throw "Error opening File";
			}
		}
	}
};
