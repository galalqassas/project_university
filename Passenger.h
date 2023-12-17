//
// Created by LENOVO on 10/12/2023.
//
#pragma once
#ifndef DATA_STRUCTURE_PROJECT_PASSENGER_H
#define DATA_STRUCTURE_PROJECT_PASSENGER_H
#include "Time.h"
#include <string>
#include "Station.h"
using namespace std;



class Passenger {
private:
    Time Arrival_Time;
    Time Get_On;
    Time Get_Off;
    int Start_Station;
    int End_Station;
    string Passenger_Type;
    string Special_Type;
    int Id;
public:
    Passenger(const Time& arrivalTime, const Time& getOnTime, const Time& getOffTime, int startStation, int &endStation, const string& passengerType,string Special_Type,int id);
    Time getArrivalTime() const;
    void setArrivalTime(const Time& arrivalTime);
    Time getGetOnTime() const;
    void setGetOnTime(const Time& getOnTime);
    Time getGetOffTime() const;
    void setGetOffTime(const Time& getOffTime);
    int getStartStation() const;
    void setStartStation(const int& startStation);
    int getEndStation() const;
    void setEndStation(const int& endStation);
    string getPassengerType() const;
    void setPassengerType(const string& passengerType);
    void setSpecialType(string special);
    string getSpecialType() const;
    void setId(int id);
    int getId() const;

    Passenger();
};


#endif //DATA_STRUCTURE_PROJECT_PASSENGER_H
