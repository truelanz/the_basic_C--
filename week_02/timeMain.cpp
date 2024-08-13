#include <iostream>
#include "timeClass.h"

using namespace std;

//Instanciando e usando a Classe

int main() {

    // instanciando Classe
    TimeClass time1(23,59,59);
    time1.print();

    //Modificando classe com SETTERS
    time1.setHour(20);
    time1.setMinute(10);
    time1.setSecond(5);
    time1.print();

    //Usando método nextSecond
    time1.nextSecond(); // 20:10:6
    time1.nextSecond(); // 20:10:7
    time1.nextSecond(); // 20:10:8
    time1.nextSecond(); // 20:10:9
    time1.nextSecond(); // 20:10:10

    //pegando valor com GET
    cout << time1.getHour(); // 20


    return 0;
}