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


struct Event_To_Read {
    char A_L;
    std::string type;
    std::string time;
    int bus;
    int station;
    int passengers;
    std::string condition;
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
//    queue<Event_To_Read> eventList;
    queue<Passenger> finishedPassengerList;
    queue<Bus> mBusMaintenance;
    queue<Bus> wBusMaintenance;
public:
    void loadDataFromFile(const std::string &filename);
    // Add a comment to test github
    // For Ibrahem
    // Third test (Push both 2 tests)
    // Ibrahem first commit
    // Nothing meaningful
    void read_file(const char* filename, Event_To_Read* events, Parameters& parameters);
};




#endif //PROJECT_UNIVERSITY_COMPANY_H
