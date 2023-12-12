//
// Created by LENOVO on 10/12/2023.
//

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
    Station Start_Station;
    Station End_Station;
    string Passenger_Type;

public:
    Passenger(const Time& arrivalTime, const Time& getOnTime, const Time& getOffTime, Station startStation, const string& endStation, const string& passengerType);
    Time getArrivalTime() const;
    void setArrivalTime(const Time& arrivalTime);
    Time getGetOnTime() const;
    void setGetOnTime(const Time& getOnTime);
    Time getGetOffTime() const;
    void setGetOffTime(const Time& getOffTime);
    Station getStartStation() const;
    void setStartStation(const Station& startStation);
    Station getEndStation() const;
    void setEndStation(const Station& endStation);
    string getPassengerType() const;
    void setPassengerType(const string& passengerType);

    Passenger(Time time, Time time1, Time time2, Station station, const char string[1], const char string1[1]);

    explicit Passenger(Time time, Time time1, Time time2, Station station, const char string[1], const char string1[1]);

    Passenger(Time time, Time time1, Time time2, Station station, const char string[1], const char string1[1]);
};


#endif //DATA_STRUCTURE_PROJECT_PASSENGER_H
