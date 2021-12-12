#include "MusicPlayer.h"

using namespace std;

void MusicPlayer::addSong(string Song) {
    songs.push_back(Song);

    if(songs.size() == 1)
        currentSong = songs.begin();
}

void MusicPlayer::deleteSong(string Song){
    for(auto it = songs.begin(); it != songs.end(); ++it)
        if(*it == Song){

            if(it == currentSong)
                currentSong++;

            songs.erase(it);
            break;
        }
}

void MusicPlayer::playAllSongs() {
    for(auto &it : songs)
        cout << endl << it;

    cout << endl << endl;
}

void MusicPlayer::playSong() {
    if(songs.size() == 0) {
        cout << "Brak piosenek." << endl << endl;
        return;
    }

    cout << "Nowy playing: " << *currentSong << endl << endl;
}

void MusicPlayer::playNext() {
    if(songs.size() == 0) {
        cout << "Brak piosenek." << endl << endl;
        return;
    }

    if(*(currentSong) == *(songs.rbegin()))
        currentSong = songs.begin();
    else
        currentSong++;

//    currentSong = currentSong == songs.end() ? songs.begin() : next(currentSong);
//    currentSong = next(currentSong);
    this->playSong();
}

void MusicPlayer::playPrevious(){
    if(songs.size() == 0) {
        cout << "Brak piosenek." << endl << endl;
        return;
    }

    if(*(currentSong) == *(songs.begin()))
        currentSong = songs.end();

    currentSong--;

    this->playSong();
}