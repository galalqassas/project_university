//
// Created by PC on 12/8/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Company.h"
#include "ArrivalEvent.h"
#include "LeaveEvent.h"
#include "Passenger.h"
using namespace std;

void Company:: read_file(const char* filename, Parameters& parameters) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    file >> parameters.num_stations >> parameters.time_between_stations;
    file >> parameters.num_WBuses >> parameters.num_MBuses;
    file >> parameters.capacity_WBus >> parameters.capacity_MBus;
    file >> parameters.trips_before_checkup >> parameters.checkup_duration_WBus >> parameters.checkup_duration_MBus;
    file >> parameters.max_waiting_time >> parameters.get_on_off_time;

    int num_events;
    file >> num_events;
    char eventType;
    file >> eventType;
    if (eventType == 'A')
        ArrivalEvent event;
    if (eventType == 'L')
        LeaveEvent event;

    for (int i = 0; i < num_events; ++i) {
        Passenger p;
        file >>  >> events[i].time >> events[i].bus;
        file >> events[i].station >> events[i].passengers;
        // Read the condition field
        file.ignore();  // Ignore the space after passengers
        getline(file, events[i].condition);
    }
    file.close();


}

/*
   int num_events;
    file >> num_events;
    char eventType;
    file >> eventType;
    if (eventType == 'A')
        ArrivalEvent event;
    if (eventType == 'L')
        LeaveEvent event;

    for (int i = 0; i < num_events; ++i) {
        Passenger p;
        string str;
        file >> str;
        p.setPassengerType(str) >>

        events[i].time >> events[i].bus;
        file >> events[i].station >> events[i].passengers;
        // Read the condition field
        file.ignore();  // Ignore the space after passengers
        getline(file, events[i].condition);
    }
 */
