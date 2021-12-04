#ifndef HOMEWORK_LAB08_NOTEDIRECTOR_H
#define HOMEWORK_LAB08_NOTEDIRECTOR_H

#include <iostream>
#include <vector>
#include "Note.h"
#include "TextNote.h"
#include "ListNote.h"

class NoteDirector{
private:
    vector<TextNote> notesList;

public:
    void addNote();
    void deleteNote(int);
    void editNote(int);
    void clearNotesList();
    void printAllNotes();
    int size();
};

#endif //HOMEWORK_LAB08_NOTEDIRECTOR_H
