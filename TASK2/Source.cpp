#include "QueueUsingStack.h"

int main() {
    QueueUsingStack<int> q(4);
    int choice, val;

    do {
        cout << "Enter 1 to Enqueue: " << endl;
        cout << "Enter 2 to Dequeue: " << endl;
        cout << "Enter 3 to get peek: " << endl;
        cout << "Enter 4 to display: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> val;
            q.enqueue(val);
            break;
        case 2:
            val = q.dequeue();
            if (val != NULL)
                cout << "Dequeued: " << val << endl;
            break;
        case 3:
            val = q.front();
            if (val != NULL)
                cout << "Front element: " << val << endl;
            break;
        case 4:
            q.display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
