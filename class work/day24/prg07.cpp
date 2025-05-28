#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
int dispList(NODE*);
int dispMenu();
void freeNodes(NODE*);
NODE* search(NODE*, int);
NODE* deleteEL(NODE*, int);
NODE* update(NODE*, int, int);


int main()
{
	NODE* head = NULL;
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
			int num;
			cout << "enter the number" << endl;
			cin >> num;
			search(head, num);
			break;
		case 5:
			cout << "enter the number" << endl;
			cin >> num;
			head = deleteEL(head, num);
			break;
		case 6:
			int pos;
			cout << "enter the pos" << endl;
			cin >> pos;
			cout << "enter the number" << endl;
			cin >> num;
			head = update(head, num, pos);
			break;
		case 7:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}
	freeNodes(head); //*very improtant Memory Leaks
	cout << "Exiting program...." << endl;
	return 0;
}


int dispMenu()
{
	int ch;
	cout << "Press,\n1. Add Node Begining\n2. Add Node End\n";
	cout << "3. Display List\n4.search\n5.deletenode\n6.update\n7. Exit..\nChoice: ";
	cin >> ch;
	return ch;
}

int dispList(NODE* head)
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

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
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

NODE* addNodeBeg(NODE* head, NODE* nn)
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

NODE* createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}

void freeNodes(NODE* head)
{
	NODE* temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
NODE* search(NODE* head, int num)
{
	NODE* temp = head;
	if (head == NULL)
	{
		cout << num << " not element" << endl;
		return head;
	}
	else
	{
		int count = 1;
		while (temp != NULL)
		{
			if (temp->data == num)
			{
				cout << num << " is found at node " << count << endl;
				return temp;
			}
			temp = temp->next;
			count++;

		}
		cout << num << " is not found " << endl;

	}
	return head;

}
NODE* deleteEL(NODE* head, int num)
{

	NODE* temp = head;
	NODE* prev = NULL;
	if (head == NULL)
	{
		cout << num << " no element" << endl;
		return head;
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->data != num)
			{
				prev = temp;
				temp = temp->next;
			}
			else
			{
				if (prev == NULL)
				{
					head = temp->next;
				}
				else
				{
					prev->next = temp->next;
				}
				free(temp);
				return head;
			}

		}
		cout << num << "is not found" << endl;
	}
	return head;

}
NODE* update(NODE* head, int num, int pos)
{
	NODE* temp = head;
	int count = 0;
	if (head == NULL)
	{
		cout << num << " list empty" << endl;
		return head;
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			if (count == pos)
			{
				temp->data = num;
			}
			temp = temp->next;

		}
		cout << count << " node found" << endl;

	}
	return head;


}