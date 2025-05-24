#include <iostream>
using namespace std;

class Queue{
private :
	int front, rear;
	int arr[10];
	int capasity;
public:
	Queue(int size = 10) {
		front= 0;
		rear = -1;
		capasity = size;


 }

	bool isFull() {
		return rear == capasity - 1;

	}
	bool isEmpty() {
		return front > rear;

	}
	void enqueue(int value) {
		if (isFull()) {
			cout << "queue is full" << " ";

		}
		arr[++rear] = value;
	}
		void display() {
			if (front > rear) {
				cout << "queue is empty" <<" ";
				return;
			}
		} 
			
};
int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.enqueue(70);

}
