#include <iostream>
#include <vector>
#include <typeinfo>
#include "chessPiece.hpp"
#include "boardSquare.hpp"

std::vector<boardSquare> initialize_board(std::vector<chessPiece> pieces){
    std::vector<boardSquare> board;
    int counter = 0;
    for(int y = 1; y < 9; y++){
        for(int x = 1; x < 9; x++){
            int tempColour;
            std::string tempFiller;
            std::vector<int> tempPosition = {x,y};
            if(counter == 0 || counter == 2 || counter == 4 || counter == 6 || counter == 9 || counter == 11 || counter == 13 || counter == 15 || counter == 16 || counter == 18 || counter == 20 || counter == 22 || counter == 25 || counter == 27 || counter == 29 || counter == 31 || counter == 32 || counter == 34 || counter == 36 || counter == 38 || counter == 41 || counter == 43 || counter == 45 || counter == 49 || counter == 50 || counter == 52 || counter == 54 || counter == 56 || counter == 57 || counter == 59 || counter == 61 || counter == 63){
                tempColour = 1;
            }
            else{
                tempColour = 0;
            }
            for(int i = 0; i < pieces.size(); i++){
                if(pieces[i].position[0] == tempPosition[0] && pieces[i].position[1] == tempPosition[1] ){
                    tempFiller = pieces[i].description;
                    break;
                }
                else if(tempColour == 1){
                    tempFiller = " / ";
                }
                else{
                    tempFiller = "   ";
                }
            }
            boardSquare temp(tempColour,tempPosition,tempFiller);
            board.push_back(temp);
            counter++;
        }
    }

    return board;

}

void printBoard(std::vector<boardSquare> board){
    std::cout << "    ______ ______ ______ ______ ______ ______ ______ ______ \n";
    std::cout << "   |      |/ / / |      |/ / / |      |/ / / |      |/ / / |\n";
    std::cout << "8  | " << board[56].filler <<"  |/"<<board[57].filler<<"/ | "<<board[58].filler<<"  |/"<<board[59].filler<<"/ | "<<board[60].filler<<"  |/"<<board[61].filler<<"/ | "<<board[62].filler<<"  |/"<<board[63].filler<<"/ |\n";
    std::cout << "   |______|/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|\n";
    std::cout << "   |/ / / |      |/ / / |      |/ / / |      |/ / / |      |\n";
    std::cout << "7  |/"<<board[48].filler<<"/ | " << board[49].filler <<"  |/"<<board[50].filler<<"/ | "<<board[51].filler<<"  |/"<<board[52].filler<<"/ | "<<board[53].filler<<"  |/"<<board[54].filler<<"/ | "<<board[55].filler<<"  |\n";
    std::cout << "   |/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|______|\n";
    std::cout << "   |      |/ / / |      |/ / / |      |/ / / |      |/ / / |\n";
    std::cout << "6  | " << board[40].filler <<"  |/"<<board[41].filler<<"/ | "<<board[42].filler<<"  |/"<<board[43].filler<<"/ | "<<board[44].filler<<"  |/"<<board[45].filler<<"/ | "<<board[46].filler<<"  |/"<<board[47].filler<<"/ |\n";
    std::cout << "   |______|/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|\n";
    std::cout << "   |/ / / |      |/ / / |      |/ / / |      |/ / / |      |\n";
    std::cout << "5  |/"<<board[32].filler<<"/ | " << board[33].filler <<"  |/"<<board[34].filler<<"/ | "<<board[35].filler<<"  |/"<<board[36].filler<<"/ | "<<board[37].filler<<"  |/"<<board[38].filler<<"/ | "<<board[39].filler<<"  |\n";
    std::cout << "   |/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|______|\n";
    std::cout << "   |      |/ / / |      |/ / / |      |/ / / |      |/ / / |\n";
    std::cout << "4  | " << board[24].filler <<"  |/"<<board[25].filler<<"/ | "<<board[26].filler<<"  |/"<<board[27].filler<<"/ | "<<board[28].filler<<"  |/"<<board[29].filler<<"/ | "<<board[30].filler<<"  |/"<<board[31].filler<<"/ |\n";
    std::cout << "   |______|/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|\n";
    std::cout << "   |/ / / |      |/ / / |      |/ / / |      |/ / / |      |\n";
    std::cout << "3  |/"<<board[16].filler<<"/ | " << board[17].filler <<"  |/"<<board[18].filler<<"/ | "<<board[19].filler<<"  |/"<<board[20].filler<<"/ | "<<board[21].filler<<"  |/"<<board[22].filler<<"/ | "<<board[23].filler<<"  |\n";
    std::cout << "   |/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|______|\n";
    std::cout << "   |      |/ / / |      |/ / / |      |/ / / |      |/ / / |\n";
    std::cout << "2  | " << board[8].filler <<"  |/"<<board[9].filler<<"/ | "<<board[10].filler<<"  |/"<<board[11].filler<<"/ | "<<board[12].filler<<"  |/"<<board[13].filler<<"/ | "<<board[14].filler<<"  |/"<<board[15].filler<<"/ |\n";
    std::cout << "   |______|/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|\n";
    std::cout << "   |/ / / |      |/ / / |      |/ / / |      |/ / / |      |\n";
    std::cout << "1  |/"<<board[0].filler<<"/ | " << board[1].filler <<"  |/"<<board[2].filler<<"/ | "<<board[3].filler<<"  |/"<<board[4].filler<<"/ | "<<board[5].filler<<"  |/"<<board[6].filler<<"/ | "<<board[7].filler<<"  |\n";
    std::cout << "   |/_/_/_|______|/_/_/_|______|/_/_/_|______|/_/_/_|______|\n";
    std::cout << "\n";
    std::cout << "      a      b      c      d      e      f      g      h\n";
}

