#include <stdio.h>
#include <iostream>
#include <cstring>

//Criando um novo type com struct para representar a data;
typedef struct {int Dia, Mes, Ano;} DATA;

// criando a struct;
struct person {
    char name[8];
    int age;
    float salary;
    DATA birth_date;
} PESSOA;

// Método para mostrar informações na tela;
void Printar(struct person pessoa) {
    printf("Nome: %s, Idade: %d, Salario: %.4f, Aniversario: %d/%d/%d\n", pessoa.name, pessoa.age, pessoa.salary, pessoa.birth_date.Dia, pessoa.birth_date.Mes, pessoa.birth_date.Ano);
}

int main()
{
    //Criando "objeto" pessoa1 com os atributos da struct
    struct person pessoa1;
    strcpy(pessoa1.name, "Paprico");
    pessoa1.age = 53;
    pessoa1.salary = 2.000;
    pessoa1.birth_date = {01, 01, 1971};

    //Criando "objeto" pessoa2 com os atributos da struct - de maneira diferente;
    struct person pessoa2 = {"Katia", 22, 3.000, {01, 01, 2002}};
    
    Printar(pessoa1);
    Printar(pessoa2);

    return 0;
}
