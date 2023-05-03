#include <iostream>
#include "chessPiece.hpp"
#include <string>
#include <vector>

std::vector<std::vector<int>> returnUnblockedPositiveXLoop(int x, int y, std::vector<chessPiece> activePieces, int targetColour, int calc, int mate){
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
                if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate == 0){
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 0){
                    tempSquaresVector.push_back(tempSquare);
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                    if(activePieces[j].description == "ki"){
                        tempSquaresVector.push_back(tempSquare);
                        return tempSquaresVector;
                    }
                    else{
                        return {};
                    }
                }
                else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && tempSquare[0] == 8){
                        return {};
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
                if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate == 0){
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 0){
                    tempSquaresVector.push_back(tempSquare);
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                    if(activePieces[j].type == "ki"){
                        tempSquaresVector.push_back(tempSquare);
                        return tempSquaresVector;
                    }
                    else{
                        return {};
                    }
                }
                else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && tempSquare[0] == 1){
                        return {};
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
                if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 0){
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour&& mate == 0){
                    tempSquaresVector.push_back(tempSquare);
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                    if(activePieces[j].type == "ki"){
                        tempSquaresVector.push_back(tempSquare);
                        return tempSquaresVector;
                    }
                    else{
                        return {};
                    }
                }
                else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && tempSquare[1] == 8){
                        return {};
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
                if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 0){
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour&& mate == 0){
                    tempSquaresVector.push_back(tempSquare);
                    return tempSquaresVector;
                }
                else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                    if(activePieces[j].type == "ki"){
                        tempSquaresVector.push_back(tempSquare);
                        return tempSquaresVector;
                    }
                    else{
                        return {};
                    }
                }
                else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && tempSquare[1] == 1){
                        return {};
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
                //std::cout << "calc 4:" << tempX << "," << tempY << "\n";
                tempSquare = {};
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for(int j=0;j<activePieces.size();j++){
                    if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 0){
                        //std::cout << "stopping before: " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour&& mate == 0){
                        tempSquaresVector.push_back(tempSquare);
                        //std::cout << "stopping on : " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                    else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                        if(activePieces[j].type == "ki"){
                            tempSquaresVector.push_back(tempSquare);
                            return tempSquaresVector;
                        }
                        else{
                            return {};
                        }
                    }
                    else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && (tempSquare[0] == 8 || tempSquare[1] == 8)){
                        return {};
                    }
                }
                //std::cout << "pushing back: " << tempX << "," << tempY << "\n";
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
                //std::cout << "calc 5:" << tempX << "," << tempY << "\n";
                tempSquare = {};
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for(int j=0;j<activePieces.size();j++){
                    if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate ==0){
                        //std::cout << "stopping before: " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate ==0){
                        tempSquaresVector.push_back(tempSquare);
                        //std::cout << "stopping on : " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                    else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                        if(activePieces[j].type == "ki"){
                            tempSquaresVector.push_back(tempSquare);
                            return tempSquaresVector;
                        }
                        else{
                            return {};
                        }
                    }
                    else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && (tempSquare[0] == 8 || tempSquare[1] == 1)){
                        return {};
                    }
                }
                //std::cout << "pushing back: " << tempX << "," << tempY << "\n";
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
                //std::cout << "calc 6:" << tempX << "," << tempY << "\n";
                tempSquare = {};
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for(int j=0;j<activePieces.size();j++){

                    // if(mate == 0){
                    //     if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour){
                    //         std::cout << "stopping before: " << tempX << "," << tempY << "\n";
                    //         return tempSquaresVector;
                    //     }
                    //     else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour){
                    //         tempSquaresVector.push_back(tempSquare);
                    //         std::cout << "stopping on : " << tempX << "," << tempY << "\n";
                    //         return tempSquaresVector;
                    //     }
                    // }
                    // else if (mate == 1){
                    //     if (tempSquare == activePieces[j].position && targetColour == activePieces[j].colour){
                    //         return {};
                    //     }
                    //     else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour){
                    //         std::cout << "we passed here 1" << "\n";
                    //         if(activePieces[j].type == "ki"){
                    //             std::cout << "we passed here 2" << "\n";
                    //             tempSquaresVector.push_back(tempSquare);
                    //             return tempSquaresVector;
                    //          }
                    //         else{
                    //             std::cout << "we passed here 3" << "\n";
                    //             return {};
                    //         }
                    //         std::cout << "we passed here 4" << "\n";
                    //     }
                    // }

                    if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate ==0){
                        //std::cout << "stopping before: " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate ==0){
                        tempSquaresVector.push_back(tempSquare);
                        //std::cout << "stopping on : " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate == 1){
                        return {};
                    }
                    else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                        //std::cout << "made it here 1" << "\n";
                        if(activePieces[j].type == "ki"){
                            //std::cout << "made it here 2" << "\n";
                            tempSquaresVector.push_back(tempSquare);
                            return tempSquaresVector;
                        }
                        else{
                            //std::cout << "made it here 3" << "\n";
                            return {};
                        }
                    }
                    else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && (tempSquare[0] == 1 || tempSquare[1] == 1)){
                        //std::cout << "made it here 4" << "\n";
                        return {};
                    }
                }
                //std::cout << "pushing back: " << tempX << "," << tempY << "\n";
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
                //std::cout << "calc 7:" << tempX << "," << tempY << "\n";
                tempSquare = {};
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for(int j=0;j<activePieces.size();j++){
                    if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour && mate ==0){
                        //std::cout << "stopping before: " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour != activePieces[j].colour&& mate ==0){
                        tempSquaresVector.push_back(tempSquare);
                        //std::cout << "stopping on : " << tempX << "," << tempY << "\n";
                        return tempSquaresVector;
                    }
                    else if(tempSquare == activePieces[j].position && targetColour == activePieces[j].colour&& mate == 1){
                    return {};
                }
                    else if (tempSquare == activePieces[j].position && targetColour != activePieces[j].colour && mate == 1){
                        if(activePieces[j].type == "ki"){
                            tempSquaresVector.push_back(tempSquare);
                            return tempSquaresVector;
                        }
                        else{
                            return {};
                        }
                    }
                    else if ( (j+1) == activePieces.size() && mate == 1 && tempSquare != activePieces[j].position && (tempSquare[0] == 1 || tempSquare[1] == 8)){
                        return {};
                    }
                }
                //std::cout << "pushing back: " << tempX << "," << tempY << "\n";
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

