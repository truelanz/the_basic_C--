#include <iostream>
using namespace std;

void valor_alocando_memoria(int* ponteiro)
{
    //NÃO MODIFICA O VALOR DO PONTEIRO FORA DA FUNÇÃO, APONTA PARA O MESMO ENDEREÇO DE MEMÓRIA, TANTO DENTRO QUANTO FORA DA FUNÇÃO.
    ponteiro = new int;
    *ponteiro = 7;
}

void valor_modificando_memoria(int* ponteiro)
{
    //MODIFICA QUALQUER ARGUMENTO PASSADO PARA A FUNÇÃO PARA 8, NO MESMO ENDEREÇO DE MEMÓRIA.
    *ponteiro = 8;
}

void valor_referencia_memoria(int*& ponteiro)
{
    //APONTA PARA DOIS ESPAÇOS DENTRO DA MEMÓRIA
    ponteiro = new int;
    *ponteiro = 9;
}

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    
    int* ponteiro1 = &a;
    int* ponteiro2 = &b;
    int* ponteiro3 = &c;

    cout << "ANTES: " << ponteiro1 << " " << ponteiro2 << " " << ponteiro3 << endl;
    cout << "ANTES: " << *ponteiro1 << " " << *ponteiro2 << " " << *ponteiro3 << endl;

    valor_alocando_memoria(ponteiro1);
    valor_modificando_memoria(ponteiro2);
    valor_referencia_memoria(ponteiro3);

    cout << "DEPOIS: " << ponteiro1 << " " << ponteiro2 << " " << ponteiro3 << endl;
    cout << "DEPOIS: " << *ponteiro1 << " " << *ponteiro2 << " " << *ponteiro3 << endl;
    cout << "DEPOIS: " << a << " " << b << " " << c << endl;

    return 0;
}


