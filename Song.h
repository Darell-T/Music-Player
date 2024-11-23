
#ifndef SONG_H_
#define SONG_H_

#include <string>
#include <iostream>

using namespace std;
class Song{
    private:
    std::string songTitle;
    std::string singerName;

    public:
    Song(string,string);
    ~Song(); 
    string getSongTitle() const; 
    string getSingerName()const; 
    void setSongTitle(string); 
    void setSingerName(string);
    

    friend std::ostream& operator<<(std::ostream& os, const Song& song);

};
#endif