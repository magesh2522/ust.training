#include<iostream>
#include "atm.h"
using namespace std;
int main()
{
	Acc a;
	char holder[] = "MAGESH KUBENDRAN";
	int amt = 10000000;
	a.setName(holder);
	a.displayBalance();
}