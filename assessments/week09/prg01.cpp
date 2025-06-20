#include <iostream>
#include <mutex>
#include<vector>
#include<thread>
#include<fstream>

using namespace std;

class CustomerBilling {
private:
	string MSISDN;
	string t_MSISDN;
	string brand;
	string MMT;
	string MMC;
	string MOC;
	string SMS_MO;
	string SMS_MT;
	string GPRS;
	//int inInter, outInter, inExter, outExter;

	string callType;
	string call_dur;
	string gprs_d;
	string gprs_u;

public:
	CustomerBilling(string MSISDN, string t_MSISDN, string brand, string MMT, string MMC,
		string MOC, string SMS_MO, string SMS_MT, string GPRS,string callType,string call_dur,string gprs_d,string gprs_u)
		:MSISDN(MSISDN), t_MSISDN(t_MSISDN), brand(brand), MMT(MMT), MMC(MMC), MOC(MOC), SMS_MO(SMS_MO), SMS_MT(SMS_MT),
		GPRS(GPRS) ,callType(callType),call_dur(call_dur),gprs_d(gprs_d),gprs_u(gprs_u){}
	string getMsisdn() {
		return MSISDN;
	}
};