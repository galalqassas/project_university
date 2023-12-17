//
// Created by PC on 12/8/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Company.h"

void Company:: read_file(const char* filename, Parameters& parameters) {
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
    Event_To_Read events[num_events];
    for (int i = 0; i < num_events; ++i) {
        file >> events[i].A_L >> events[i].type >> events[i].time >> events[i].id;
        file >> events[i].strtStation >> events[i].endStation;
        char sptype;
        file >> sptype;
        file.ignore();
        std::getline(file, events[i].condition);

        Passenger p;
        p.setPassengerType(events[i].type);

        string hour = events[i].time.substr(0, 1);
        string minute = events[i].time.substr(3, 2);
        Time t;
        t.setHour(stoi(hour));
        t.setMin(stoi(minute));
        t.setSec(0);
        p.setArrivalTime(t);
        p.setId(events[i].id);
        p.setStartStation(events[i].strtStation);
        p.setEndStation(events[i].endStation);

        if (p.getPassengerType() == "NP")
            stations[events[i].strtStation].addPassengerNp(p);
        else if (p.getPassengerType() == "SP")
            stations[events[i].strtStation].addPassengerSp(p, "Aged");
        else if (p.getPassengerType() == "WP")
            stations[events[i].strtStation].addPassengerWp(p);
    }
    file.close();
}


