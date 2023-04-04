#include "chessPiece.hpp"
#include <string>
#include <vector>

chessPiece::chessPiece(bool newColour, std::vector<int> newPosition, std::string newType, bool firstMove, std::string newDescription){
    colour = newColour;
    position = newPosition;
    type = newType;
    firstMove = firstMove;
    description = newDescription;
    }

chessPiece::~chessPiece(){}

// returns 0 if legal move, 1 if illegal move
// bool chessPiece::legalMove(std::vector<int> newPosition){
//     // if pawn rules
//     if (type == "p"){
//         // check if move is on the board
//         if (newPosition[0] >= 1 && newPosition[0] <=8 && newPosition[1] >=3 && newPosition[1] <= 8 ){
//             // rules if it is the pawn's first move
//             if (firstMove == true){
//                 // check move is <= 1 horizontal and (<=2 and >=1 vertical)
//                 if ( (((position[0] - newPosition[0]) * (position[0] - newPosition[0])) <= 1) && (((position[1] - newPosition[1]) * (position[1] - newPosition[1])) <= 4) &&  (((position[1] - newPosition[1]) * (position[1] - newPosition[1])) > 0)){

//                 }
//             }
//             else{

//             }
//         }
//         else{
//             return 1;
//         }
//     }
    // if rook rules

    // if knight rules

    // if bishop rules

    // if queen rules

    // if king rules
