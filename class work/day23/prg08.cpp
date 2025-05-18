#include <iostream>
using namespace std;
#define MAX_PRODUCTS 100


typedef struct productDetails {
	int productId;
	string productName;
	int productQuantity;
	int productPrice;
	int productTax;


}PD;

int getDetails(PD* e) {
	cout << "Enter the product Id: " << endl;
	cin >> e->productId;
	cout << "Enter the product Name: " << endl;
	cin >> e->productName;
	cout << "Enter the product Quantity: " << endl;
	cin >> e->productQuantity;
	cout << "Enter the Product Price: " << endl;
	cin >> e->productPrice;
	cout << "product Tax: " << endl;
	cin >> e->productTax;
	return 0;
}

float calculateProduct(PD* e) {
	float cost = e->productQuantity * e->productPrice;
	float tax = (e->productTax / 100.0f) * cost;
	return cost + tax;
}
void disPlayProduct(PD* e, float totalcost) {

	cout << "*************** Product Inventery *******************" << endl;
	cout << " product Id: " << e->productId << endl;
	cout << " product Name: " << e->productName << endl;;
	cout << " product Quantity: " << e->productQuantity << endl;
	cout << " Product Price: " << e->productPrice << endl;
	cout << " Tax: " << e->productTax<<"%" << endl;
	cout << "Total cost: " << totalcost << endl;


}
int main() {
	 PD products[MAX_PRODUCTS];
	 int numProduct;
	 cout << "Enter the number of Product " << endl;
	 cin >> numProduct;

	 if (numProduct > MAX_PRODUCTS) {
		 cout << "You enter Maximum Limite" << endl;
		 return 1;

	 }
	 for (int i = 0;i < numProduct;i++) {
		 cout << "\n----Enter details for products  " << (i + 1) << "---" << endl;
		 getDetails(&products[i]);

	 }

	 cout << "Product Invetory slip " << endl<<"\n";
	 for (int i = 0;i < numProduct;i++) {
		 float totalcost = calculateProduct(&products[i]);
		 disPlayProduct(&products[i], totalcost);
	 }
	 return 0;

}