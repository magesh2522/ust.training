#include <iostream>
using namespace std;

int main(){
	cout<<"find the area of a square and rectangle and traingle and circle"<<endl;
	int l, b, h, r;
	cout<<"square"<<endl;
	cin>>l;
	cout<<"area of square is "<<l*l<<endl;
	cout<<"rectangle"<<endl;
	cin>>l>>b;
	cout<<"area of rectangle is "<<l*b<<endl;
	cout<<"triangle"<<endl;
	cin>>b>>h;
	cout<<"area of triangle is "<<(b*h)/2<<endl;
	cout<<"circle"<<endl;
	cin>>r;
	cout<<"area of circle is "<<3.14*r*r<<endl;

}