#include "MyQueue.h"
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Size of Queue: " << endl;
    cin >> size;
    MyQueue Q(size);
    cout << "Insert People in Queue: " << endl;
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        Q.enqueue(num);
    }

    MyQueue q1(size);
    MyQueue q2(size);
    MyQueue q3(size);
    MyQueue q4(size);

    do {
        int num = Q.dequeue();
        if (num % 4 == 0) {
            q4.enqueue(num);
        }

        else if (num % 3 == 0) {
            q3.enqueue(num);
        }

        else if (num % 2 == 0) {
            q2.enqueue(num);
        }

        else {
            q1.enqueue(num);
        }

    } while (!Q.isempty());

    return 0;
}
