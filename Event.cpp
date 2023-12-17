//
// Created by PC on 12/10/2023.
//

#include "Event.h"

#include "Event.h"
#include <iostream>
using namespace std;


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

void Event::setPtype(string ptype) {
    this->ptype = ptype;
}

// constructor
Event::Event() {

}

int Event::getStart() const {
    return start;
}

void Event::setStart(int start) {
    Event::start = start;
}

int Event::getAnEnd() const {
    return end;
}

void Event::setAnEnd(int anEnd) {
    end = anEnd;
}
