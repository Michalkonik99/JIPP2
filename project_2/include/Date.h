#ifndef CALENDARAPP_DATE_H
#define CALENDARAPP_DATE_H


#include <ctime>


class Date {
private:
    int year;
    int month;
    int day;

public:
    Date();

    void incrementMonth();

    void decrementMonth();

    int getDaysInMonth();

    int getYear() { return year; };

    int getMonth() { return month; };

    int getDay() { return day; };
};


#endif //CALENDARAPP_DATE_H
