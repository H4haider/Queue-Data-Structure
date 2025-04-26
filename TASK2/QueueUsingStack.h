#pragma once
#include "MyStack.h"
template <typename T>
class QueueUsingStack
{
private:
    MyStack<T> s1, s2;

    void transferS1toS2() {
        while (!s1.isEmpty()) {
            s2.push(s1.pop());
        }
    }

public:

    QueueUsingStack(int size): s1(size),s2(size) {}

    void enqueue(T val) {
        s1.push(val);
    }

    T dequeue() {
        if (s2.isEmpty()) {
            transferS1toS2();
        }
        if (s2.isEmpty()) {
            cout << "Queue is empty!" << endl;
            return NULL;
        }
        return s2.pop();
    }

    T front() {
        if (s2.isEmpty()) {
            transferS1toS2();
        }
        if (s2.isEmpty()) {
            cout << "Queue is empty!" << endl;
            return NULL;
        }
        return s2.top();
    }

    void display() {

        if (s2.isEmpty()) {
            transferS1toS2();
        }

        if (s2.isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue: ";
        s2.display();
        cout << endl;
    }
};

