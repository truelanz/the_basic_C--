#include "Alunos.h"

struct NodeType
{
    Alunos aluno;
    NodeType* esquerda; //  |*esquerda|alunoconteúdo)|*direita|
    NodeType* direita;
};

class SearchTree
{
private:
    void destroyTree(NodeType*& tree); //desalocar toda a árvore
    void retrieveAluno(NodeType* tree, Alunos& item, bool& found) const; //altera o valor
    void insertAluno(NodeType*& tree, Alunos item); //inserir aluno na arvore
    void deleteAluno(NodeType*& tree, int item);
    void deleteNode(NodeType*& tree);
    void getSuccessor(NodeType*& tree, Alunos& data);
    void printTree(NodeType *tree) const;
    void printPreOrder(NodeType* tree) const;
    void printInOrder(NodeType* tree) const;
    void printPostOrder(NodeType* tree) const;

    NodeType* root;
    
public:
    SearchTree() {root = NULL;}
    ~SearchTree() {destroyTree(root);}
    bool isEmpty() const;
    bool isFull() const;
    void retrieveAluno(Alunos& item, bool& found) const {
        retrieveAluno(root, item, found);
    }

    void insertAluno(Alunos item) { insertAluno(root, item);}
    void deleteAluno(int item) { deleteAluno(root, item);}
    void insertAlunoPre() const { printPreOrder(root);}
    void insertAlunoIn() const { printInOrder(root);}
    void insertAlunoPost() const { printPostOrder(root);}

};
