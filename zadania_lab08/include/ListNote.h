#ifndef HOMEWORK_LAB08_LISTNOTE_H
#define HOMEWORK_LAB08_LISTNOTE_H

#include "Note.h"

class ListNote : public Note{
private:
    string content;

public:
    ListNote(string, string);
    string getContent();
    void setContent(string);
};

#endif //HOMEWORK_LAB08_LISTNOTE_H
