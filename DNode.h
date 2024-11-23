

#include "Song.h"
class DNode{
    private:
    DNode* next;
    DNode* prev;
    Song elem;
public:
DNode(Song& song); // parametized constructor to assign a song object to elem
    
    friend class CircleDLinkedList;
    friend class MusicPlayer;
};