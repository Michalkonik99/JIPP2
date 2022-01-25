#include "TextNote.h"

void TextNote::setContent() {
    cout << "Write the note's content: " << endl;
    cin.ignore();
    getline(cin, content);
}
