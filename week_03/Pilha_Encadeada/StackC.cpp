#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    structure = NULL;
}

Stack::~Stack() {
    NodeType* tempPointer;
    while (structure != NULL)
    {
        tempPointer = structure;
        structure = structure -> next;
        delete tempPointer;
    }
}

bool Stack::isEmpty() const {
    return (structure == NULL);
}

bool Stack::isFull() const {
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

void Stack::push(ItemType item) {
    if (!isFull()) {
        NodeType* location;
        location = new NodeType;
        location -> info = item;
        location -> next = structure;
        structure = location;
    } else {
        throw "Stack is already full";
    }
}

ItemType Stack::pop() {
    if (!isEmpty()) {
        NodeType* tempPointer;
        tempPointer = structure;
        ItemType item = structure -> info;
        structure = structure -> next;
        delete tempPointer;
        return item;
    } else {
        throw "Stack is empty";
    }
}

void Stack::print() const {
    NodeType* tempPointer = structure;
    while (tempPointer != NULL)
    {
        cout << tempPointer -> info;
        tempPointer = tempPointer -> next;
    }
    cout << endl;
}

