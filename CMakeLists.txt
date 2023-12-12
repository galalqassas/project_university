cmake_minimum_required(VERSION 3.24)
project(project_university)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_university main.cpp Company.cpp Company.h Passenger.cpp Passenger.h Bus.cpp Bus.h Event.cpp Event.h ArrivalEvent.cpp ArrivalEvent.h LeaveEvent.cpp LeaveEvent.h Time.cpp Time.h Station.cpp Station.h LinkedList.cpp Queue.cpp Queue.h PriorityQueue.cpp PriorityQueue.h Station.h)
