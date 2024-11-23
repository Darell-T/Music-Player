#include <iostream>
#include "MusicPlayer.h"
#include "Song.h"

int main() {
    // Initialization
    MusicPlayer player("IPhone 15");
    Song song1("Song 1", "Artist 1");
    Song song2("Song 2", "Artist 2");
    Song song3("Song 3", "Artist 3");

    player.add(song1);
    player.add(song2);
    player.add(song3);
    player.play();
    std::cout<<endl;

    for(int i = 1; i<=3; i++){
        player.next();
        std::cout<<endl;
    }
    std::cout<<endl;
    player.previous();
    std::cout<<endl;

    std::cout<<"Current list of songs starting from last played: " << std::endl;
    player.print(true);
    std::cout<<endl;


    std::cout<<"Current list of songs reversed starting from last played:" << std::endl;
    player.print(false);
    std::cout<<endl;

    player.remove();
    player.play();
    std::cout<<endl;

    for(int i = 1; i<=3; i++){
        player.next();
        std::cout<<endl;
    }
std::cout<<endl;
 std::cout<<"Current list of songs starting from last played: " << std::endl;
player.print(true);
std::cout<<endl;

Song song4("Song 4", "Artist 4"); // test to see if the list is still intact after deletion and insertion
player.add(song4);

std::cout<<"Current list of songs reversed starting from last played:" << std::endl;
player.print(false);



return 0;
}