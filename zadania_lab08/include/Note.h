#ifndef HOMEWORK_LAB07_NOTE_H
#define HOMEWORK_LAB07_NOTE_H

#include <iostream>
using namespace std;

class Note{
protected:
    string title;

public:
    Note(string);
    string getTitle();
    void setTitle(string);
    virtual string getContent() = 0;
    virtual void setContent(string) = 0;
};

#endif //HOMEWORK_LAB07_NOTE_H
