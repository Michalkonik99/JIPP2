#include "Date.h"

using namespace std;

Date::Date(){
    time_t currentTime = time(NULL);
    struct tm* timeInfo = localtime(&currentTime);
    day = timeInfo->tm_mday;
    month= timeInfo->tm_mon + 1;
    year = timeInfo->tm_year + 1900;
}

void Date::incrementMonth() {
    if(month < 12)
        month++;
    else{
        month = 1;
        year++;
    }
}

void Date::decrementMonth() {
    if(month > 1)
        month--;
    else{
        month = 12;
        year--;
    }
}

int Date::getDaysInMonth() {
    if(month == 2){
        if((year % 400 == 0) || (year % 4 == 0 && year % 100))
            return 29;

        return 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    return 31;
}