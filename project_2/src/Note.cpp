#include "Note.h"

void Note::setDate(){
    cout << "Enter year: " << endl;
    cin >> year;

    cout << "Enter month: " << endl;
    cin >> month;

    cout << "Enter day: " << endl;
    cin >> day;
}

void Note::setTitle() {
    cout << "Write the note's title: " << endl;
    cin.ignore();
    getline(cin, title);
}

Note::~Note() {}