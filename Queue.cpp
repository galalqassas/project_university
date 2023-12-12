//
// Created by PC on 12/11/2023.
//

#include "Queue.h"
template <typename T>
Queue<T>::~Queue() {
    Node* temp = front;
    while (temp != nullptr) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
}

template <typename T>
void Queue<T>::enqueue(T item) {
    Node* n = new Node(item);
    if (isEmpty()) {
        front = rear = n;
    }
    else {
        rear->next = n;
        rear = n;
    }
}

template <typename T>
void Queue<T>::dequeue() {
    if (isEmpty()) return;

    Node* temp = front;
    front = front->next;

    if (front == nullptr) rear = nullptr;

    delete temp;
}

template <typename T>
bool Queue<T>::isEmpty() {

    return (front == nullptr && rear == nullptr);
}

template <typename T>
T Queue<T>::peek() {

    if (isEmpty()) return -1;

    return front->value;
}

template <typename T>
void Queue<T>::display() {

    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements are: ";
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}