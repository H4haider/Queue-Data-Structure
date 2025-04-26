#pragma once
#include "AbstractQueue.h"

template <typename T>
class myQueue : public AbstractQueue<T>
{
private:
	int front;
	int rear;
public:
	myQueue(int s) : AbstractQueue<T> (s) {
		front = 0;
		rear = 0;
	}

	void enqueue(T value) override {
		if (!isFull()) {
			AbstractQueue<T>::arr[rear % AbstractQueue<T>::msize] = value;
			AbstractQueue<T>::csize++;
			rear++;
		}

		else {
			cerr << "Queue is Full" << endl;
		}
	}
	T dequeue() override {
		if (!isEmpty()) {
			T val = AbstractQueue<T>::arr[front % AbstractQueue<T>::msize];
			AbstractQueue<T>::csize--;
			front++;
			return val;
		}

		else {
			cerr << "Queue is Empty" << endl;
			return T();
		}
	}
	T getfront() const override {
		if (!isEmpty()) {
			return AbstractQueue<T>::arr[front % AbstractQueue<T>::msize];
		}
		else {
			cerr << "Queue is Empty" << endl;
		}
	}
	bool isEmpty() const override {
		return AbstractQueue<T>::csize == 0;
	}
	bool isFull() const override {
		return AbstractQueue<T>::csize == AbstractQueue<T>::msize;
	}

	void display() const {
		cout << "Tickets: " << endl;
		for (int i = front; i < rear; i++) {
			cout << AbstractQueue<T>::arr[i % AbstractQueue<T>::msize]<<" ";
		}
	}

	void reverseFirstK(int k) {

		if (k <= 0 || k > AbstractQueue<T>::csize) return;

		T* temp = new T[k];
		for (int i = 0; i < k; ++i) {
			temp[i] = dequeue();;
			
		}

		for (int i = k - 1; i >= 0; i--) {
			enqueue(temp[i]);
		}

		int rest = AbstractQueue<T>::csize - k;
		for (int i = 0; i < rest; ++i) {
			enqueue(dequeue());
			
		}
		delete[] temp;
	}

	~myQueue() {}

};

