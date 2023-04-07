#include "chessPiece.hpp"
#include <string>
#include <vector>

std::vector<std::vector<int>> returnUnblockedPositiveXLoop(int x, int y, std::vector<chessPiece> activePieces, int targetColour, int calc){
    std::vector<std::vector<int>> tempSquaresVector;
    std::vector<int> tempSquare;
    int tempX;
    int tempY;
    if(calc == 0){
        for(int i=(x+1);i<8;i++){
            tempX = i;
            tempY = y;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            for(int j=0;j<activePieces.size();j++){
                if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour){
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour){
                    tempSquaresVector.push_back(tempSquare);
                    return tempSquaresVector;
                }
                else{
                }
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 1){
        for(int i=(x-1);i>=0;i--){
            tempX = i;
            tempY = y;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            for(int j=0;j<activePieces.size();j++){
                if(tempSquare == activePieces[j].position){
                    return tempSquaresVector;
                }
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 2){
        for(int i=(y+1);i<8;i++){
            tempX = x;
            tempY = i;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            for(int j=0;j<activePieces.size();j++){
                if(tempSquare == activePieces[j].position){
                    return tempSquaresVector;
                }
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 3){
        for(int i=(y-1);i>=0;i--){
            tempX = x;
            tempY = i;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            for(int j=0;j<activePieces.size();j++){
                if(tempSquare == activePieces[j].position){
                    return tempSquaresVector;
                }
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    return tempSquaresVector;
}

chessPiece::chessPiece(bool newColour, std::vector<int> newPosition, std::string newType, bool firstMove, std::string newDescription){
    colour = newColour;
    position = newPosition;
    type = newType;
    firstMove = firstMove;
    description = newDescription;
    }

chessPiece::chessPiece(){
    colour = 0;
    position = {0,0};
    type = "0";
    firstMove = 0;
    description = "0";
}

chessPiece::~chessPiece(){}

std::vector<std::vector<int>> chessPiece::squaresAffected(std::vector<chessPiece> activePieces){
    std::vector<std::vector<int>> tempSquaresVector;
    std::vector<int> tempSquare;
    int tempX;
    int tempY;
    if(type == "p"){
        if(position[0] != 0 && position[0] != 7){
            tempX = position[0] + 1;
            tempY = position[1] + 1;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
            tempX = position[0] - 1;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        else if(position[0] == 0){
            tempX = position[0] + 1;
            tempY = position[1] + 1;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        else{
            tempX = position[0] - 1;
            tempY = position[1] + 1;
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }    
    }
    else if(type == "r"){
        std::vector<std::vector<int>> posX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 0);
        std::vector<std::vector<int>> negX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 1);
        std::vector<std::vector<int>> posY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 2);
        std::vector<std::vector<int>> negY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 3);
        tempSquaresVector.reserve(posX.size() + negX.size() + posY.size() + negY.size());
        tempSquaresVector.insert(tempSquaresVector.end(), posX.begin(), posX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negX.begin(), negX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posY.begin(), posY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negY.begin(), negY.end());
    }
    else if(type == "k"){}
    else if(type == "b"){
    }
    else if(type == "qu"){}
    else{

    }
}

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
