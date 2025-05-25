#include  <iostream>
using namespace std;

struct node {
	int v;
	struct node* ptr;//self reference pointer 
public:
	//struct node   n1, n2, n3;


};
int main() {
	//step 1->//allocating diffrent node
	struct node n1, n2, n3,n4,n5,n6;
	cout << sizeof(n1) << "\t Address of n1:" << (unsigned long int) & n1<<endl;
	cout << sizeof(n2) << "\t Address of n1:" << (unsigned long int) & n2<<endl;
	cout << sizeof(n3) << "\t Address of n1:" << (unsigned long int) & n3<<endl;
	//step 2->

	n1.v = 10;
	n1.ptr = NULL;
	n2.v = 20;
	n2.ptr = NULL;
	n3.v = 30;
	n3.v = NULL;
	n4.v = 40;
	n4.ptr = NULL;
	n5.v = 50;
	n5.ptr = NULL;
	n6.v = 60;
	n6.ptr = NULL;

	cout << "n1 value :" << n1.v << "\tptr:" << (unsigned long int)n1.ptr << endl;
	cout << "n2 value :" << n2.v << "\tptr:" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value :" << n3.v << "\tptr:" << (unsigned long int)n3.ptr << endl;

	//sstep 3 making relation 

	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "After making" << endl;
	cout << "n1 value :" << n1.v << "\tptr:" << (unsigned long int)n1.ptr << endl;
	cout << "n2 value :" << n2.v << "\tptr:" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value :" << n3.v << "\tptr:" << (unsigned long int)n3.ptr << endl;

	//step 4-> traversing in the list

	struct node* head = &n1;
	/*
	cout << n1.v << endl;
	cout << head->v << endl;
	cout << "Address of head ->ptr:" << (unsigned long int)head->ptr << endl;
	
	//head =&n2
	head = &n2;
	cout << n2.v << endl;//20
	cout << head->v<<endl;
	//head =&n3
	head=head->ptr;
	head = &n3;
	cout << head->v << endl;*/



	n4.ptr = NULL;
	n1.ptr = &n4;

	n5.ptr = NULL;
	n2.ptr = &n5;



	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;

	}
	cout << "NULL" << endl;

	return 0;


}