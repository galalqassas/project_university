//
// Created by PC on 12/10/2023.
//

#ifndef PROJECT_UNIVERSITY_EVENT_H
#define PROJECT_UNIVERSITY_EVENT_H


#include <string>
#include "Time.h"
#include "Station.h"
using namespace std;

class Event {
protected:
    Time time; // event time step in hh:mm format
    int id; // passenger ID
    Station start; // start station
    Station end; // end station (only for arrival events)
    string ptype; // passenger type (SP, WP, NP) (only for arrival events)
public:
    // constructor
    Event(Time time, int id, int start, int end = 0, string ptype);
    virtual void process() = 0;
    virtual void print() = 0;
    virtual ~Event();
    // getters
    Time getTime() const;
    int getId() const;
    Station getStart() const;
    Station getEnd() const;
    string getPtype() const;
    // settersذ
    void setTime(Time time);
    void setId(int id);
    void setStart(Station start);
    void setEnd(Station end);
    void setPtype(string ptype);

};


#endif //PROJECT_UNIVERSITY_EVENT_H
