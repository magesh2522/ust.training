#pragma once
#include <iostream>

using namespace std;

class Employee {
	int e_id;
	string e_name;
	string e_address;
	int e_phNo;
public:
	Employee();

	void set_e_id(int);
	void set_e_name(string);
	void set_e_address(string);
	void set_e_phNo(int);

	void get_e_id();
	void get_e_name();
	void get_e_address();
	void get_e_phNo();


	int Employee::get_e_id{ return = this->e_id; }
	int Employee::get_e_name{ return = this->e_name; }
	int Employee::get_e_address{ return = this->e_address; }
	int Employee::get_e_phNo{ return = this->e_phNo; }






};