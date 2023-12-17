//
// Created by PC on 12/10/2023.
//

#include "ArrivalEvent.h"
#include "ArrivalEvent.h"
#include <iostream>
using namespace std;

// constructor
ArrivalEvent::ArrivalEvent(Time time, int id, int start, int end, string ptype) : Event(time, id, start, end, ptype) {
    // nothing to do here
}


void ArrivalEvent::process() {
    cout << "Processing an arrival event" << endl;
}


void ArrivalEvent::print() {
    cout << "Id = " << getId() << ", start = " << getStart() << ", end = " << getEnd() << ", ptype = " << getPtype() << endl;
}

ArrivalEvent::ArrivalEvent() {

}
