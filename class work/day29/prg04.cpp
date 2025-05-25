#include <iostream>
#include <cstdlib>

using namespace std;


class node
{
private:

	int data;
	class node* next;

	node* createNode();
	node* addNodeBeg(node*, node*);
	node* addNodeEnd(node*, node*);
	int dispList(node*);
	int dispMenu();
};class LList
{
private:
	node* n;
public:
	LList(



};

int main()
{
	node* head = NULL;
	int ch = 1;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:

			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			dispList(head);
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}

	cout << "Exiting program...." << endl;
	return 0;
}

int dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

int dispList(node* head)
{
	cout << "\tList is " << endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	return EXIT_SUCCESS;
}

node* addNodeEnd(node* head, node* nn)
{
	node* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

node* addNodeBeg(node* head, node* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

node* createNode()
{
	node* nn = (node*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}