#include <iostream>
using namespace std;

class movie {
	char movie[200];
	char typeofMovie[200]
		int rating;
public:
	void set_details();
	void get_details();
	void ratings();

};

void movie::set_details()
{
	cout << "enter the movie:" << endl;
	cin >> movie;
	cout << "enter the what type of movie:" << endl;
	cin >> typeofMovie;
	cout << "enter the rating :" << endl;
	cin >> rating;
}

void movie::get_detils() {
	cout << "MOVIE" << movie << endl;
	cout << "Type of Movie" << typeofMovie << endl;
}

void movie::rating() {
	if (rating >= 8 && rating <= 10) {
		cout << "this is hit movie" << endl;
	}
	else if (rating >= 6 && rating < 8) {
		cout << "this is average" << endl;
	}
	else {
		cout << "this is floop movie don't watch" << endl;

	}
}

int main() {
	movie m1;

	m1.set_details();
	get_details();
	ratings();

}