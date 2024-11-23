#include "DNode.h"


DNode::DNode(Song& song):elem(song), next(nullptr), prev(nullptr) {
    //created a default constructor to assign "elem" to the song object.
}