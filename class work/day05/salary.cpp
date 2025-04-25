#include <iostream>
using namespace std;
void salary()
{
	int grossSal=0, basicSal, houseAllowance, dearnessAllowance;
	cout << "enter the basic salary";
	cin >> basicSal;

	houseAllowance = (basicSal*40)/100;
	dearnessAllowance = (basicSal*20)/100;
	grossSal = basicSal+ houseAllowance + dearnessAllowance;
	cout << grossSal;
}