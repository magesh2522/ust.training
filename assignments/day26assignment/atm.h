#pragma once
#pragma once
class Acc
{
protected:
	int balance, amt, newbalance;
	char holder[30];
public:
	void setName(char*);
	char* getName();
	void currentBal();
	void setDeposit(int);
	int getDeposit();
	void setWithdraw(int);
	int getWithdraw();
	void displayBalance();

};