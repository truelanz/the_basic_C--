#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    front = NULL;
    rear = NULL;
}

Queue::~Queue() {
    NodeType* tempPointer;
    while (front != NULL)
    {
        tempPointer = front;
        front = front -> next;
        delete tempPointer;
    }
    rear = NULL;
}

bool Queue::isEmpty() const {
    return (front == NULL);
}

bool Queue::isFull() const {
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(const std::bad_alloc e)
    {
        return true;
    }
}

void Queue::enqueue(ItemType newItem) {
    if (!isFull()) {
        NodeType* newNode;
        newNode = new NodeType;
        newNode -> info = newItem;
        newNode -> next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear -> next = newNode;
        rear = newNode;
    } else {
        throw "Queue is already full";
    }
}

ItemType Queue::dequeue() {
    if (!isEmpty()) {
        NodeType* tempPointer;
        tempPointer = front;
        ItemType item = front -> info;
        front = front -> next;
        if (front == NULL)
            rear = NULL;
        delete tempPointer;
        return item;
    } else {
        throw "Queue is empty";
    }
}

void Queue::print() const {
    NodeType* tempPointer = front;
    while (tempPointer != NULL)
    {
        cout << tempPointer -> info;
        tempPointer = tempPointer -> next;
    }
    cout << endl;
}

