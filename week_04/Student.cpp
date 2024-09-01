#include "StudentClass.h"
#include <iostream>

using namespace std;

StudentClass::StudentClass() {
    this -> ra = -1; //significa "vazio", pois nessa estrutura os alunos recebem um RA >= 0;
    this -> name = "";
}

StudentClass::StudentClass(int ra, std::string name) {
    this -> ra = ra;
    this -> name = name;
}

string StudentClass::getName() const {
    return name;
}

int StudentClass::getRa() const {
    return ra;
}