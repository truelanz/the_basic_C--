#include <iostream>
#include "queueClass.h"

using namespace std;

//Construtor
QueueClass::QueueClass() {
    front = 0;
    back = 0;
    length = 0;
    structure = new ItemType[MAX_ITEMS];
};

//Destrutor
QueueClass::~QueueClass() { 
    delete [] structure;
};

bool QueueClass::isEmpty() const {
    return (back == front);
}

bool QueueClass::isfFull() const {
    return (back - front == MAX_ITEMS);
}

void QueueClass::enqueue(ItemType item) {
    if (!isfFull()) {
        structure[back % MAX_ITEMS] = item;
        back++;
    } else {
        throw "Queue is already full!";
    }
}


ItemType QueueClass::dequeue() {
    if (!isEmpty()) {
        front++;
        return structure[(front - 1) % MAX_ITEMS];
    } else {
        throw "Queue is already empty!";
    }
}

void QueueClass::print() const {
    cout << "Fila =  ";
    for (int i = front; i < back; i++)
    {
        cout << structure[i % MAX_ITEMS];
    }
    cout << endl;
}
