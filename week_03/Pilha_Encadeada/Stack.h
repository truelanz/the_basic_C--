#include "stack_nodeType.h"

//Tamanho máximo do vetor
const int MAX_ITEMS = 100;

class Stack
{
private:
    NodeType* structure; //NodeType - sempre apontará para o "topo" da "pilha"

public:
    //Construtor (new)
    Stack(/* args */);
    //Destrutor (delete)
    ~Stack();

    //Metodos
    bool isEmpty() const;
    bool isFull() const;
    void print() const;
    void push(ItemType); //adicionar elemento acima da pilha
    ItemType pop(); //remover elemento de cima da pilha
};