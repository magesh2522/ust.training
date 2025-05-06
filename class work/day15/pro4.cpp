#include <iostream>
using namespace std;


/*void area_of_square(int l) {
	cout << "area of square is " << l * l << endl;
}
void area_of_rectangle(int l, int b) {
	cout << "area of rectangle is " << l * b << endl;
}
void area_of_triangle(int b, int h) {
	cout << "area of triangle is " << (b * h) / 2 << endl;
}
void area_of_circle(int r) {
	cout << "area of circle is " << 3.14 * r * r << endl;
}
int choise;

switch (choise) :
{
case 1:
	cout << "square" << endl;
	cin >> l;
	area_of_square(l);
	break;
case 2:
	cout << "rectangle" << endl;
	cin >> l >> b;
	area_of_rectangle(l, b);
	break;
case 3:
	cout << "triangle" << endl;
	cin >> b >> h;
	area_of_triangle(b, h);
	break;
case 4:
	cout << "circle" << endl;
	cin >> r;
	area_of_circle(r);
	break;
default:
	cout << "invalid choise" << endl;*/


float square(float s);
float rectangle(float l, float b);
float triangle(float b, float h);
float circle(float r);

int main() {
	float l, b, h, r, s;
	int choice;
	cout << "Choose the shape to calculate area:" << endl;
	cin >> choice;
	switch (choice) {
		case 1:
			cout << "Enter side length of square:" << endl;
			cin >> s;
			cout << "Area of square: " << square(s) << endl;
			break;
		case 2:
			cout << "Enter length and breadth of rectangle:" << endl;
			cin >> l >> b;
    		cout << "Area of rectangle: " << rectangle(l, b) << endl;
		   break;
		case 3:
			cout << "Enter base and height of triangle:" << endl;
			cin >> b >> h;
			cout << "Area of triangle: " << triangle(b, h) << endl;
			break;
		case 4:
		    cout << "Enter radius of circle:" << endl;
	   	    cin >> r;
			cout << "Area of circle: " << circle(r) << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
	}
}

float square(float s) {
	return s * s;
}
float rectangle(float l, float b) {
	return l * b;
}
float triangle(float b, float h) {
	return (b * h) / 2;
}
float circle(float r) {
	return 3.14 * r * r;
}



