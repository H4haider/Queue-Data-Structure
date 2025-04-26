#pragma once
#include <iostream>
using namespace std;

template <typename T>
class AbstractQueue {
protected:
	int msize;
	int csize;
	T* arr;
public:
	AbstractQueue(int s) :msize(s), csize(0) {
		arr = new T[msize];
	}
	virtual void enQueue(T value) = 0;
	virtual T deQueue() = 0;
	virtual T getfront() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;
	virtual ~AbstractQueue() {}
};

