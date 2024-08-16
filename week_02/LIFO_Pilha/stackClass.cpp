#include "stackClass.h"
#include <iostream>

using namespace std;

//Construtor
StackClass::StackClass() { 
    length = 0;
    //faz a alocação dinamica do vetor dentro do construtor.
    structure = new ItemType[MAX_ITEMS];
    };

//Destrutor
StackClass::~StackClass() { 
    delete [] structure;
    }

bool StackClass::isEmpty() const {
    return (length == 0);
}

bool StackClass::isfFull() const {
    return (length == MAX_ITEMS);
}

void StackClass::push(ItemType item) {
    if (!isfFull()) {
        structure[length] = item;
        length++;
    } else {
        throw "Stack is already full!";
    }
}

ItemType StackClass::pop() {
    if (!isEmpty()) {
        ItemType aux = structure[length-1];
        length--;
        return aux;
    } else {
        throw "Stack is already empty!";
    }
}

void StackClass::print() const {
    cout << "Pilha =  ";
    for (int i = 0; i < length; i++)
    {
        cout << structure[i];
    }
    cout << endl;
}
