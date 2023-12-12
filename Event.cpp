//
// Created by PC on 12/10/2023.
//

#include "Event.h"

#include "Event.h"
#include <iostream>
using namespace std;

// constructor
Event::Event(Time time, int id, Station start, Station end, string ptype) {
    this->time = time;
    this->id = id;
    this->start = start;
    this->end = end;
    this->ptype = ptype;
}

// virtual destructor
Event::~Event() {
    // nothing to do here
}

// getters and setters
Time Event::getTime() const {
    return time;
}

int Event::getId() const {
    return id;
}

Station Event::getStart() const {
    return start;
}

Station Event::getEnd() const {
    return end;
}

string Event::getPtype() const {
    return ptype;
}

void Event::setTime(Time time) {
    this->time = time;
}

void Event::setId(int id) {
    this->id = id;
}

void Event::setStart(Station start) {
    this->start = start;
}

void Event::setEnd(Station end) {
    this->end = end;
}

void Event::setPtype(string ptype) {
    this->ptype = ptype;
}

