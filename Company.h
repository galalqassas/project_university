//
// Created by PC on 12/8/2023.
//

#ifndef PROJECT_UNIVERSITY_COMPANY_H
#define PROJECT_UNIVERSITY_COMPANY_H

#include <iostream>
#include <queue>
#include "Bus.h"
#include "Passenger.h"
#include <list>
//#include "Station.h"
using namespace std;

class Company {
private:
    queue<Bus> station0;
    Station *stations = new Station[50];
//    queue<Event> eventList;
    queue<Passenger> finishedPassengerList;
    queue<Bus> mBusMaintenance;
    queue<Bus> wBusMaintenance;
public:
    void loadDataFromFile(const std::string &filename);
    // Add a comment to test github
    // Test
    // Third test (Push both 2 tests)
    // Ibrahem first commit
    // second comment after the first push failed
};


#endif //PROJECT_UNIVERSITY_COMPANY_H
