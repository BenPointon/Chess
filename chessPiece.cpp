#include <iostream>
#include "chessPiece.hpp"
#include <string>
#include <vector>

std::vector<std::vector<int>> returnUnblockedPositiveXLoop(int x, int y, std::vector<chessPiece> activePieces, int targetColour, int calc){
    std::vector<std::vector<int>> tempSquaresVector;
    std::vector<int> tempSquare;
    int tempX;
    int tempY;
    if(calc == 0){
        // +ve x direction
        for(int i=(x+1);i<9;i++){
            tempSquare = {};
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
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 1){
        for(int i=(x-1);i>=1;i--){
            tempSquare = {};
            // -ve x direction
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
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 2){
        for(int i=(y+1);i<9;i++){
            tempSquare = {};
            // +ve y direction
            tempX = x;
            tempY = i;
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
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 3){
        for(int i=(y-1);i>=1;i--){
            tempSquare = {};
            // -ve y direction
            tempX = x;
            tempY = i;
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
            }
            tempSquaresVector.push_back(tempSquare);
        }
    }
    if(calc == 4){
        // +ve xy direction
        tempX = x;
        tempY = y;
        for (int i = 1; i<8; i++){
            tempX = x+i;
            tempY = y+i;
            if(tempX >=1 && tempY >=1 && tempX <9 && tempY <9){
                tempSquare = {};
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
                }
                tempSquaresVector.push_back(tempSquare);
            }
            
        }
    }
    if(calc == 5){
        // +ve x -ve y direction
        tempX = x;
        tempY = y;
        for (int i = 1; i<8; i++){
            tempX = x+i;
            tempY = y-i;
            if(tempX >=1 && tempY >=1 && tempX <9 && tempY <9){
                tempSquare = {};
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
                }
                tempSquaresVector.push_back(tempSquare);
            }
            
        }
    }
    if(calc == 6){
        // -ve xy direction
        tempX = x;
        tempY = y;
        for (int i = 1; i<8; i++){
            tempX = x-i;
            tempY = y-i;
            if(tempX >=1 && tempY >=1 && tempX <9 && tempY <9){
                tempSquare = {};
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
                }
                tempSquaresVector.push_back(tempSquare);
            }
            
        }
    }
    if(calc == 7){
        // -ve x +ve y direction
        tempX = x;
        tempY = y;
        for (int i = 1; i<8; i++){
            tempX = x-i;
            tempY = y+i;
            if(tempX >=1 && tempY >=1 && tempX <9 && tempY <9){
                tempSquare = {};
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
                }
                tempSquaresVector.push_back(tempSquare);
            }
            
        }
    }

    return tempSquaresVector;
}

chessPiece::chessPiece(int newColour, std::vector<int> newPosition, std::string newType, int newfirstMove, std::string newDescription){
    colour = newColour;
    position = newPosition;
    type = newType;
    firstMove = newfirstMove;
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
        if (colour == 0){
            if(position[0] != 1 && position[0] != 8){
                tempX = position[0] + 1;
                tempY = position[1] + 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
                tempSquare = {};
                tempX = position[0] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else if(position[0] == 1){
                tempX = position[0] + 1;
                tempY = position[1] + 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else{
                tempX = position[0] - 1;
                tempY = position[1] + 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }    
        }
        else {
            if(position[0] != 1 && position[0] != 8){
                tempX = position[0] + 1;
                tempY = position[1] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
                tempSquare = {};
                tempX = position[0] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else if(position[0] == 1){
                tempX = position[0] + 1;
                tempY = position[1] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else{
                tempX = position[0] - 1;
                tempY = position[1] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == position){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }    
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
    else if(type == "k"){
        tempX = position[0] + 1;
        tempY = position[1] + 2;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] - 1;
        tempY = position[1] + 2;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] + 1;
        tempY = position[1] - 2;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] - 1;
        tempY = position[1] - 2;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] + 2;
        tempY = position[1] + 1;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] + 2;
        tempY = position[1] - 1;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] - 2;
        tempY = position[1] + 1;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
        tempX = position[0] - 2;
        tempY = position[1] - 1;
        if (tempX > 0 && tempX < 8 && tempY > 0 && tempY <8){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            tempSquaresVector.push_back(tempSquare);
        }
    }
    else if(type == "b"){
        std::vector<std::vector<int>> posXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 4);
        std::cout<<"size posXY: " << posXY.size() << "\n";
        std::cout<<"calc posXY: \n";
        for(int j=0;j<posXY.size();j++){
            std::cout << posXY[j][0] << "," << posXY[j][1] << "\n";
        }
        std::vector<std::vector<int>> posXnegY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 5);
        std::cout<<"size posXnegY: " << posXnegY.size() << "\n";
        std::cout<<"calc posXnegY: \n";
        for(int j=0;j<posXnegY.size();j++){
            std::cout << posXnegY[j][0] << "," << posXnegY[j][1] << "\n";
        }
        std::vector<std::vector<int>> negXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 6);
        std::cout<<"size negXY: " << negXY.size() << "\n";
        std::cout<<"calc negXY: \n";
        for(int j=0;j<negXY.size();j++){
            std::cout << negXY[j][0] << "," << negXY[j][1] << "\n";
        }
        std::vector<std::vector<int>> negXposY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 7);
        std::cout<<"size negXposY: " << negXposY.size() << "\n";
        std::cout<<"calc negXposY: \n";
        for(int j=0;j<negXposY.size();j++){
            std::cout << negXposY[j][0] << "," << negXposY[j][1] << "\n";
        }
        tempSquaresVector.reserve(posXY.size() + posXnegY.size() + negXY.size() + negXposY.size());
        tempSquaresVector.insert(tempSquaresVector.end(), posXY.begin(), posXY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posXnegY.begin(), posXnegY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negXY.begin(), negXY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negXposY.begin(), negXposY.end());
    }
    else if(type == "qu"){
        std::vector<std::vector<int>> posX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 0);
        std::vector<std::vector<int>> negX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 1);
        std::vector<std::vector<int>> posY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 2);
        std::vector<std::vector<int>> negY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 3);
        std::vector<std::vector<int>> posXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 4);
        std::vector<std::vector<int>> posXnegY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 5);
        std::vector<std::vector<int>> negXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 6);
        std::vector<std::vector<int>> negXposY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 7);
        tempSquaresVector.reserve(posX.size() + negX.size() + posY.size() + negY.size() + posXY.size() + posXnegY.size() + negXY.size() + negXposY.size());
        tempSquaresVector.insert(tempSquaresVector.end(), posX.begin(), posX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negX.begin(), negX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posY.begin(), posY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negY.begin(), negY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posXY.begin(), posXY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posXnegY.begin(), posXnegY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negXY.begin(), negXY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negXposY.begin(), negXposY.end());
    }
    else{

    }
    return tempSquaresVector;
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
