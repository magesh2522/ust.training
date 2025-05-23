#include <iostream>
using namespace std;

class HotelRoom {
private:
	int roomNumber;
	string type;
	bool isBooked;

public:
	HotelRoom(int roomNo, string roomType) {
		roomNumber = roomNo;
		type = roomType;
		isBooked = false;
	}

	void bookRoom()
	{
		isBooked = true;
		cout << "Room" << roomNumber << "(" << type << ")is now booked." << endl;


	}
	void showStatus() {

		cout << "Room Number" << roomNumber << endl;
		cout << "Room Type" << type<< endl;
		cout << "Booking status" << (isBooked ? "Booked" : "available") << endl;

	}


	};
	int main() {
		HotelRoom h1(201, "AC");
		h1.bookRoom();
		h1.showStatus();

		h1.bookRoom();
		return 0;

	}