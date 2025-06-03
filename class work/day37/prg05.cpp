#include<iostream>
#include<array>

using namespace std;
//apply a callibrace factor and it will give display average calibated reading for each sensor;

class sensor {
private:
	array<array<float, 5>, 3>read;//reading 2d arr 3 sensor & 5 readings
	array<float, 3>calibration;//each sensor calibration value 
public:
	sensor() {
		read = { {///intialize the value 
			{23.4,22.3,25.6,21.6,30.1},
			{15.4,17.8,19.4,19.3,18.3},
			{12.3,15.8,19.3,17.3,13.7}
			}
		};
		calibration = { 0.5f,-0.3f,1.2f };
	}
	void displayCalibration() {
		for (size_t i = 0;i < read.size();++i) {//sensor (i)
			float sum = 0;
			for (float val : read[i]) {
				float calibrated = val + calibration[i];
				sum + calibrated;//each reading sensor calibration 
			}
			float avg = sum / read[i].size();

			cout << "sensor Temprature:" << i + 1 << "reading is:" << avg << endl;//getting average
		}
	}
};
int main() {
	sensor s;
	s.displayCalibration();
	return 0;
}