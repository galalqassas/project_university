//
// Created by PC on 12/8/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Company.h"


void Company::loadDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    int numStations, stationInterval, numWheelchairBuses, numMixedBuses;
    int capacityWheelchair, capacityMixed, tripsBeforeCheckup, checkupDuration, maxWaitTime, getOnOffTime;
    int numEvents;

    file >> numStations >> stationInterval >> numWheelchairBuses >> numMixedBuses;
    file >> capacityWheelchair >> capacityMixed >> tripsBeforeCheckup >> checkupDuration >> maxWaitTime >> getOnOffTime;
    file >> numEvents;


    for (int i = 0; i < numEvents; ++i) {
        int eventTime, eventId, start, end;
        std::string eventType, passengerType;

        file >> eventTime >> eventId >> start >> end >> eventType;

        if (eventType == "Arrival") {
            file >> passengerType;
            ArrivalEvent arrivalEvent(eventTime, eventId, start, end, passengerType);
            processEvent(arrivalEvent);
        } else if (eventType == "Leave") {
            LeaveEvent leaveEvent(eventTime, eventId, start);
            processEvent(leaveEvent);
        }
    }
    file.close();
}

void processEventsFromFile(const std::string& filename) {
    Company myCompany;
    myCompany.loadDataFromFile(filename);
    std::cout << "Number of Stations: " << myCompany.getNumStations() << std::endl;
    const std::vector<Station>& stations = myCompany.getStations();
    for (const auto& station : stations) {
        std::cout << "Station " << station.getStationNumber() << " has " << station.getWaitingSpForward().size()
                  << " waiting SP passengers and " << station.getAvailableBusesForward().size() << " available buses.\n";
    }
}







void read_file(const char* filename, Event* events, Parameters& parameters) {
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


