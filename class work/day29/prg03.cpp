#include <iostream>
using namespace std;

typedef struct node {
	int data;
	struct node* next;

}node;
int main() {
	node* nn = NULL, * head = NULL, * temp = NULL;
    bool ch = 1;
	while (ch)
	{
		nn = (node*)malloc(sizeof(node));
		cout << "Do you want to add a new node(0/1):";
		cin >> nn->data;//iniitialize values 
		nn->next = NULL;//initialize values 

		if (head == NULL)
		{
			head = nn;
			temp = nn;
		}
		else {
			head->next = nn;
			head = head->next;
			}


			cout << "Do you want to add a new node(0/1):";
			cin >> ch;
		}
		head = temp;
		while (head != NULL) {
			cout << head->data << "->";
			head = head->next;

		}
		cout << "NULL" << endl;
	}