// define std::vector<chessPiece> get_colour() to return vector of only one colour of active piece
    std::vector<chessPiece> get_colour(int colour, std::vector<chessPiece> activePiecesVector){
        std::vector<chessPiece> colourActivePiecesVector;
        for (int i = 0; i < activePiecesVector.size(); i++){
            if (activePiecesVector[i].colour == colour){
                colourActivePiecesVector.push_back(activePiecesVector[i]);
            }
            else{
            }
        }
        return colourActivePiecesVector;
    }

// define is_check()

// define check structure which returns a bool and a vector of chess pieces
struct checkStruct {
    bool isCheck;
    std::vector<chessPiece> checkPieces;
};

checkStruct is_check(chessPiece king, std::vector<chessPiece> activePiecesVector){
    checkStruct tempCheckstruct;
    tempCheckstruct.isCheck = false;
    int tempColour;
    if(king.colour == 0){
        tempColour = 0;
    }
    else{
        tempColour == 1;
    }
    for (int i = 0; i < activePiecesVector.size() ; i++){
        if(activePiecesVector[i].colour != tempColour){
            // then need to perform the logic to see if the king is in check
            std::vector<std::vector<int>> tempSquaresAffected = activePiecesVector[i].squaresAffected(activePiecesVector);
            for (int j = 0; j < tempSquaresAffected.size(); j++ ){
                if (tempSquaresAffected[j] == king.position){
                    tempCheckstruct.isCheck = true;
                    tempCheckstruct.checkPieces.push_back(activePiecesVector[i]);
                    break;
                }
            }
        }
    }
    return tempCheckstruct;
}

