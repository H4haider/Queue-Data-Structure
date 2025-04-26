#include "myQueue.h"

int main() {
    myQueue q(2);

    q.enQueue(Package(1, "New York", 10, 20));
    q.enQueue(Package(2, "Los Angeles", 15, 25));
    q.enQueue(Package(3, "Chicago", 20, 30));
    q.enQueue(Package(4, "Houston", 25, 35));

    q.display();

    int currentTime;
    cout << "Enter current time: ";
    cin >> currentTime;

    q.timeToDeliver(currentTime);  


    return 0;
}
