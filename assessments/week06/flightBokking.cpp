#include<iostream>
#include<cstring>
using namespace std;

class Flight{
private:
    string flightNumber;
	int totalSeats;
	int bookedSeats;
	public:
		Flight(string fNumber, int seats) {
			flightNumber = fNumber;
			totalSeats = seats;
			bookedSeats = 0;
		}
		void bookSeats(int seats) {
			if (bookedSeats + seats <= totalSeats) {
				bookedSeats += seats;
			}
			else {
				cout << "Not enough seats. " << endl;
			}
		}
		void showAvailability()
		{
			int availablity = totalSeats - bookedSeats;
			cout << "Flight: " << flightNumber  << " | " <<"seats Available : " << availablity << endl;

		}
};
int main() {
	Flight f1("AI203",100);
	f1.bookSeats(30);
	f1.showAvailability();

	f1.bookSeats(80);
	return 0;


}