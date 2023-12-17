//
// Created by PC on 12/8/2023.
//
#pragma once
#ifndef PROJECT_UNIVERSITY_COMPANY_H
#define PROJECT_UNIVERSITY_COMPANY_H

#include <iostream>
#include <queue>
#include "Bus.h"
#include "Passenger.h"
#include "Event.h"
//#include "Station.h"
using namespace std;


struct Event_To_Read {
    char A_L;
    string type;
    string time;
    int id;
    int strtStation;
    int endStation;
    string condition;
};

struct Parameters {
    int num_stations;
    int time_between_stations;
    int num_WBuses;
    int num_MBuses;
    int capacity_WBus;
    int capacity_MBus;
    int trips_before_checkup;
    int checkup_duration_WBus;
    int checkup_duration_MBus;
    int max_waiting_time;
    int get_on_off_time;
};


class Company {
private:
    queue<Bus> station0;
    Station *stations = new Station[50];
    queue<Event> eventList;
    queue<Passenger> finishedPassengerList;
    queue<Bus> mBusMaintenance;
    queue<Bus> wBusMaintenance;
public:
    void read_file(const char* filename, Parameters& parameters);
};




#endif //PROJECT_UNIVERSITY_COMPANY_H
