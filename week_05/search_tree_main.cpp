
#include "search_tree.h"
#include <iostream>

using namespace std;

const int NUM_ALUNOS = 8;

int main() {
    SearchTree SearchTree;

    int ras[NUM_ALUNOS] = {20, 18, 58, 7, 19, 26, 25, 30};
    string nomes[NUM_ALUNOS] = {
        "Pedro", "Raul", "Paulo", "Carlos", "Lucas", "Maria", "Samanta", "Ulisses"
    };
    Alunos alunos[NUM_ALUNOS];

    for(int i = 0; i < NUM_ALUNOS; i++) {
        Alunos aluno = Alunos(ras[i], nomes[i]);
        alunos[i] = aluno;
        SearchTree.insertAluno(aluno);
    }

    cout << "PreOrder: ";
    SearchTree.printPreOrder();
    cout << endl;
    cout << "InOrder: ";
    SearchTree.printInOrder();
    cout << endl;
    cout << "PostOrder: ";
    SearchTree.printPostOrder();
    cout << endl;
}