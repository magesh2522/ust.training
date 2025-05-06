#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e ;
	cout<<"check the highest number"<<endl;
	cin>>a>>b>>c>>d>>e;

	int high = a;

	if (high > b) {
		high = b;
	}
	if (high > c) {
		high = c;
	}
	if (high > d) {
		high = d;
	}
	if (high > e) {

		high = e;
	}

}