#pragma once
#include <iostream>
using namespace std;

class AbstractQueue {
protected:
	int msize;
	int csize;
	string* arr;
public:
	AbstractQueue(int s) :msize(s), csize(0) {
		arr = new string[msize];
	}
	virtual void enQueue(string value) = 0;
	virtual string deQueue() = 0;
	virtual string getfront() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;
	virtual ~AbstractQueue() {}
};

