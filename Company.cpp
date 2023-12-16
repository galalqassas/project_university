//
// Created by PC on 12/8/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Company.h"






void Company:: read_file(const char* filename, Event_To_Read* events, Parameters& parameters) {
    const int MAX_EVENTS = 100;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    file >> parameters.num_stations >> parameters.time_between_stations;
    file >> parameters.num_WBuses >> parameters.num_MBuses;
    file >> parameters.capacity_WBus >> parameters.capacity_MBus;
    file >> parameters.trips_before_checkup >> parameters.checkup_duration_WBus >> parameters.checkup_duration_MBus;
    file >> parameters.max_waiting_time >> parameters.get_on_off_time;

    int num_events;
    file >> num_events;

    for (int i = 0; i < num_events && i < MAX_EVENTS; ++i) {
        file >> events[i].A_L >> events[i].type >> events[i].time >> events[i].bus;
        file >> events[i].station >> events[i].passengers;

        // Read the condition field
        file.ignore();  // Ignore the space after passengers
        std::getline(file, events[i].condition);
    }

    file.close();
}


