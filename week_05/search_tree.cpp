#include "search_tree.h"
#include <iostream>

using namespace std;

void SearchTree::destroyTree(NodeType*& tree) {
    if (tree != NULL) {
        destroyTree(tree->esquerda);
        destroyTree(tree->direita);
        delete tree;
    }
}

bool SearchTree::isEmpty() const {
    return root == NULL;
}

bool SearchTree::isFull() const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch {
        (const std::bad_alloc& e)
            return true;
    }
}

// Método de Busca;
void SearchTree::retrieveAluno(NodeType* tree, Alunos& aluno, bool& found) const {
    if (tree == NULL)
        found = false;
    else if (aluno.getRa() < tree->aluno.getRa())
        retrieveAluno(tree->esquerda, aluno, found);
    else if (aluno.getRa() > tree->aluno.getRa())
        retrieveAluno(tree->direita, aluno, found);
    else {
        aluno = tree->aluno;
        found = true;
    }
}

//Inserir Aluno
void SearchTree::insertAluno(NodeType*& tree, Alunos aluno) {
    if (tree == NULL) {
        tree = new NodeType;
        tree->direita = NULL;
        tree->esquerda = NULL;
        tree->aluno = aluno;
    }
    else if (aluno.getRa() <tree->aluno.getRa())
        insertAluno(tree->esquerda, aluno);
    else
        insertAluno(tree->direita, aluno);
}

//Pre Order print
void SearchTree::printPreOrder(NodeType* tree) const {
    if (tree != NULL) {
        cout << tree->aluno.getNome() << ", ";
        printPreOrder(tree->esquerda);
        printPreOrder(tree->direita);
    }
}
//InOrder print
void SearchTree::printInOrder(NodeType* tree) const {
    if (tree != NULL) {
        printPreOrder(tree->esquerda);
        cout << tree->aluno.getNome() << ", ";
        printPreOrder(tree->direita);
    }
}

//Pre Order print
void SearchTree::printPostOrder(NodeType* tree) const {
    if (tree != NULL) {
        printPreOrder(tree->esquerda);
        printPreOrder(tree->direita);
        cout << tree->aluno.getNome() << ", ";
    }
}

//Deletar aluno
void SearchTree::deleteAluno(NodeType*& tree, int aluno) {
    if (aluno < tree->aluno.getRa())
        deleteAluno(tree->esquerda, aluno);
    else if (aluno > tree->aluno.getRa())
        deleteAluno(tree->direita, aluno);
    if (aluno == tree->aluno.getRa())
        deleteAluno(tree);
}

//Deletar node
void SearchTree::deleteNode(NodeType *&tree){
    Alunos data;
    NodeType* tempPointer;
    tempPointer = tree;
    if(tree->esquerda == NULL) {
        tree = tree->direita;
        delete tempPointer;
    }
    else if (tree->direita == NULL) {
        tree = tree->esquerda;
        delete tempPointer;
    }
    else {
        getSuccessor(tree, data);
        tree->aluno = data;
        deleteAluno(tree->direita, data);
    }
}

//sucessor lógico
void SearchTree::getSuccessor(NodeType *&tree, Alunos &data){
    tree = tree->direita;
    while (tree->esquerda != NULL)
        tree = tree->esquerda;
    data = tree->aluno;
}




