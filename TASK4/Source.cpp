#include "myQueue.h"

int main() {
	int nooftickets, choice;
	cout << "How many Tickets you want to create: " << endl;
	cin >> nooftickets;

	myQueue<int> Tickets(nooftickets);

	do {
		cout << "Press 1 to add a new support ticket to the queue: " << endl;
		cout << "Press 2 to Resolve and remove the first ticket: " << endl;
		cout << "Press 3 to Show the first ticket: " << endl;
		cout << "Press 4 to Display all tickets: " << endl;
		cout << "Press 5 to exit ticket system: " << endl;
		cin >> choice;

				if (choice == 1) {
					int val;
					cout << "Enter 4 digit ticket id: " << endl;
					cin >> val;
					Tickets.enQueue(val);
				}

				else if (choice == 2) {
					cout << "Removed ticket: " << Tickets.deQueue() << endl;
				}

				else if (choice == 3) {
					cout << "First ticket: " << Tickets.getfront() << endl;
				}

				else if (choice == 4) {
					Tickets.display();
				}

				else {
					cout << "Program exited" << endl;
					break;
				}
		} while (choice != 5);



	system("pause");
	return 0;
}