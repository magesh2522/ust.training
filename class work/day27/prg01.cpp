#include <iostream>
#include <string>
using namespace std;

class retailsStore {
private:

	char  name[200];
	int id;
	char catagory[100];
	float price;
	int quantity;

	void setName(const char* n) {
		strcpy(name, n);
	}
	char* getName()
	{
		return name;
	}
	void setId(int i) {
		id = i;
	}
	int getId() {
		return id;
	}
	void setCatagory(const char* c) {
		strcpy(catagory, c);
	}
	char* getCatagory()
	{
		return catagory;
	}
	void setPrice(float p) {
		price = p;
	}
	float getPrice() {
		return price;
	}
	void setQuantity(int q) {
		quantity = q;
	}
	int getQuantity() {
		return quantity;
	}
public:

	void setData(const char* n, int i, const char* c, float p, int q) {
		setName(n);
		setId(i);
		setCatagory(c);
		setPrice(p);
		setQuantity(q);
	}
	void displayData() {
		cout << "Name: " << getName() << endl;
		cout << "ID: " << getId() << endl;
		cout << "Catagory: " << getCatagory() << endl;
		cout << "Price: " << getPrice() << endl;
		cout << "Quantity: " << getQuantity() << endl;
	}
};
int main() {
	retailsStore r;
	r.setData("Laptop", 101, "Electronics", 599.99, 10);
	r.displayData();
	return 0;
}
	
