
#include <iostream>
#include "timeClass.h"

using namespace std;

// Criando a Lógica da Classe

TimeClass::TimeClass(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

// Getters
int TimeClass::getHour() const {
    return hour;
}
int TimeClass::getMinute() const {
    return minute;
}
int TimeClass::getSecond() const {
    return second;
}

// Setters
void TimeClass::setHour(int hour) {
    this->hour = hour;
}
void TimeClass::setMinute(int minute) {
    this->minute = minute;
}
void TimeClass::setSecond(int second) {
    this->second = second;
}
void TimeClass::print() const {
    cout << hour << ":" << minute << ":" << second << "\n"; 
}

void TimeClass::nextSecond() {
    second += 1;
    if (second >= 60) {
        second = 0;
        minute += 1;
    }
    if (minute >= 60) {
        minute = 0;
        hour += 1;
    }
    if (hour >= 24) {
        hour = 0;
    }
}