bool is_checkmate(chessPiece whiteKing, chessPiece blackKing, std::vector<chessPiece> activePiecesVector, int gameMoveCounter){
    chessPiece targetKing;
    if(gameMoveCounter%2 != 0){
        targetKing = whiteKing;
    }
    else{
        targetKing = blackKing;
    }
    // check if targetKing is in check
    for(int i=0; i<activePiecesVector.size(); i++){
        if (activePiecesVector[i].colour != targetKing.colour){
            checkStruct isCheck = is_check(targetKing, activePiecesVector);
            if (isCheck.isCheck == true){
                /* for this we probably need is_check() to spit out a structure containing 2 things
                1) true/false
                2) the pieces that put the king in check
                with this info we can find the squares affected by the checking pieces and cross reference this with the squares affected by
                the opposite player's peices, if no crossover then there is no piece move that the player can do to get out of check.*/
                if(isCheck.checkPieces.size() < 2 && isCheck.checkPieces[0].type != "k"){
                    std::vector<std::vector<int>> tempSquares = isCheck.checkPieces[0].squaresAffected(activePiecesVector);
                    for (int i=0;i<activePiecesVector.size();i++){
                        if (activePiecesVector[i].colour!=isCheck.checkPieces[0].colour){
                            std::vector<std::vector<int>> tempSquaresAffected = activePiecesVector[i].squaresAffected(activePiecesVector);
                            for (int j=0;j<tempSquaresAffected.size();j++){
                                for (int k=0;k<tempSquares.size();k++){
                                    if (tempSquaresAffected[j] == tempSquares[k]){
                                        return false;
                                    }
                                }
                            }
                        }
                    }
                }
                /* if in check & no moves to get out of check then check to see if any of the sqares around the king are not in check */
                std::vector<std::vector<int>> mateWeb;
                for(int x=-1; x<2; x++){
                    for(int y=-1; y<2; y++){
                        if (x != 0 && y != 0){
                            std::vector<int> tempSquare;
                            int tempX = targetKing.position[0]+x;
                            int tempY = targetKing.position[1]+y;
                            tempSquare.push_back(tempX);
                            tempSquare.push_back(tempY);
                            chessPiece tempKing(targetKing.colour, tempSquare, targetKing.type, targetKing.firstMove, targetKing.description);
                            checkStruct tempIsCheck = is_check(tempKing, activePiecesVector);
                            if (tempIsCheck.isCheck == true){
                                mateWeb.push_back(tempSquare);
                            }
                            else{
                                return false;
                            }
                        }
                    }
                }
                if (mateWeb.size() == 8){
                    return true;
                }
            }
        }
    }
    return false;
}

std::string check_piece(int turnCounter, std::vector<chessPiece> activePieces){
    std::string movePiece;
    int validPiece=false;
    int colour;
    if (turnCounter%2 != 0){
        colour = 0;
        while(validPiece == false){
            std::cout << "White, please enter the piece that you wish to move: \n";
            std::cin >> movePiece;
            for(int i=0; i < activePieces.size(); i++){
                if(activePieces[i].description == movePiece && activePieces[i].colour == colour){
                    std::vector<std::vector<int>> squaresAffected = activePieces[i].squaresAffected(activePieces);
                    if (squaresAffected.size() > 0){
                        validPiece = true;
                        return movePiece;
                    }
                    else{
                        std::cout << "No valid moves. \n";
                    }
                }
            }
            std::cout << "Invalid piece.\n";
        }
    }
    else{
        colour = 1;
        while(validPiece == false){
            std::cout << "Black, please enter the piece that you wish to move: \n";
            std::cin >> movePiece;
            for(int i=0; i < activePieces.size(); i++){
                if(activePieces[i].description == movePiece && activePieces[i].colour == colour){
                    validPiece = true;
                    return movePiece;
                }
            }
            std::cout << "Invalid piece.\n";
        }
    }
}

std::vector<int> square_map(std::string checkSquare){
    std::vector<int> tempVector;
    int x;
    int y;
    if(checkSquare[0] == 'a'){
        x = 1;
    }
    else if(checkSquare[0] == 'b'){
        x = 2;
    }
    else if(checkSquare[0] == 'c'){
        x = 3;
    }
    else if(checkSquare[0] == 'd'){
        x = 4;
    }
    else if(checkSquare[0] == 'e'){
        x = 5;
    }
    else if(checkSquare[0] == 'f'){
        x = 6;
    }
    else if(checkSquare[0] == 'g'){
        x = 7;
    }
    else if(checkSquare[0] == 'h'){
        x = 8;
    }
    if(checkSquare[1] == '1'){
        y = 1;
    }
    else if(checkSquare[1] == '2'){
        y = 2;
    }
    else if(checkSquare[1] == '3'){
        y = 3;
    }
    else if(checkSquare[1] == '4'){
        y = 4;
    }
    else if(checkSquare[1] == '5'){
        y = 5;
    }
    else if(checkSquare[1] == '6'){
        y = 6;
    }
    else if(checkSquare[1] == '7'){
        y = 7;
    }
    else if(checkSquare[1] == '8'){
        y = 8;
    }
    tempVector.push_back(x);
    tempVector.push_back(y);
    return tempVector;
}

