#include <iostream>
#include "NoteDirector.h"

using namespace std;

string menu[] = {
        "Dodaj notatke.",
        "Usun notatke.",
        "Edytuj notatke.",
        "Usun wszystkie notatki.",
        "Wypisz wszystkie notatki.",
        "Zakoncz program."
};

bool isInputNumber(){
    if(cin.fail()){
        cout << "Podano litere zamiast liczby" << endl;
        cin.clear();
        cin.ignore();
        return false;
    }
    return true;
}

int passNoteID(int max_id){
    int id;

    while(true) {
        cout << "Podaj nr notatki (od 0): " << endl;
        cin >> id;

        if(!isInputNumber())
            continue;

        cout << max_id << endl;
        if(id >= 0 && id < max_id)
            return id;

        cout << "Podany nr notatki jest niewlasciwy" << endl;
    }
}

void printMenu(){
    static int menu_length = sizeof(menu) / sizeof(string);

    cout << endl << "----- MENU -----" << endl;
    for(int i = 0; i < menu_length; ++i)
        cout << i + 1 << ". " << menu[i] << endl;

    cout << endl;
}

int main(){
    NoteDirector note_director = NoteDirector();
    int action = 0;
    int note_id;
    while(action != 6){
        printMenu();

        cout << "Wybierz nr z menu: ";
        if(!isInputNumber())
            continue;
        cin >> action;

        switch(action){
            case 1:
                cout << endl << "Dodawanie nowej notatki." << endl;
                note_director.addNote();
                break;

            case 2:
                cout << endl << "Usuwanie notatki." << endl;
                note_id = passNoteID(note_director.size());
                note_director.deleteNote(note_id);
                break;

            case 3:
                cout << endl << "Edytowanie notatki." << endl;
                note_id = passNoteID(note_director.size());
                note_director.editNote(note_id);
                break;

            case 4:
                cout << endl << "Usuwanie wszystkich notatek." << endl;
                note_director.clearNotesList();
                break;

            case 5:
                cout << endl << "Wypisanie wszystkich notatek." << endl;
                note_director.printAllNotes();
                break;

            case 6:
                cout << endl << "Konczenie programu." << endl;
                break;

            default:
                cout << endl << "Podano numer akcji z poza zakresu (1-6)." << endl;
                break;
        }
    }

    return 0;
}