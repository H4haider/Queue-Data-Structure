#include "myQueue.h"

int main() {
	myQueue q(4);
	int choice;
	do {
		cout << "Enter 1 to Add new print jobs to the queue: " << endl;
		cout << "Enter 2 to Print the document from the front of the queue: " << endl;
		cout << "Enter 3 to Check the front document without printing it: " << endl;
		cout << "Enter 4 to Display the remaining print jobs in the queue: " << endl;
		cin >> choice;

		if (choice == 1) {
			string val;
			cout << "Enter Document name: " << endl;
			cin >> val;
			q.enQueue(val);
		}

		else if (choice == 2) {
			cout << "Dequeued value: " << q.deQueue() << endl;
		}

		else if (choice == 3) {
			cout << "Peek value: " << q.getfront() << endl;
		}

		else if (choice == 4) {
			q.display();
		}

		else {
			cout << "Program exited" << endl;
			break;
		}

	} while (choice <= 4);

	return 0;
}