struct pieceSquare{
    std::string Piece;
    std::vector<int> square;
};

pieceSquare check_square(std::vector<chessPiece> activePieces, int counter){
    bool validSquare = false;
    std::string checkSquare;
    std::vector<int> mappedSquare;
    std::string checkPiece;
    bool validCheckPiece = false;
    std::string turnColour;
    int turnColourInt;
    pieceSquare pieceSquareReturn;
    if (counter%2 != 0){
        turnColour = "White";
        turnColourInt = 0;
    }
    else {
        turnColour = "Black";
        turnColourInt = 1;
    }
    while(validCheckPiece == false){
        std::cout << turnColour << ", please enter the piece you wish to move: \n";
        std::cin >> checkPiece;
        int validCounter = 0;
        for (int i=0; i<activePieces.size();i++){
            counter++;
            if (activePieces[i].description == checkPiece && activePieces[i].colour == turnColourInt){
                pieceSquareReturn.Piece = checkPiece;
                validCheckPiece = true;
            }
        }
        if (validCounter == activePieces.size()){
            std::cout << "Invalid piece.\n";
        }
    }
    while(validSquare == false){
        std::cout << "Please enter the square you wish to move to: \n";
        std::cin >> checkSquare;
        //std::cout << checkSquare.size() << " " << typeid(checkSquare[0]).name() << " " << typeid(checkSquare[1]).name();
        if(checkSquare.size() == 2){
            if(checkSquare[0] == 'a' || checkSquare[0] == 'b' || checkSquare[0] == 'c' || checkSquare[0] == 'd' || checkSquare[0] == 'e' || checkSquare[0] == 'f'|| checkSquare[0] == 'g' || checkSquare[0] == 'h'){
                if(checkSquare[1] == '1'|| checkSquare[1] == '2'|| checkSquare[1] == '3'|| checkSquare[1] == '4'|| checkSquare[1] == '5'|| checkSquare[1] == '6'|| checkSquare[1] == '7'|| checkSquare[1] == '8' ){
                    mappedSquare = square_map(checkSquare);
                    //std::cout << "mapped square " << mappedSquare[0] << "," << mappedSquare[1] << "\n";
                    //std::cout << "here1\n";
                    for(int i=0;i<activePieces.size();i++){
                        if(activePieces[i].description == checkPiece){
                            //std::cout << "here2\n";
                            std::cout << "activePieces[i].description here: " << activePieces[i].description << "\n";
                            // if pawn and first move append up to 2 squares in front if no other piece blocking
                            // else append up to 1 square in front if no other piece blocking
                            std::vector<std::vector<int>> moveableSquares = activePieces[i].squaresAffected(activePieces);
                            std::cout << "moveableSquares size " << moveableSquares.size() << "\n";
                            if (activePieces[i].type == "p"){
                                std::cout << "pawn\n";
                                std::vector<int> s1;
                                s1.push_back(activePieces[i].position[0]);
                                if(activePieces[i].colour == 0){
                                    s1.push_back(activePieces[i].position[1]+1);
                                }
                                else{
                                    s1.push_back(activePieces[i].position[1]-1);
                                }
                                // check the first square in front of the pawn
                                bool squareOneOccupied = false;
                                for (int j=0;j<activePieces.size();j++){
                                    if (activePieces[j].position == s1){
                                        squareOneOccupied = true;
                                    }
                                }
                                //std::cout << "SquareOneOccupied: " << squareOneOccupied << "\n";
                                if (squareOneOccupied == false){
                                    moveableSquares.push_back(s1);
                                    //std::cout << "activePieces[i].firstmove: " << activePieces[i].firstMove << "\n";
                                    if (activePieces[i].firstMove == 1){
                                        //std::cout << "first move\n";
                                        std::vector<int> s2;
                                        s2.push_back(activePieces[i].position[0]);
                                        if(activePieces[i].colour == 0){
                                            s2.push_back(activePieces[i].position[1]+2);
                                        }
                                        else{
                                             s2.push_back(activePieces[i].position[1]-2);

                                        }
                                        bool squareTwoOccupied = false;
                                        for (int j=0;j<activePieces.size();j++){
                                            if (activePieces[j].position == s2){
                                                squareTwoOccupied = true;
                                            }
                                        }
                                        if (squareTwoOccupied == false){
                                            moveableSquares.push_back(s2);
                                        }
                                    }
                                }
                            }
                            std::cout << "moveableSquares.size() = " << moveableSquares.size() << "\n";
                            std::cout << "moveableSquares: \n";
                            std::vector<std::vector<int>>::size_type moveableSquaresSize;
                            moveableSquaresSize = moveableSquares.size();
                            for(int j=0; j<moveableSquaresSize; j++){
                                std::cout << "I'm in here" << moveableSquaresSize <<"\n";
                                std::cout << "I'm in here " << j <<"\n";
                                std::cout<<moveableSquares[j][0] << "," <<moveableSquares[j][1] << "\n";
                                if(moveableSquares[j] == mappedSquare){
                                    validSquare = true;
                                    pieceSquareReturn.square = mappedSquare;
                                    return pieceSquareReturn; // valid move
                                }
                                std::cout << "I'm down here" << moveableSquaresSize <<"\n";
                            }
                            std::cout << "Invalid move.\n"; // invalid move
                        }
                    }
                }
            }
        }
        else{
            std::cout << "Invalid move.1\n"; // invalid move 
        }
    }
}

