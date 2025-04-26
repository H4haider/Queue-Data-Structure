#pragma once
#include "AbstractQueue.h"


class myQueue: public AbstractQueue
{
private:
	int front;
	int rear;
public:
	myQueue(int s): AbstractQueue (s) {
		front = 0;
		rear = 0;
	}

	void enQueue(string value) override {
		if (!isFull()) {
			AbstractQueue::arr[rear % AbstractQueue::msize] = value;
			AbstractQueue::csize++;
			rear++;
		}

		else {
			cerr << "Queue is Full" << endl;
		}
	}
	string deQueue() override {
		if (!isEmpty()) {
			string val = AbstractQueue::arr[front % AbstractQueue::msize];
			AbstractQueue::csize--;
			front++;
			return val;
		}

		else {
			cerr << "Queue is Empty" << endl;
			return NULL;
		}
	}
	string getfront() const override {
		if (!isEmpty()) {
			return AbstractQueue::arr[front % AbstractQueue::msize];
		}
		else {
			cerr << "Queue is Empty" << endl;
		}
	}
	bool isEmpty() const override {
		return AbstractQueue::csize == 0;
	}
	bool isFull() const override {
		return AbstractQueue::csize == AbstractQueue::msize;
	}

	void display() const {
		cout << "Queue: " << endl;
		for (int i = front; i < rear; i++) {
			cout << AbstractQueue::arr[i % AbstractQueue::msize]<<" ";
		}
	}

	
 	~myQueue() {
	}

};

