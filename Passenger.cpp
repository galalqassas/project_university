//
// Created by LENOVO on 10/12/2023.
//

#include "Passenger.h"


Passenger::Passenger(const Time& arrivalTime, const Time& getOnTime, const Time& getOffTime, int startStation, int &endStation, const string& passengerType,string Special_Type,int id)
        : Arrival_Time(arrivalTime), Get_On(getOnTime), Get_Off(getOffTime), Start_Station(startStation), End_Station(endStation), Passenger_Type(passengerType),Special_Type(Special_Type),Id(id) {}



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


int Passenger::getStartStation() const {
    return Start_Station;
}

void Passenger::setStartStation(const int& startStation) {
    Start_Station = startStation;
}


int Passenger::getEndStation() const {
    return End_Station;
}

void Passenger::setEndStation(const int& endStation) {
    End_Station = endStation;
}


string Passenger::getPassengerType() const {
    return Passenger_Type;
}

void Passenger::setPassengerType(const string& passengerType) {
    Passenger_Type = passengerType;
}

void Passenger::setSpecialType(string special){
    Special_Type=special;
}
string Passenger::getSpecialType() const{
    return Special_Type;
}
void Passenger::setId(int id){
    Id=id;
}
int Passenger::getId() const{
    return Id;
}




