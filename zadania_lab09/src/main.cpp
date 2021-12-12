#include <iostream>
#include <vector>
#include "MusicPlayer.h"

using namespace std;

void task_01(){
    cout << "Zadanie 1" << endl << endl;
    string sentence;

    cout << "Podaj wyrazenie: " << endl;
    getline(cin, sentence);

    string::iterator it;

    for(it = sentence.begin(); it != sentence.end(); ++it)
        if(*it >= 97 && *it <= 122)
            *it -= 32;

    cout << sentence << endl;
}

void task_02(){
    cout << "Zadanie 2" << endl << endl;

    MusicPlayer player = MusicPlayer();
    player.addSong("first");
//    player.playSong();
    player.addSong("second");
    player.addSong("third");
//    player.playAllSongs();
////    player.playPrevious();
//    player.playNext();
//    player.playNext();
//    player.playNext();
//    player.playNext();
//    player.deleteSong("second");
//    player.playAllSongs();

//    MusicPlayer player = MusicPlayer();
    int chosen_action = -1;
    string user_song;

    while(chosen_action != 0) {
        cout << "0. Zakoncz program." << endl;
        cout << "1. Dodaj piosenke." << endl;
        cout << "2. Usun piosenke." << endl;
        cout << "3. Zagraj wszystkie piosenki." << endl;
        cout << "4. Zagraj obecna piosenke." << endl;
        cout << "5. Zagraj poprzednia piosenke." << endl;
        cout << "6. Zagraj nastepna piosenke." << endl;
        cin >> chosen_action;

        switch (chosen_action) {
            case 0:
                cout << "Koniec programu." << endl;
                break;
            case 1:
                cout << "Podaj piosenke do dodania: ";
                cin >> user_song;
                player.addSong(user_song);
                break;
            case 2:
                cout << "Podaj piosenke do usuniecia: ";
                cin >> user_song;
                player.deleteSong(user_song);
                break;
            case 3:
                player.playAllSongs();
                break;
            case 4:
                player.playSong();
                break;
            case 5:
                player.playPrevious();
                break;
            case 6:
                player.playNext();
                break;
            default:
                cout << "Podano nr z poza zakresu 0-6." << endl;
                break;
        }
    }
}

int main(){

    task_01();
    task_02();

    return 0;
}