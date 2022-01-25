#include "ListNote.h"

void ListNote::setContent() {
    char stopChar = '!';
    cout << "Stop writing note with " << stopChar << endl;

    cout << "Write the note's content: " << endl;
    cin.ignore();
    getline(cin, content, stopChar);
}