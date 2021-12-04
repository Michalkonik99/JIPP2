#include "TextNote.h"

TextNote::TextNote(string Title, string Content) : Note(Title){
    content = Content;
}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string Content) {
    content = Content;
}