#pragma once
#include <iostream>
using namespace std;

class Package {
public:
    int id;
    string address;
    int startTime;
    int endTime;

    Package() : id(0), address(""), startTime(0), endTime(0) {}
    Package(int id, string addr, int start, int end)
        : id(id), address(addr), startTime(start), endTime(end) {
    }

    void display() const {
        cout << "ID: " << id << ", Address: " << address
            << ", Time Window: [" << startTime << ", " << endTime << "]" << endl;
    }
};
