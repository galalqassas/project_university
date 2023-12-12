//
// Created by PC on 12/10/2023.
//


#include "LeaveEvent.h"
#include <iostream>
using namespace std;

LeaveEvent::LeaveEvent(Time time, int id, int start) : Event(time, id, start) {
}

void LeaveEvent::process() {
    cout << "Processing a leave event" << endl;
}

void LeaveEvent::print() {
    cout << "Id = " << getId() << ", start = " << getStart() << endl;
}