#ifndef CALENDARAPP_CALENDAR_H
#define CALENDARAPP_CALENDAR_H

#include <vector>
#include <iomanip>
#include <climits>
#include "Date.h"
#include "Day.h"
#include "Note.h"
#include "TextNote.h"
#include "ListNote.h"

using namespace std;


class Calendar {
private:
   Date currentDate;
   vector <Day> days;
   vector <string> daysNamesShort = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
   vector <string> daysNames = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
   vector <Note*> notes;

public:
    Calendar();

    ~Calendar();

    void print();

    void printDay(int);

    void menu();

    void nextMonth();

    void previousMonth();
};


#endif //CALENDARAPP_CALENDAR_H
