#include "Note.h"
using namespace std;

Note::Note(string Title){
    title = Title;
}

string Note::getTitle() {
    return title;
}

void Note::setTitle(string Title){
    title = Title;
}