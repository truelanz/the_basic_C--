#include "queue_nodeType.h"

//Tamanho máximo do vetor
const int MAX_ITEMS = 100;

class Queue
{
private:
    NodeType* front;
    NodeType* rear;

public:
    //Construtor (new)
    Queue(/* args */);
    //Destrutor (delete)
    ~Queue();

    //Metodos
    bool isEmpty() const;
    bool isFull() const;
    void print() const;
    void enqueue(ItemType); //adicionar elemento acima da pilha
    ItemType dequeue(); //remover elemento de cima da pilha
};