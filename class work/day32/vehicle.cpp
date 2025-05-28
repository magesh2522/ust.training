#include <iostream>
using namespace std;

class Vehicle {
protected:
	float price;
public:
	void setPrice(float p) {
		price = p;

	}
	float getPrice() {
		return price;
	}
};
class Car :public Vehicle {
protected:
	int seatCapacity;
	int numberofDoors;
	string FuelType;
public:
	void setCarDetails(int seats, int doors, string fuel) {
		seatCapacity = seats;
		numberofDoors = doors;
		FuelType = fuel;
	}
	void displayCarDetails() {
		cout << "Price :" << price << endl;
		cout << " Seats :" << seatCapacity << endl;
		cout << " Doors :" << numberofDoors << endl;
		cout << "Fuel :" << FuelType;

			

	}
};
class MotorCycle :public Vehicle {
protected:
	int numberofCylinder;
	int numberofGears;
	int numberofWheels;
public:
	void setbikeDetails(int cylinder, int gears, int wheels) {
		numberofCylinder = cylinder;
		numberofGears = gears;
		numberofWheels = wheels;
	}
	void displaybikeDetails() {
		cout << "Price :" << price << endl;
		cout << "Number Of Cylinder :" << numberofCylinder << endl;
		cout << "Number Of Gears :" << numberofGears << endl;
		cout << "Number Of Wheels ;" << numberofWheels << endl;
	}
};
	class Audi :public Car {
		string modelType;
	public:
		void setModelType(string model) {
			modelType = model;
		}
		void displayAudiDetails() {
			displayCarDetails();
			cout << "Model Type: " << modelType << endl;

		}

	};
	class Yamaha :public MotorCycle {
		string madeType;
	public:
		void setModelType(string made) {
			madeType = made;
		}
		void displayYamahaDetails() {
			displaybikeDetails();
			cout << "Made type :" << madeType << endl;

		}
	};

	int main() {
		Audi audicar;
		Yamaha  yamahabike;

		audicar.setPrice(1000000);
		audicar.setCarDetails(7, 4, "Petrol");
		audicar.setModelType("A123\n");

		yamahabike.setPrice(100000);
		yamahabike.setbikeDetails(2, 5, 2);
		yamahabike.setModelType("R15");

		cout << "***---Audi Car---***" << endl;
		audicar.displayAudiDetails();
		cout << "***---R15 Bike---***" << endl;
		yamahabike.displayYamahaDetails();
		return 0;



	}
