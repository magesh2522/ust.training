#include<iostream>
#include "atm.h"
using namespace std;
void Acc::setName(char* s)
{
	strcpy_s(holder, s);
}
char* Acc::getName()
{
	return holder;
}
void Acc::currentBal()
{
	balance = 1;
}
void Acc::setDeposit(int amt)
{
	balance = balance + amt;
}
int Acc::getDeposit()
{

	return balance;
}
void Acc::setWithdraw(int amt)
{
	balance = balance - amt;
}
int Acc::getWithdraw()
{

	return balance;
}

void Acc::displayBalance()
{
	cout << "Account holder name: " << getName() << endl;
	cout << "Current balance after deposit: " << getDeposit() << endl;
	cout << "Current balance after withdrawal:  " << getWithdraw();
}