//
// Created by PC on 12/10/2023.
//

#include "Station.h"

short Station::getStationNumber() const {
    return stationNumber;
}

void Station::setStationNumber(short stationNumber) {
    Station::stationNumber = stationNumber;
}

const PriorityQueue<Passenger> &Station::getWaitingSpForward() const {
    return waitingSPForward;
}

void Station::setWaitingSpForward(const PriorityQueue<Passenger> &waitingSpForward) {
    waitingSPForward = waitingSpForward;
}

const PriorityQueue<Passenger> &Station::getWaitingSpBackward() const {
    return waitingSPBackward;
}

void Station::setWaitingSpBackward(const PriorityQueue<Passenger> &waitingSpBackward) {
    waitingSPBackward = waitingSpBackward;
}

const Queue<Passenger> &Station::getWaitingNpForward() const {
    return waitingNPForward;
}

void Station::setWaitingNpForward(const Queue<Passenger> &waitingNpForward) {
    waitingNPForward = waitingNpForward;
}

const Queue<Passenger> &Station::getWaitingNpBackward() const {
    return waitingNPBackward;
}

void Station::setWaitingNpBackward(const Queue<Passenger> &waitingNpBackward) {
    waitingNPBackward = waitingNpBackward;
}

const Queue<Passenger> &Station::getWaitingWcPForward() const {
    return waitingWcPForward;
}

void Station::setWaitingWcPForward(const Queue<Passenger> &waitingWcPForward) {
    Station::waitingWcPForward = waitingWcPForward;
}

const Queue<Passenger> &Station::getWaitingWcPBackward() const {
    return waitingWcPBackward;
}

void Station::setWaitingWcPBackward(const Queue<Passenger> &waitingWcPBackward) {
    Station::waitingWcPBackward = waitingWcPBackward;
}

const Queue<Bus> &Station::getAvailableBusesForward() const {
    return availableBusesForward;
}

void Station::setAvailableBusesForward(const Queue<Bus> &availableBusesForward) {
    Station::availableBusesForward = availableBusesForward;
}

const Queue<Bus> &Station::getAvailableBusesBackward() const {
    return availableBusesBackward;
}

void Station::setAvailableBusesBackward(const Queue<Bus> &availableBusesBackward) {
    Station::availableBusesBackward = availableBusesBackward;
}

void Station::addPassengerWp(Passenger passenger) {

    if (isPassengerForward(passenger))
        waitingWcPForward.enqueue(passenger);
    else
        waitingWcPBackward.enqueue(passenger);
}
int Station::getSPPriority(string sp_type) {
    if (sp_type == "aged"){
        return 1;
    } else if (sp_type == "POD"){
        return 2;
    } else if (sp_type == "Pregnant"){
        return 3;
    } else {
        return 0;
    }
}

void Station::addPassengerSp(Passenger passenger, string type) {
    int priority = getSPPriority(type);
    if (isPassengerForward(passenger))
        waitingSPForward.enqueue(passenger, priority);
    else
        waitingSPBackward.enqueue(passenger, priority);
}

void Station::addPassengerNp(Passenger passenger) {
    if (isPassengerForward(passenger))
        waitingNPForward.enqueue(passenger);
    else
        waitingNPForward.enqueue(passenger);
}

void Station::addBusForward(Bus bus) {
    if (bus.g)
}

bool Station::isPassengerForward(const Passenger &passenger) const {
    return passenger.getEndStation() > passenger.getStartStation();
}


/*
void Station::addPassenger(Passenger passenger, string sp_type) {
    if (passenger.getStartStation() != stationNumber) return;
    if (passenger.getStartStation() ==  stationNumber){
         if(passenger.getPassengerType() == "wp"){
            if (isForward(passenger))
                waitingWcPForward.enqueue(passenger);
            else
               waitingWcPBackward.enqueue(passenger);
        } else if (passenger.getPassengerType() == "np"){
            if (passenger.getEndStation() > passenger.getStartStation())
                waitingNPForward.enqueue(passenger);
            else
                waitingNPBackward.enqueue(passenger);
        }
        if (passenger.getPassengerType() == "sp" && (sp_type == "aged" || sp_type == "pod" || sp_type == "pregnant")){
            int priority = getSPPriority(sp_type);
            if (passenger.getEndStation() > passenger.getStartStation())
                waitingSPForward.enqueue(passenger, priority);
            else
                waitingSPBackward.enqueue(passenger, priority);
        } else return;
    }
}

bool Station::isPassengerForward(const Passenger &passenger) const {
    return passenger.getEndStation() > passenger.getStartStation();
}

int Station::getSPPriority(string sp_type) {
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

void Station::removePassenger(Passenger passenger, string sp_type) {
    if (passenger.getEndStation() != stationNumber) return;
    if (passenger.getEndStation() ==  stationNumber){
        if(passenger.getPassengerType() == "wp") {
            if (passenger.getEndStation() > passenger.getStartStation())
                waitingWcPForward.dequeue();
            else
                waitingWcPBackward.dequeue();
        } else if (passenger.getPassengerType() == "np"){
            if (passenger.getEndStation() > passenger.getStartStation())
                waitingNPForward.dequeue();
            else
                waitingNPBackward.dequeue();
        }
        if (passenger.getPassengerType() == "sp" && (sp_type == "aged" || sp_type == "pod" || sp_type == "pregnant")){
            if (passenger.getPassengerType() == "sp"
            && (sp_type == "aged" || sp_type == "pod"
            || sp_type == "pregnant")){
                int priority = getSPPriority(sp_type);
                if (passenger.getEndStation() > passenger.getStartStation())
                    waitingSPForward.dequeue();
                else
                    waitingSPBackward.dequeue();
            } else return;
        } else return;
    }
}
*/