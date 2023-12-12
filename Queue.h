//
// Created by PC on 12/11/2023.
//

#ifndef PROJECT_UNIVERSITY_QUEUE_H
#define PROJECT_UNIVERSITY_QUEUE_H


#include <iostream>
using namespace std;

template <typename T> // declare a generic type T
class Queue {
private:
    class Node {
    public:
        T value;
        Node* next;
        Node(T value): value(value), next(nullptr) {}
    };
    Node* front;
    Node* rear;
public:
    Queue() { front = rear = nullptr; }
    ~Queue();
    void enqueue(T item);
    void dequeue();
    bool isEmpty();
    T peek();
    void display();
};


#endif //PROJECT_UNIVERSITY_QUEUE_H
