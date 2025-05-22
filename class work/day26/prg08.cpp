//movie Review
#include<iostream>
#include<cstring>
using namespace std;
class movie
{

	char title[20];
	char genre[20];
	float rating;
public:
	void set_details();
	void get_details();
	void ratings();
};
void movie::set_details()
{
	cout << "Enter the movie name:" << endl;
	cin >> title;
	cout << "Enter the Genre" << endl;
	cin >> genre;
	cout << "Rating: " << endl;
	cin >> rating;
}
void movie::get_details()
{
	cout << "TITLE: " << title << endl;
	cout << "GENRE: " << genre << endl;
}
void movie::ratings()
{
	if (rating >= 8 && rating <= 10)
	{
		cout << "MOVIEIS  HIT";
	}
	else if (rating >= 6.5 && rating < 8)
	{
		cout << "MOVIE IS AVERAGE";
	}
	else if (rating < 0) {
		cout << "MOVIE IS WORST ";
	}
	

}
int main()

{
	movie m1;

	m1.set_details();
	m1.get_details();
	m1.ratings();
}