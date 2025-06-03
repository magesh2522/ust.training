#include <iostream>
#include<fstream>
using namespace std;


int main() {
	int count = 0;
	ofstream fOut("emp.txt");
	for (int i = 1;i < 10;i++) {
		fOut << i << endl;
		for (int j = 1;j < 10;j++) {
			fOut << i << "x" << j << "=" << i * j << endl;
		}
}

		//fOut << "Hello World";
		fOut.close();
		return 0;
	
}