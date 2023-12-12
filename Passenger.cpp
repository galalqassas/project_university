//
// Created by LENOVO on 10/12/2023.
//

#include "Passenger.h"


Passenger::Passenger(const Time& arrivalTime, const Time& getOnTime, const Time& getOffTime, Station startStation, const string& endStation, const string& passengerType)
        : Arrival_Time(arrivalTime), Get_On(getOnTime), Get_Off(getOffTime), Start_Station(startStation), End_Station(endStation), Passenger_Type(passengerType) {}


Time Passenger::getArrivalTime() const {
    return Arrival_Time;
}

void Passenger::setArrivalTime(const Time& arrivalTime) {
    Arrival_Time = arrivalTime;
}


Time Passenger::getGetOnTime() const {
    return Get_On;
}

void Passenger::setGetOnTime(const Time& getOnTime) {
    Get_On = getOnTime;
}


Time Passenger::getGetOffTime() const {
    return Get_Off;
}

void Passenger::setGetOffTime(const Time& getOffTime) {
    Get_Off = getOffTime;
}


Station Passenger::getStartStation() const {
    return Start_Station;
}

void Passenger::setStartStation(const Station& startStation) {
    Start_Station = startStation;
}


Station Passenger::getEndStation() const {
    return End_Station;
}

void Passenger::setEndStation(const Station& endStation) {
    End_Station = endStation;
}


string Passenger::getPassengerType() const {
    return Passenger_Type;
}

void Passenger::setPassengerType(const string& passengerType) {
    Passenger_Type = passengerType;
}

Passenger::Passenger(Time time, Time time1, Time time2, Station station, const char *string, const char *string1) {

}



