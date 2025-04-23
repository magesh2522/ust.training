#include<iostream>
#include "stringhendel.h"
using namespace std;

int main(int args,char *argv[])
{
	/*cout << args << endl;
	cout << *argv << endl;

	cout <<" * argv[0]:" <<argv[0] << endl;
	cout << " * argv[1]:" << argv[1] << endl;
	cout << " * argv[2]:" << argv[2] << endl;

	*/
	for (int i = 0;i < args;i++)
		cout << "args[i]:" << i << ":" << argv[i] << endl;
	int res = atoi(argv[1]) + atoi (argv[2]);

	calFun(args,argv);

	cout << "res" << res << endl;




	return 0;


}