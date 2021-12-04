#include "NoteDirector.h"

void passNoteData(string &title, string &content){
    cin.ignore();
    cout << "Note title: ";
    getline(cin, title);
    cout << "Note content: " << endl;
    getline(cin, content);
}

void NoteDirector::addNote(){
    string title, content;
    passNoteData(title, content);
    notesList.push_back({title, content});
}

void NoteDirector::deleteNote(int id){
    vector<TextNote>::iterator it = notesList.begin();
    it += id;
    notesList.erase(it);
}

void NoteDirector::editNote(int id){
    cin.ignore();
    string buffer;
    cout << "Podaj nowy tytul notatki: ";
    getline(cin, buffer);
    notesList[id].setTitle(buffer);

    cout << "Podaj nowy content notatki: " << endl;
    getline(cin, buffer);
    notesList[id].setContent(buffer);
}

void NoteDirector::clearNotesList(){
    notesList.clear();
}

void NoteDirector::printAllNotes() {
    for (int i = 0; i < notesList.size(); ++i) {
        cout << "TITLE: " << notesList[i].getTitle() << endl;
        cout << "CONTENT: " << notesList[i].getContent() << endl << "--------------------" << endl;
    }
}

int NoteDirector::size(){
    return notesList.size();
}