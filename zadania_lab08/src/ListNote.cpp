#include "ListNote.h"

ListNote::ListNote(string Title, string Content) : Note(Title) {
    content = Content;
}

string ListNote::getContent() {
    return content;
}

void ListNote::setContent(string Content) {
    content = Content;
}