#include<iostream>
using namespace std;

void calfun(int args, char* argv[])
{
	switch (argv[0][1])
	{
	case'+':cout << "add the value:" <<atoi(argv[0]) + atoi(argv[1]) << endl;
		break;
	case'*':cout << "mul the value:" << atoi(argv[0]) * atoi(argv[1]) << endl;
		break;
	case'-':cout << "sub the value:" << atoi(argv[0]) - atoi(argv[1]) << endl;
		break;
	default:
		cout << "wrong" << endl;
	}
}