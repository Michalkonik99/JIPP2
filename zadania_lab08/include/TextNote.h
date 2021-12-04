#ifndef HOMEWORK_LAB08_TEXTNOTE_H
#define HOMEWORK_LAB08_TEXTNOTE_H

#include "Note.h"

class TextNote : public Note{
private:
    string content;

public:
    TextNote(string, string);
    string getContent();
    void setContent(string);
};

#endif //HOMEWORK_LAB08_TEXTNOTE_H
