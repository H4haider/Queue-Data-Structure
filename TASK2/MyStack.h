#include "Stack.h"
template <typename T>
class MyStack :public Stack<T> {
public:

    MyStack(int m) : Stack<T> (m) {}

    void push(T val) {
        if (!isFull()) {
            Stack<T>::arr[Stack<T>::csize++] = val;
        }
        else {
            cerr << "Stack is Full" << endl;
        }
    }

    T pop() {
        if (!isEmpty()) {
            Stack<T>::csize--;
            return Stack<T>::arr[Stack<T>::csize];
        }

        else {
            cerr << "Stack is Empty" << endl;
            return T();
        }
    }

    T top() {

        if (!isEmpty()) {
            return Stack<T>::arr[Stack<T>::csize - 1];
        }
        else {
            cerr << "Stack is Empty" << endl;
            return T();
        }
    }

    bool isFull() {
        return Stack<T>::csize == Stack<T>::msize;
    }

    bool isEmpty() {
        return Stack<T>::csize == 0;
    }

    void display() override {
        for (int i = Stack<T>::csize - 1; i >= 0; i--) {
            cout << Stack<T>::arr[i] << " ";
        }
        cout << endl;
    }

};