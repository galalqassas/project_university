//
// Created by LENOVO on 10/12/2023.
//

#ifndef DATA_STRUCTURE_PROJECT_BUS_H
#define DATA_STRUCTURE_PROJECT_BUS_H

#include "LinkedList.h"
#include <string>
#include "Passenger.h"
using namespace std;

struct MaintenanceTime {
    int journeys;
    int hours;
};

class Bus {
private:
    string busType;
    int busCapacity;
    int N; // number of delivery trips of this bus
    int Passenger_number; // number of passenger travelled on this bus
    MaintenanceTime maintenance;
    PriorityQueue<Passenger> passengers; // moving passengers
    int currentStation;
    void getPrioritysp(string passenger_type);
    int getSPPriority(string sp_type);
public:
    Bus();
    Bus(string busType, int busCapacity);
    void setBusType(string bt);
    void setBusCapacity(int bc);
    string getBusType() const;
    int getBusCapacity() const;
    int getN() const;
    void setN(int n);
    int getPassengerNumber() const;
    void setPassengerNumber(int passengerNumber);
    const int& getCurrentStation() const;
    void setCurrentStation(const int &currentStation);
    void add_passenger(Passenger passenger, string passenger_type);
    void remove_passenger(Passenger passenger);
};


#endif //DATA_STRUCTURE_PROJECT_BUS_H
