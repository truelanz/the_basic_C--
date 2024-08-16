//Tamanho máximo do vetor
const int MAX_ITEMS = 100;

class StackClass
{
private:
    int length;
    ItemType* structure; //ItemType - tipo genérico criado na classo stack_itemType.h
public:
    //Construtor (new)
    StackClass(/* args */);
    //Destrutor (delete)
    ~StackClass();

    //Metodos
    bool isEmpty() const;
    bool isfFull() const;
    void print() const;
    void push(ItemType); //adicionar elemento acima da pilha
    ItemType pop(); //remover elemento de cima da pilha
};