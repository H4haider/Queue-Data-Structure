#pragma once
#include "Package.h"

class AbstractQueue {
protected:
    Package* arr;
    int msize;
    int csize;

public:
    AbstractQueue(int size) : msize(size), csize(0) {
        arr = new Package[msize];
    }

    virtual void enQueue(Package value) = 0;
    virtual Package deQueue() = 0;
    virtual Package getfront() const = 0;
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;

    virtual ~AbstractQueue() {
        delete[] arr;
    }
};
