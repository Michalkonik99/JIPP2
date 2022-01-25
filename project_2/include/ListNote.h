#ifndef CALENDARAPP_LISTNOTE_H
#define CALENDARAPP_LISTNOTE_H


#include "Note.h"


class ListNote : public Note {
private:
    string content;

public:
    void setContent();

    string getContent(){ return content; };

    void print(){ cout << title << endl << content << endl; };
};


#endif //CALENDARAPP_LISTNOTE_H
