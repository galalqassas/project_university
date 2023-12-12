//
// Created by PC on 12/10/2023.
//

#ifndef PROJECT_UNIVERSITY_LEAVEEVENT_H
#define PROJECT_UNIVERSITY_LEAVEEVENT_H

#include "Event.h"


class LeaveEvent : public Event {
public:
    LeaveEvent(string time, int id, int start);
    LeaveEvent(Time time, int id, int start);
    void process() override;
    void print() override;
};


#endif //PROJECT_UNIVERSITY_LEAVEEVENT_H
