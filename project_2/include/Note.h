#ifndef CALENDARAPP_NOTE_H
#define CALENDARAPP_NOTE_H


#include <iostream>
using namespace std;


class Note {
protected:
    string title;
    int year;
    int month;
    int day;

public:
    void setDate();

    int getYear()  { return year; };

    int getMonth() { return month; };

    int getDay() { return day; };

    void setTitle();

    string getTitle() { return title; };

    virtual string getContent() = 0;

    virtual void setContent() = 0;

    virtual void print() = 0;

    virtual ~Note();
};


#endif //CALENDARAPP_NOTE_H
