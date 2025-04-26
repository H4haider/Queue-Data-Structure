#pragma once
#include "AbstractQueue.h"

class myQueue : public AbstractQueue {
private:
    int front;
    int rear;
    int capacity;

    void increase() {
        int newCapacity = capacity * 2;
        Package* newArr = new Package[newCapacity];

        for (int i = 0; i < AbstractQueue::csize; ++i) {
            newArr[i] = AbstractQueue::arr[(front + i) % capacity];
        }

        delete[] AbstractQueue::arr;
        AbstractQueue::arr = newArr;
        front = 0;
        rear = AbstractQueue::csize;
        capacity = newCapacity;
        AbstractQueue::msize = newCapacity;
    }

public:
    myQueue(int s) : AbstractQueue(s), capacity(s), front(0), rear(0) {}

    void enQueue(Package value) override {
        if (isFull()) {
            increase();
        }

        AbstractQueue::arr[rear % capacity] = value;
        AbstractQueue::csize++;
        rear++;
    }

    Package deQueue() override {
        if (!isEmpty()) {
            Package val = AbstractQueue::arr[front % AbstractQueue::msize];
            front++;
            AbstractQueue::csize--;
            return val;
        }

        cerr << "Queue is Empty" << endl;
        return Package();
    }

    Package getfront() const override {
        if (!isEmpty()) {
            return AbstractQueue::arr[front % AbstractQueue::msize];
        }

        cerr << "Queue is Empty" << endl;
        return Package();
    }

    bool isEmpty() const override {
        return AbstractQueue::csize == 0;
    }

    bool isFull() const override {
        return AbstractQueue::csize == AbstractQueue::msize;
    }

    void display() const {
        cout << "\nQueue:\n";
        for (int i = front; i<rear; i++) {
            AbstractQueue::arr[i % AbstractQueue::msize];
        }
    }

    void timeToDeliver(int currentTime) {
        while (!isEmpty()) {
            Package p = getfront();
            if (currentTime >= p.startTime && currentTime <= p.endTime) {
                cout << "Delivering Package: " << endl;
                p.display();
                deQueue();
                break;
            }
            else {
                cout << "Package expired: " << endl;;
                p.display();
                deQueue();
            }
        }
    }
};
