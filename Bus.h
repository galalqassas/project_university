//
// Created by LENOVO on 10/12/2023.
//
#pragma once
#ifndef DATA_STRUCTURE_PROJECT_BUS_H
#define DATA_STRUCTURE_PROJECT_BUS_H
//This is my secret message if you found it, delete it.
#include "Passenger.h"
#include "PriorityQueue.h"
#include "LinkedList.h"
#include <string>
class Passenger;
using namespace std;



class Bus {
private:
    string busType;
    int busCapacity;
    int Num_of_trips; // number of delivery trips of this bus
    int Passenger_number; // number of passenger travelled on this bus
    int journeys;
    int checkupHours;
    PriorityQueue<Passenger*> passengers; // moving passengers
    int currentStation;
    void getPrioritysp(string passenger_type);

public:
    int getNumOfTrips() const;

    void setNumOfTrips(int numOfTrips);

    int getJourneys() const;

    void setJourneys(int journeys);

    int getCheckupHours() const;

    void setCheckupHours(int checkupHours);

private:
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
    void add_passenger(Passenger* passenger, string passenger_type);
    void remove_passenger(Passenger* passenger);
};
#endif //DATA_STRUCTURE_PROJECT_BUS_H