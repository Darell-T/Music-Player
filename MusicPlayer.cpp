
#include "MusicPlayer.h"
#include <string>
#include <iostream>

MusicPlayer::MusicPlayer(string playerType) : type(playerType), size(0), playerList()
{

}
MusicPlayer::~MusicPlayer()
{

}

void MusicPlayer::play()
{
std::cout << "Song playing is: ";
playerList.currentSong();
    }

void MusicPlayer::next(){
    if(playerList.empty()){
        std::cout<<"There are no songs in playlist." << std::endl;
        return;
    }
    playerList.nextSong();
    std::cout<< "Skipping to the next song." << std::endl;
    std::cout<< "Song playing is: ";
    playerList.currentSong();
}

void MusicPlayer::previous(){
    if(playerList.empty()){
       std::cout<<"There are no songs in playlist." << std::endl;
        return; 
    }
    std::cout << "Going back to previous song."<< std::endl;
    std::cout << "Song playing is: ";
    playerList.previousSong();
    playerList.currentSong();
}

void MusicPlayer::add(Song s)
{
    playerList.addSong(s);
    size++;
}

void MusicPlayer::remove()
{
    playerList.removeSong();
    size--;
}

void MusicPlayer::print(bool front, int a) 
{
    if(playerList.empty()){
std::cout<<"No songs in list" << std::endl;
return;
    }
    if (a == size){
        return;
    }
       if(front) {
        playerList.currentSong();
        playerList.nextSong();
        
    }
    else{
        playerList.currentSong();
        playerList.previousSong();
        
    } 
    print(front, a +1);
}



