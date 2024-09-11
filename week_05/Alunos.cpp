#include "Alunos.h"
#include <iostream>
#include <string>

using namespace std;

Alunos::Alunos() {
    this->ra = -1;
    this->nome = "";
};

Alunos::Alunos(int ra, string nome) {
    this->ra = ra;
    this->nome = nome;
}

string Alunos::getNome() const {
    return nome;
}

int Alunos::getRa() const {
    return ra;
}

