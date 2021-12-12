#ifndef HOMEWORK_LAB08_MUSICPLAYER_H
#define HOMEWORK_LAB08_MUSICPLAYER_H

#include <iostream>
#include <list>
#include <string>

using namespace std;

class MusicPlayer {
private:
    list<string> songs;
    list<string>::iterator currentSong;

public:
    void addSong(string);

    void deleteSong(string);

    void playAllSongs();

    void playSong();

    void playPrevious();

    void playNext();
};


#endif //HOMEWORK_LAB08_MUSICPLAYER_H
