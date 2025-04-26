#include "myQueue.h"

int main() {
	myQueue<int> q(4);
	int choice;
	do {
		cout << "Enter 1 to Enqueue: " << endl;
		cout << "Enter 2 to Dequeue: " << endl;
		cout << "Enter 3 to get peek: " << endl;
		cout << "Enter 4 to display: " << endl;
		cout << "Enter 5 to reverse: " << endl;
		cin >> choice;

		if (choice == 1) {
			int val;
			cout << "Enter value: " << endl;
			cin >> val;
			q.enqueue(val);
		}

		else if (choice == 2) {
			cout << "Dequeued value: " << q.dequeue() << endl;
		}

		else if (choice == 3) {
			cout << "Peek value: " << q.getfront() << endl;
		}

		else if (choice == 4) {
			q.display();
		}

		else if (choice == 5) {
			int val;
			cout << "Enter How many elements to reverse: " << endl;
			cin >> val;
			q.reverseFirstK(val);
			cout << "Queue reversed upto K elements" << endl;
		}

		else {
			cout << "Program exited" << endl;
			break;
		}

	} while (choice <= 5);

	return 0;
}