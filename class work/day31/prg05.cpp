#include <iostream>
#include<string>
using namespace std;

class Vehicle {
protected:
	int wheels;
	int seats;
	string material;
	string color;
	string modeofControl;

public:
	void setvaichel(int wheels, int seats, string material, string color, string modeofControl) {
		this->wheels = wheels;
		this->seats = seats;
		this->material = material;
		this->color = color;
		this->modeofControl = modeofControl;
	}
	void display() {
		cout << "Vechicle Details" << endl;
		cout << wheels << "\t" << seats << "\t" << material << "\t";
		cout << color << "\t" << modeofControl << endl;
	}


};
class Car :
	public Vehicle {
private:
	string brand;
	string fuelType;
	int  doors;
	float price;
	string variantType;
	string model;
public:
	Car(string brand, string fuelType, int doors, float price, string variantType, string model)
	{
		this->brand = brand;


	}

	void display() {
		cout << "Car brand" << brand << endl;
		cout << "Fuel Type" << fuelType << endl;
		cout << "doors" << doors << endl;

	}

};