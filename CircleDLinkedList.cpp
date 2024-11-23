


#include "CircleDLinkedList.h"
#include <iostream>
CircleDLinkedList::CircleDLinkedList(): head(nullptr), tail(nullptr), current(nullptr){

}
bool CircleDLinkedList::empty() const{
    return head == nullptr;
}

void CircleDLinkedList::addSong(Song&s){// adds a song to the playlist
    DNode* newSong = new DNode(s); // creates new node 
    newSong->elem= s; //stores the song object data in "elem" from s
if(empty()) {
current = newSong; //assigns the song being added with the current pointer
newSong->next = newSong;
newSong->prev = newSong;
head = newSong;
tail = newSong;
}
else {
    newSong->next = head;//
    head->prev = newSong;
    newSong->prev = tail;
    tail->next = newSong;
    tail = newSong;


}
}

void CircleDLinkedList::removeSong(){// removes the current song that is playing
    DNode* remove = current;
    if(empty()){
        std::cout << "No songs added" << std::endl;
        return;
    }
    if(remove == head){
        head->next = head;
        head-> prev = tail;
        tail->next = head;
        current = head;

    }
    else if(remove == tail) {
        tail= tail->prev;
        tail->next = head;
        head->prev = tail;
        current = tail;//update current song pointer
    }
    else{
        remove->prev->next = remove->next;
        remove->next->prev = remove->prev;
        current = remove->next;//update current to be remove next
        
    }
delete remove;
}

void CircleDLinkedList::currentSong(){
    if(empty()) {
        std::cout<< "No songs are in the playlist" << std::endl;
        return;
    }
    else{
        std::cout<<current->elem.getSingerName() << ", "<<current->elem.getSongTitle()<< std::endl;

    }

}

void CircleDLinkedList::nextSong(){
    if(empty()){
       std::cout<< "There are no songs in playlist" << std::endl;
       return;
    }
    current = current->next;    
}

void CircleDLinkedList::previousSong(){
    current = current->prev;
}


