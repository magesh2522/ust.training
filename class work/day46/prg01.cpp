#include<iostream>

using namespace std;

class Sensor {
private:
	string sensorId;
	string sensorType;
	float readingValue;
public:
	Sensor(string sensorId,string sensorType,float readingValue):sensorId(sensorId),sensorType(sensorType),
		readingValue(readingValue){}
	void setreadValue(float value) {
		readingValue = value;
	}
	float getreadingValue() {
		return readingValue;
	}
	string getsensorId() {
		return sensorId;
	}
	string getsensorType() {
		return sensorType;
	}

	virtual void display() {
		cout << "Sensor Id: " << sensorId << endl;
		cout << "Sensor Type: " << sensorType << endl;
		cout << "Reading Value: " << readingValue << endl;
	}
};

class temprature : public Sensor{
private:
	string unit;
public:
	temprature(string sensorId,float readingValue,string unit):	Sensor(sensorId,"temprature",readingValue),unit(unit){}
	void convert() {
		float value = getreadingValue();
		if (unit == "c") {
			value = (value * 9.0 / 5.0) + 32.0;
			unit = "f";
		}
		else {
			value = (value - 32.0) * 5.0 / 9.0;
			unit = "c";
		}
		setreadValue(value);


	}
	void display() override{
	Sensor::display();
		cout << "unit: " << unit << endl;
	}

};
int main() {
	temprature  t1("TS1001", 36.5, "C");
	t1.display();
	t1.convert();
	t1.display();

	return 0;
}