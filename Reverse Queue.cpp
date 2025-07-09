#include "MyQueue.h"
#include <iostream>
using namespace std;

int main() {
    int value, size;
    cout << "Enter Size of Queue: " << endl;
    cin >> size;

    MyQueue obj1(size);
    MyQueue obj2(size);
    MyQueue obj3(size);

    for (int i = 0; i < size; i++) {
        cout << "Enter Value to Enqueue at "<<i+1<<" index: ";
        cin >> value;
        obj1.enqueue(value);

    }
    

    while (!obj1.isempty()) {
        int val = obj1.dequeue();

        while (!obj2.isempty()) {
            obj3.enqueue(obj2.dequeue());
        }

        obj2.enqueue(val);

        while (!obj3.isempty()) {
            obj2.enqueue(obj3.dequeue());
        }
    }

    while (!obj2.isempty()) {
        obj1.enqueue(obj2.dequeue());
    }

    obj1.display();


    return 0;
}
