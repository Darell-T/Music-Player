
#include <iostream>
#include "Song.h"
using namespace std;
Song::Song(string songTitle,string singerName) : songTitle(songTitle), singerName(singerName)
{

}

Song::~Song()
{

}

string Song::getSongTitle() const
{
    return songTitle;
}

string Song::getSingerName()const 
{
    return singerName;
}

void Song::setSongTitle(string songTitle)
{
    this->songTitle = songTitle;
}

void Song::setSingerName(string singerName)
{
    this->singerName = singerName;
}

std::ostream& operator<<(std::ostream& os, const Song& song) 
{
    os << "Singer: " << song.getSingerName() << ", Title: " << song.getSongTitle();
    return os;
}