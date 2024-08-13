#ifndef TIMECLASS_H
#define TIMECLASS_H

//Criando a estrutura da Classe

class TimeClass
{
private:
    int hour, minute, second;

public:
    //construtor
    TimeClass(int hour = 0, int minute = 0, int second = 0);

    //getters and setters
    int getHour() const;
    void setHour(int hour);

    int getMinute() const;
    void setMinute(int minute);

    int getSecond() const;
    void setSecond(int second);

    void print() const;
    void nextSecond();

};

#endif