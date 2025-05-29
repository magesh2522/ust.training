#include <iostream>
using namespace std;
#define  in 1

class book {
	char author[300];
	char title[400];
	int status;
public:
	book(const char* n, const char* t, int s);

	void set_status(int s);
	void show();
};
book::book(const char* n, const char* t, int s) {
	strcpy_s(author, n);
	strcpy_s(title, t);
	status = s;
}
void book::set_status(int s) {
	status = s;
}
void book::show() {
	cout << title << "by" << author;
	cout << "is";
	if (status == in)
		cout << "in.\n";
	else cout << "out.\n";
}
int main() {
	book b1("harry", "harry_porter", in);
	b1.show();
}