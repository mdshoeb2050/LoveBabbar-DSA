// Approach:

// Follow the below steps to Implement the queue using linked list:

// Create a Struct QNode with data members integer data and QNode* next.
// A parameterized constructor that takes an integer x value as a parameter and sets data equal to x and next as NULL.
// Create a struct Queue with data members QNode front and rear. 
// Default constructor Queue() sets front and rear as NULL.
// Enqueue Operation with parameter x:
// Initialize QNode* temp with data = x;
// If rear is set to NULL then set front and rear to temp and return.
// Else set rear‘s next to temp and then move rear to temp.
// Dequeue Operation:
// If front is set to NULL return.
// Initialize QNode* temp with front and set front to its next.
// If front is equal to NULL then set rear to NULL.
// Delete temp.


//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct QNode {
	int data;
	QNode* next;
	QNode(int d) //constructor
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	QNode *front, *rear;
	Queue() {
         front = rear = NULL;
     }

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};



// Driven Program
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << (q.front)->data << endl;
	cout << "Queue Rear : " << (q.rear)->data;
}


