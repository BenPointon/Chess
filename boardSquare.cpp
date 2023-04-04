#include "boardSquare.hpp"

boardSquare::boardSquare(int newColour, std::vector<int> newPosition, std::string newFiller){
    colour = newColour;
    position = newPosition;
    filler = newFiller;
}

boardSquare::~boardSquare(){}