std::vector<std::vector<int>> chessPiece::squaresAffected(std::vector<chessPiece> activePieces,int mate){
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
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
                tempSquare = {};
                tempX = position[0] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
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
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else if(position[0]==8){
                tempX = position[0] - 1;
                tempY = position[1] + 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
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
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
                tempSquare = {};
                tempX = position[0] - 1;
                tempSquare.push_back(tempX);
                tempSquare.push_back(tempY);
                for (int i = 1; i<activePieces.size(); i++){
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
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
                    if (activePieces[i].colour != colour && activePieces[i].position == tempSquare){
                        tempSquaresVector.push_back(tempSquare);
                    }
                }
            }
            else if (position[0] ==8){
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
        std::vector<std::vector<int>> posX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 0, mate);
        std::vector<std::vector<int>> negX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 1, mate);
        std::vector<std::vector<int>> posY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 2, mate);
        std::vector<std::vector<int>> negY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 3, mate);
        tempSquaresVector.reserve(posX.size() + negX.size() + posY.size() + negY.size());
        tempSquaresVector.insert(tempSquaresVector.end(), posX.begin(), posX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negX.begin(), negX.end());
        tempSquaresVector.insert(tempSquaresVector.end(), posY.begin(), posY.end());
        tempSquaresVector.insert(tempSquaresVector.end(), negY.begin(), negY.end());
    }
    else if(type == "k"){
        tempX = position[0] + 1;
        tempY = position[1] + 2;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] - 1;
        tempY = position[1] + 2;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] + 1;
        tempY = position[1] - 2;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] - 1;
        tempY = position[1] - 2;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] + 2;
        tempY = position[1] + 1;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] + 2;
        tempY = position[1] - 1;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
            for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] - 2;
        tempY = position[1] + 1;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
           for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
        tempX = position[0] - 2;
        tempY = position[1] - 1;
        if (tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
            tempSquare.push_back(tempX);
            tempSquare.push_back(tempY);
            bool squareTaken = false;
           for (int i = 1; i<activePieces.size(); i++){
                if (activePieces[i].colour == colour && activePieces[i].position == tempSquare){
                    squareTaken = true;
                }
            }
            if (squareTaken == false){
                tempSquaresVector.push_back(tempSquare);
            }
            tempSquare = {};
        }
    }
    else if(type == "b"){
        std::vector<std::vector<int>> posXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 4, mate);
        /*std::cout<<"size posXY: " << posXY.size() << "\n";
        std::cout<<"calc posXY: \n";
        for(int j=0;j<posXY.size();j++){
            std::cout << posXY[j][0] << "," << posXY[j][1] << "\n";
        }*/
        std::vector<std::vector<int>> posXnegY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 5, mate);
       /* std::cout<<"size posXnegY: " << posXnegY.size() << "\n";
        std::cout<<"calc posXnegY: \n";
        for(int j=0;j<posXnegY.size();j++){
            std::cout << posXnegY[j][0] << "," << posXnegY[j][1] << "\n";
        }*/
        std::vector<std::vector<int>> negXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 6, mate);
        /*std::cout<<"size negXY: " << negXY.size() << "\n";
        std::cout<<"calc negXY: \n";
        for(int j=0;j<negXY.size();j++){
            std::cout << negXY[j][0] << "," << negXY[j][1] << "\n";
        }*/
        std::vector<std::vector<int>> negXposY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 7, mate);
        /*std::cout<<"size negXposY: " << negXposY.size() << "\n";
        std::cout<<"calc negXposY: \n";
        for(int j=0;j<negXposY.size();j++){
            std::cout << negXposY[j][0] << "," << negXposY[j][1] << "\n";
        }*/
        tempSquaresVector.reserve(posXY.size() + posXnegY.size() + negXY.size() + negXposY.size());
        tempSquaresVector.insert(tempSquaresVector.end(), posXY.begin(), posXY.end());
        //std::cout << "1st insert: \n";
        // for(int i=0;i<tempSquaresVector.size();i++){
        //     std::cout << "position " << i << ": " << tempSquaresVector[i][0] << "," << tempSquaresVector[i][1] << "\n";
        // }
        tempSquaresVector.insert(tempSquaresVector.end(), posXnegY.begin(), posXnegY.end());
        //std::cout << "2nd insert: \n";
        // for(int i=0;i<tempSquaresVector.size();i++){
        //     std::cout << "position " << i << ": " << tempSquaresVector[i][0] << "," << tempSquaresVector[i][1] << "\n";
        // }
        tempSquaresVector.insert(tempSquaresVector.end(), negXY.begin(), negXY.end());
        //std::cout << "3rd insert: \n";
        // for(int i=0;i<tempSquaresVector.size();i++){
        //     std::cout << "position " << i << ": " << tempSquaresVector[i][0] << "," << tempSquaresVector[i][1] << "\n";
        // }
        tempSquaresVector.insert(tempSquaresVector.end(), negXposY.begin(), negXposY.end());
        //std::cout << "4th insert: \n";
        // for(int i=0;i<tempSquaresVector.size();i++){
        //     std::cout << "position " << i << ": " << tempSquaresVector[i][0] << "," << tempSquaresVector[i][1] << "\n";
        // }
    }
    else if(type == "qu"){
        std::vector<std::vector<int>> posX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 0, mate);
        std::vector<std::vector<int>> negX = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 1, mate);
        std::vector<std::vector<int>> posY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 2, mate);
        std::vector<std::vector<int>> negY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 3, mate);
        std::vector<std::vector<int>> posXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 4, mate);
        std::vector<std::vector<int>> posXnegY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 5, mate);
        std::vector<std::vector<int>> negXY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 6, mate);
        std::vector<std::vector<int>> negXposY = returnUnblockedPositiveXLoop(position[0], position[1], activePieces, colour, 7, mate);
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
    // need to finish king moves
    else if(type == "ki"){
        for(int i=-1;i<2;i++){
            for(int j=-1;j<2;j++){
                tempSquare = {};
                if ((i == -1 && j == -1) ||(i == -1 && j == 0) ||(i == -1 && j == 1) ||(i == 0 && j == -1) ||(i == 0 && j == 1 )||(i == 1 && j == -1 )||(i == 1 && j == -0 )||(i == 1 && j == 1)){
                  //  std::cout << "i= " <<i <<"\n";
                   // std::cout <<"j= " << j << "\n";
                    tempX = position[0] + i;
                    tempY = position[1] + j;
                    if(tempX > 0 && tempX < 9 && tempY > 0 && tempY < 9){
                        tempSquare.push_back(tempX);
                        tempSquare.push_back(tempY);
                       // std::cout<< "tempSquareX = " << tempSquare[0] << "\n";
                       // std::cout<< "tempSquareY = " << tempSquare[1] << "\n";
                        bool squareTaken = false;
                        for (int k=0;k<activePieces.size();k++){
                            if(colour == activePieces[k].colour && activePieces[k].position == tempSquare){
                              //  std::cout << "i= " <<i <<"\n";
                               // std::cout <<"j= " << j << "\n";
                               // std::cout << "Square taken x = " << activePieces[k].position[0] << "\n";
                               // std::cout << "Square taken y = " << activePieces[k].position[1] << "\n";
                              //  std::cout << "Taken by piece " << activePieces[k].description << "\n";
                                squareTaken = true;
                                break;
                            }                           
                        }
                        if (squareTaken == false){
                            tempSquaresVector.push_back(tempSquare);
                        }
                    }
                }
            }
        }
     //   std::cout << "tempSquaresVector.size() = " << tempSquaresVector.size() << "\n";
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
