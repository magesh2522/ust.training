#include<iostream>
using namespace std;

void display(const char[]);
int main() {
	char s[] = "magesh";
	display("sree");
	display(s);
}
void display(const char name[]) {
	while (*name != '\0')
		cout << *name++;
	cout << endl;
}