
#ifndef MUSICPLAYER_H_
#define MUSICPLAYER_H_
#include <string>
#include "Song.h"
#include "CircleDLinkedList.h"

class MusicPlayer {
private:
    std::string type;
    int size;
    CircleDLinkedList playerList;

public:
    MusicPlayer(std::string);
    virtual ~MusicPlayer();
    void play();
    void next();
    void previous();
    void add(Song);
    void remove();
    void print(bool, int a = 0);
int a;
    friend class CircleDLinkedList;
};
#endif