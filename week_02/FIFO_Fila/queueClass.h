#include "queue_itemType.h"

const int MAX_ITEMS = 7;

class QueueClass
{
private:
    int front;
    int back;
    int length;
    ItemType* structure;
public:
    //Construtor
    QueueClass(/* args */);
    //Destrutor
    ~QueueClass();

    //Metodos
    bool isEmpty() const;
    bool isfFull() const;
    void print() const;
    void enqueue(ItemType); //adicionar no final da fila
    ItemType dequeue(); //remover elemento do inicio da fila

} ;