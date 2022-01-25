#ifndef CALENDARAPP_TEXTNOTE_H
#define CALENDARAPP_TEXTNOTE_H


#include "Note.h"


class TextNote : public Note{
private:
    string content;

public:
    void setContent();

    string getContent() { return content; };

    void print(){ cout << title << endl << content << endl; };
};


#endif //CALENDARAPP_TEXTNOTE_H
