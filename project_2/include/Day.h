#ifndef CALENDARAPP_DAY_H
#define CALENDARAPP_DAY_H


#include <iostream>
#include "Date.h"
using namespace std;


class Day {
private:
    int dayNumber;
    int monthNumber;
    int yearNumber;
    bool hasNote;
    string name;

public:
    Day(int, int, int);

    //~Day() {cout << "Day deleted" << endl; };

    int getDay() { return dayNumber; };

    int getMonth() { return monthNumber; };

    int getYear() { return yearNumber; };

    void setName(string Name) { name = Name; };

    string getName() {return name; };
};


#endif //CALENDARAPP_DAY_H