std::vector<std::vector<chessPiece>> move_piece(std::string pieceToMove, std::vector<int> squareToMoveTo, std::vector<std::vector<chessPiece>> activePieces){

}

int main(){

    // initialize pieces board
    std::vector<chessPiece> activePieces;

    // white pieces
    chessPiece wP1(0,{1,2},"p",1,"wP1");
   // std::cout << "wP1.firstMove: " << wP1.firstMove << "\n";
   // std::cout << "1: " << 1 <<"\n";
    chessPiece wP2(0,{2,2},"p",1,"wP2");
    chessPiece wP3(0,{3,2},"p",1,"wP3");
    chessPiece wP4(0,{4,2},"p",1,"wP4");
    chessPiece wP5(0,{5,2},"p",1,"wP5");
    chessPiece wP6(0,{6,2},"p",1,"wP6");
    chessPiece wP7(0,{7,2},"p",1,"wP7");
    chessPiece wP8(0,{8,2},"p",1,"wP8");

    chessPiece wR1(0,{1,1},"r",1,"wR1");
    chessPiece wK1(0,{2,1},"k",1,"wK1");
    chessPiece wB1(0,{3,1},"b",1,"wB1");
    chessPiece wQu(0,{4,1},"qu",1,"wQu");
    chessPiece wKi(0,{5,1},"ki",1,"wKi");
    chessPiece wB2(0,{6,1},"b",1,"wB2");
    chessPiece wK2(0,{7,1},"k",1,"wK2");
    chessPiece wR2(0,{8,1},"r",1,"wR2");

    //black pieces
    chessPiece bP1(1,{1,7},"p",1,"bP1");
    chessPiece bP2(1,{2,7},"p",1,"bP2");
    chessPiece bP3(1,{3,7},"p",1,"bP3");
    chessPiece bP4(1,{4,7},"p",1,"bP4");
    chessPiece bP5(1,{5,7},"p",1,"bP5");
    chessPiece bP6(1,{6,7},"p",1,"bP6");
    chessPiece bP7(1,{7,7},"p",1,"bP7");
    chessPiece bP8(1,{8,7},"p",1,"bP8");

    chessPiece bR1(1,{1,8},"r",1,"bR1");
    chessPiece bK1(1,{2,8},"k",1,"bK1");
    chessPiece bB1(1,{3,8},"b",1,"bB1");
    chessPiece bQu(1,{4,8},"qu",1,"bQu");
    chessPiece bKi(1,{5,8},"ki",1,"bKi");
    chessPiece bB2(1,{6,8},"b",1,"bB2");
    chessPiece bK2(1,{7,8},"k",1,"bK2");
    chessPiece bR2(1,{8,8},"r",1,"bR2");

    activePieces.push_back(wP1);
    activePieces.push_back(wP2);
    activePieces.push_back(wP3);
    activePieces.push_back(wP4);
    activePieces.push_back(wP5);
    activePieces.push_back(wP6);
    activePieces.push_back(wP7);
    activePieces.push_back(wP8);
    activePieces.push_back(wR1);
    activePieces.push_back(wK1);
    activePieces.push_back(wB1);
    activePieces.push_back(wQu);
    activePieces.push_back(wKi);
    activePieces.push_back(wB2);
    activePieces.push_back(wK2);
    activePieces.push_back(wR2);
    activePieces.push_back(bP1);
    activePieces.push_back(bP2);
    activePieces.push_back(bP3);
    activePieces.push_back(bP4);
    activePieces.push_back(bP5);
    activePieces.push_back(bP6);
    activePieces.push_back(bP7);
    activePieces.push_back(bP8);
    activePieces.push_back(bR1);
    activePieces.push_back(bK1);
    activePieces.push_back(bB1);
    activePieces.push_back(bQu);
    activePieces.push_back(bKi);
    activePieces.push_back(bB2);
    activePieces.push_back(bK2);
    activePieces.push_back(bR2);

    bool checkmate = false;
    checkStruct checkState;
    int turnCounter = 1;
    chessPiece targetKing;

    // While no checkmate game continues
    while (checkmate == false){
        // initialize and print board
        std::vector<boardSquare> board = initialize_board(activePieces);
        printBoard(board);
        // calc if active player's king is in check
        if (turnCounter%2 != 0){
            checkState = is_check(wKi,activePieces);
        }
        else {
            checkState = is_check(bKi,activePieces);
        } 
        // if in check then calc if in checkmate
        if (checkState.isCheck == true){
            checkmate = is_checkmate(wKi,bKi,activePieces,turnCounter);
            if (checkmate == true){
                std::string winningColour;
                if (turnCounter%2 != 0){
                    winningColour = "Black";
                }
                else{
                    winningColour = "White";
                }
                std::cout << winningColour << " wins! Thanks for playing!\n";
                checkmate = true;
                return 0;
            }
        }
        // if not in checkmate
        else {
            // ask for move
            // ensure move does not result in king being in check
            // if does loop asking
            // update active pieces and print board
            bool myKingCheck = true;
            while(myKingCheck == true){
                // ask for piece to move check_piece and check if valid
                // ask for square to move to and check if valid
                pieceSquare movePieceSquare = check_square(activePieces,turnCounter);
                // create temp active pieces vector to perform the check calc on
                std::vector<chessPiece> tempActivePieces = activePieces;
                // if another piece on the square we are moving to then update the temp vector to remove this piece
                for (int i = 0;i < tempActivePieces.size();i++){
                    if (tempActivePieces[i].position == movePieceSquare.square){
                        std::vector<chessPiece>::iterator it = tempActivePieces.begin()+i;
                        tempActivePieces.erase(it);
                    }
                }
                // update the piece position in the vector of the moved piece
                for (int i=0;i<tempActivePieces.size();i++){
                    if(tempActivePieces[i].description == movePieceSquare.Piece){
                        tempActivePieces[i].position = movePieceSquare.square;
                    }
                }
                // calc if mover's king is in check with this position
                chessPiece tempTargetKing;
                if (turnCounter%2 != 0){
                    for (int i = 0;i<tempActivePieces.size();i++){
                        if (tempActivePieces[i].description == "wKi"){
                            tempTargetKing = tempActivePieces[i];
                        }
                    }
                }
                else{
                    for (int i = 0;i<tempActivePieces.size();i++){
                        if (tempActivePieces[i].description == "bKi"){
                            tempTargetKing = tempActivePieces[i];
                        }
                    }
                }
                checkStruct tempCheckStruct = is_check(tempTargetKing,tempActivePieces);
                // if yes then print invalid move and continue in the loop
                if (tempCheckStruct.isCheck == true){
                    std::cout << "This move would put your king in check.\n";
                }
                // if no then update the full active pieces vector and increment the turn counter
                else if (tempCheckStruct.isCheck == false){
                    activePieces = tempActivePieces;
                    for (int i = 0;i<activePieces.size();i++){
                        if (activePieces[i].description == movePieceSquare.Piece && activePieces[i].firstMove == true){
                            activePieces[i].firstMove = 0;
                        }
                    }
                    turnCounter++;
                    myKingCheck = false;
                }
            }
        }

    }
    

}