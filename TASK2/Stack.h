#include <iostream>
using namespace std;

template<typename T>
class Stack {
protected:
    T* arr;
    int msize;
    int csize;
public:

    Stack(int m) :msize(m), csize(0) {
        arr = new T[msize];
    }

    virtual void push(T val) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual void display() = 0;
};