//
// Created by PC on 12/10/2023.
//
#pragma once
#ifndef PROJECT_UNIVERSITY_ARRIVALEVENT_H
#define PROJECT_UNIVERSITY_ARRIVALEVENT_H

#include "Event.h"


class ArrivalEvent : public Event {
public:
    ArrivalEvent();

// constructor
    void process() override;
    void print() override;
};


#endif //PROJECT_UNIVERSITY_ARRIVALEVENT_H
