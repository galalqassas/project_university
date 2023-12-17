//
// Created by LENOVO on 10/12/2023.
//
#include "Bus.h"
Bus::Bus() {}

Bus::Bus(string busType, int busCapacity) : busType(busType), busCapacity(busCapacity) {}


void Bus::setBusType(string bt) {
    busType = bt;
}

void Bus::setBusCapacity(int bc) {
    busCapacity = bc;
}

string Bus::getBusType() const {
    return busType;
}

int Bus::getBusCapacity() const {
    return busCapacity;
}

int Bus::getN() const {
    return N;
}

void Bus::setN(int n) {
    N = n;
}

int Bus::getPassengerNumber() const {
    return Passenger_number;
}

void Bus::setPassengerNumber(int passengerNumber) {
    Passenger_number = passengerNumber;
}

const int &Bus::getCurrentStation() const {
    return currentStation;
}

void Bus::setCurrentStation(const int &currentStation) {
    Bus::currentStation = currentStation;
}

void Bus::getPrioritysp(string passenger_type) {
    if (passenger_type == "sp"){

    }
}

void Bus::add_passenger(Passenger passenger, string passenger_type) {
    if (passenger.getStartStation() == currentStation){
        int priority = abs(passenger.getEndStation().getStationNumber()
                - passenger.getStartStation().getStationNumber());
        passengers.enqueue(passenger, priority);
    }
    N++;
}

int Bus::getSPPriority(string sp_type) {
    if (sp_type == "Aged"){
        return 1;
    } else if (sp_type == "POD"){
        return 2;
    } else if (sp_type == "pregnant"){
        return 3;
    } else {
        return 0;
    }
}

void Bus::remove_passenger(Passenger passenger) {
    int priority = abs(passenger.getEndStation().getStationNumber()
                       - passenger.getStartStation().getStationNumber());
    passengers.dequeue();
    N--;
}




