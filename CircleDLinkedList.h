
#include "DNode.h"


class CircleDLinkedList{
    private:
    DNode* head;
    DNode* tail;
    DNode* current;

    
    public:
    CircleDLinkedList();
    bool empty()const;
    void addSong(Song&s);
    void removeSong();
    void print(const bool& front = true);
    void currentSong();
    void nextSong();
    void previousSong();

};