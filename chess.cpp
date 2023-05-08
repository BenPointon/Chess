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

checkStruct is_check(chessPiece king, std::vector<chessPiece>& activePiecesVector, int checkormate){
    checkStruct tempCheckstruct;
    tempCheckstruct.isCheck = false;
    int tempColour;
    if(king.colour == 0){
        tempColour = 0;
    }
    else{
        tempColour = 1;
    }
    for (int i = 0; i < activePiecesVector.size() ; i++){
        if(checkormate == 0){
            if(activePiecesVector[i].colour != tempColour){
                // then need to perform the logic to see if the king position = affectedSquares of the piece
                std::vector<std::vector<int>> tempSquaresAffected = activePiecesVector[i].squaresAffected(activePiecesVector, 0);
                for (int j = 0; j < tempSquaresAffected.size(); j++ ){
                    if (tempSquaresAffected[j] == king.position){
                        tempCheckstruct.isCheck = true;
                        tempCheckstruct.checkPieces.push_back(activePiecesVector[i]);
                    }
                }
            }
        }
        else if (checkormate == 1){
            if(activePiecesVector[i].colour != tempColour && activePiecesVector[i].type != "ki"){
                // then need to perform the logic to see if the king position = affectedSquares of the piece
                std::vector<std::vector<int>> tempSquaresAffected = activePiecesVector[i].squaresAffected(activePiecesVector, 0);
                for (int j = 0; j < tempSquaresAffected.size(); j++ ){
                    if (tempSquaresAffected[j] == king.position){
                        tempCheckstruct.isCheck = true;
                        tempCheckstruct.checkPieces.push_back(activePiecesVector[i]);
                    }
                }
            }
        }
    }
    return tempCheckstruct;
}

bool isMateWeb(chessPiece king, std::vector<chessPiece> activePiecesVector){
    std::vector<std::vector<int>> mateWeb;
    for(int x=-1; x<2; x++){
        for(int y=-1; y<2; y++){
            if ((x == -1 && y == -1) ||(x == -1 && y == 0) ||(x == -1 && y == 1) ||(x == 0 && y == -1) ||(x == 0 && y == 1 )||(x == 1 && y == -1 )||(x == 1 && y == -0 )||(x == 1 && y == 1)){
                std::vector<int> tempSquare;
                int tempX = king.position[0]+x;
                int tempY = king.position[1]+y;
                if (tempX >=1 && tempY >=1 && tempX <9 && tempY <9){
                    tempSquare.push_back(tempX);
                    tempSquare.push_back(tempY);
                    bool pieceOnSquare = false;
                    // see if there is a piece on this square
                    for(int j = 0; j<activePiecesVector.size(); j++){
                        if (king.colour != activePiecesVector[j].colour && tempSquare == activePiecesVector[j].position){
                            pieceOnSquare = true;
                            chessPiece tempKing(king.colour, tempSquare, king.type, king.firstMove, king.description);
                            checkStruct tempIsCheck = is_check(tempKing, activePiecesVector,0);
                            if (tempIsCheck.isCheck == false){
                                return false;
                            }
                        }
                        else if (king.colour == activePiecesVector[j].colour && tempSquare == activePiecesVector[j].position){
                            pieceOnSquare = true;
                        }
                    }
                    // if still no piece on square then check if moving to this square results in check
                    if (pieceOnSquare == false){
                        chessPiece tempKing(king.colour, tempSquare, king.type, king.firstMove, king.description);
                        checkStruct tempIsCheck = is_check(tempKing, activePiecesVector,0);
                        if (tempIsCheck.isCheck == false){
                            return false;
                        }
                    }

                }
            }
        }
    }
    return true;
}

bool is_checkmate(chessPiece whiteKing, chessPiece blackKing, std::vector<chessPiece> activePiecesVector, int gameMoveCounter){
    chessPiece targetKing;
    if(gameMoveCounter%2 != 0){
        targetKing = whiteKing;
    }
    else{
        targetKing = blackKing;
    }
    checkStruct isCheck = is_check(targetKing, activePiecesVector,0);
    if (isCheck.isCheck == true){
        /* for this we probably need is_check() to spit out a structure containing 2 things
        1) true/false
        2) the pieces that put the king in check
        with this info we can find the squares affected by the checking pieces (will need to pushback the checking piece position
        onto the squares affected) and cross reference this with the squares affected by
        the opposite player's peices, if no crossover then there is no piece move that the player can do to get out of check.*/
        // 1) if in check by more than one piece then king must be able to move
        if(isCheck.checkPieces.size()>1){
            return isMateWeb(targetKing, activePiecesVector);
        }
        // 2) else if check piece is a knight then the king will either need to move or the knight will need to be taken
        else if(isCheck.checkPieces[0].type == "k"){
            checkStruct knightBeTaken = is_check(isCheck.checkPieces[0],activePiecesVector,0);
            if(knightBeTaken.isCheck == false){
                return isMateWeb(targetKing, activePiecesVector);
            }

        }
        // 3) if not knight and only in check by one piece then need to find squares affected by piece (including it's own position)
        // if any of these squares are in the squares affected of an opposite player's piece then checkmate = false
        else{
            std::vector<std::vector<int>> tempSquaresAffected = isCheck.checkPieces[0].squaresAffected(activePiecesVector,1);
            tempSquaresAffected.push_back(isCheck.checkPieces[0].position);
            // for each square here I will need to initiate a piece and do an is check on the piece, if all false then do mate web calc
            for (int i=0;i<tempSquaresAffected.size();i++){
            }
            for(int i=0;i<tempSquaresAffected.size();i++){
                chessPiece tempPiece(isCheck.checkPieces[0].colour, tempSquaresAffected[i], isCheck.checkPieces[0].type, isCheck.checkPieces[0].firstMove, isCheck.checkPieces[0].description);
                checkStruct isCheckTempPiece = is_check(tempPiece,activePiecesVector,1);
                if(isCheckTempPiece.isCheck == true){
                    for(int j=0;j<isCheckTempPiece.checkPieces.size();j++){
                    }                   
                    return false;
                }
            }
            // if all false then do mate web calc
            return isMateWeb(targetKing, activePiecesVector);
        }
    }
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
                    std::vector<std::vector<int>> squaresAffected = activePieces[i].squaresAffected(activePieces,0);
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
    bool enPassantBool;
    std::vector<int> enPassantSquare;
};

pieceSquare check_square(std::vector<chessPiece>& activePieces, int counter, chessPiece lastMove){
    bool validSquare = false;
    std::string checkSquare;
    std::vector<int> mappedSquare;
    std::string checkPiece;
    std::string checkPieceType;
    bool validCheckPiece = false;
    std::string turnColour;
    int turnColourInt;
    pieceSquare pieceSquareReturn;
    pieceSquareReturn.enPassantBool = false;
    pieceSquareReturn.enPassantSquare = {0,0};
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
        if (checkPiece == "exit"){
            pieceSquareReturn.Piece = "exit";
            pieceSquareReturn.square = {0,0};
            return pieceSquareReturn;
        }
        for (int i=0; i<activePieces.size();i++){
            counter++;
            if (activePieces[i].description == checkPiece && activePieces[i].colour == turnColourInt){
                pieceSquareReturn.Piece = checkPiece;
                checkPieceType = activePieces[i].type;
                validCheckPiece = true;
            }
        }
        if (validCounter == activePieces.size()){
            std::cout << "Invalid piece.\n";
        }
        if (validCheckPiece == true){
            while(validSquare == false){
                std::cout << "Please enter the square you wish to move to: \n";
                std::cin >> checkSquare;
                if (checkSquare == "exit"){
                    pieceSquareReturn.Piece = "exit";
                    pieceSquareReturn.square = {0,0};
                    return pieceSquareReturn;
                }
                if (checkSquare == "reselect"){
                    validCheckPiece = false;
                    break;
                }
                if(checkSquare.size() == 2){
                    if(checkSquare[0] == 'a' || checkSquare[0] == 'b' || checkSquare[0] == 'c' || checkSquare[0] == 'd' || checkSquare[0] == 'e' || checkSquare[0] == 'f'|| checkSquare[0] == 'g' || checkSquare[0] == 'h'){
                        if(checkSquare[1] == '1'|| checkSquare[1] == '2'|| checkSquare[1] == '3'|| checkSquare[1] == '4'|| checkSquare[1] == '5'|| checkSquare[1] == '6'|| checkSquare[1] == '7'|| checkSquare[1] == '8' ){
                            mappedSquare = square_map(checkSquare);
                            for(int i=0;i<activePieces.size();i++){
                                if(activePieces[i].description == checkPiece){
                                    // if pawn and first move append up to 2 squares in front if no other piece blocking
                                    // else append up to 1 square in front if no other piece blocking
                                    std::vector<std::vector<int>> moveableSquares = activePieces[i].squaresAffected(activePieces,0);
                                    if (activePieces[i].type == "p"){
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
                                        if (squareOneOccupied == false){
                                            moveableSquares.push_back(s1);
                                            if (activePieces[i].firstMove == 1){
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
                                        // en passant
                                        // if white
                                        if (activePieces[i].colour == 0){
                                            if (activePieces[i].position[1] == 5){
                                                if (lastMove.colour == 1 && lastMove.type == "p" && lastMove.firstMove == 2 && ( (lastMove.position[0] == activePieces[i].position[0]+1) || (lastMove.position[0] == activePieces[i].position[0]-1) ) && lastMove.position[1] == 5){
                                                    std::vector<int> enPassantSquare;
                                                    enPassantSquare.push_back(lastMove.position[0]);
                                                    enPassantSquare.push_back(lastMove.position[1]+1);
                                                    moveableSquares.push_back(enPassantSquare);
                                                    pieceSquareReturn.enPassantBool = true;
                                                    pieceSquareReturn.enPassantSquare = enPassantSquare;
                                                }
                                            }
                                        }
                                        // if black
                                        else if (activePieces[i].colour == 1){
                                            if (activePieces[i].position[1] == 4){
                                                if (lastMove.colour == 0 && lastMove.type == "p" && lastMove.firstMove == 2 && ( (lastMove.position[0] == activePieces[i].position[0]+1) || (lastMove.position[0] == activePieces[i].position[0]-1) ) && lastMove.position[1] == 4){
                                                    std::vector<int> enPassantSquare;
                                                    enPassantSquare.push_back(lastMove.position[0]);
                                                    enPassantSquare.push_back(lastMove.position[1]-1);
                                                    moveableSquares.push_back(enPassantSquare);
                                                    pieceSquareReturn.enPassantBool = true;
                                                    pieceSquareReturn.enPassantSquare = enPassantSquare;
                                                }
                                            }
                                        }
                                    }
                                    std::vector<std::vector<int>>::size_type moveableSquaresSize;
                                    moveableSquaresSize = moveableSquares.size();
                                    for(int j=0; j<moveableSquaresSize; j++){
                                        if(moveableSquares[j] == mappedSquare){
                                            validSquare = true;
                                            pieceSquareReturn.square = mappedSquare;
                                            return pieceSquareReturn; // valid move
                                        }
                                    }
                                    std::cout << "Invalid move.\n"; // invalid move
                                }
                            }
                        }
                    }
                }
                // check for castling move
                else if (checkPieceType == "r" && checkSquare == "o-o"){
                    // define some values to allow checks of first move for king and rooke
                    bool firstMoveKing = false;
                    bool firstMoveRooke = false;
                    // check if castling is valid
                    // check if both this rooke and king have not moved
                    for (int i = 0; i<activePieces.size(); i++){
                        if (activePieces[i].colour == turnColourInt){
                            if (activePieces[i].description == checkPiece){
                                if (activePieces[i].firstMove == 1){
                                    firstMoveRooke = true;
                                }
                            }
                            else if(activePieces[i].type == "ki"){
                                if (activePieces[i].firstMove == 1){
                                    firstMoveKing = true;
                                }
                            }
                        }
                    }
                    if (firstMoveKing == true && firstMoveRooke == true){
                        // check if there are occupied squares between the rooke and king
                        // create array of squares in question depending on rooke selected
                        std::vector<std::vector<int>> betweenSquares;
                        if (checkPiece == "wR1"){
                            betweenSquares.push_back({2,1});
                            betweenSquares.push_back({3,1});
                            betweenSquares.push_back({4,1});
                        }
                        else if (checkPiece == "wR2"){
                            betweenSquares.push_back({7,1});
                            betweenSquares.push_back({6,1});
                        }
                        else if (checkPiece == "bR1"){
                            betweenSquares.push_back({2,8});
                            betweenSquares.push_back({3,8});
                            betweenSquares.push_back({4,8});
                        }
                        else if (checkPiece == "bR2"){
                            betweenSquares.push_back({7,8});
                            betweenSquares.push_back({6,8});
                        }
                        // define bool to check if any squares are occupied
                        bool anyOccupied = false;
                        for (int i=0; i<betweenSquares.size(); i++){
                            for(int j=0; j<activePieces.size(); j++){
                                if (betweenSquares[i] == activePieces[j].position){
                                    anyOccupied = true;
                                }
                            }
                        }
                        if (anyOccupied == false){
                            // check if any of the squaresBetween are in check
                            // define bool to check this
                            bool anyInCheck = false;
                            for (int i=0; i<betweenSquares.size();i++){
                                chessPiece tempPiece(turnColourInt,betweenSquares[i],"p",1,"temp");
                                if (is_check(tempPiece,activePieces,0).isCheck == true){
                                    anyInCheck = true;
                                }
                            }
                            if (anyInCheck == false){
                                // then update the board
                                validSquare = true;
                                pieceSquareReturn.Piece = "o-o";
                                pieceSquareReturn.square = {0,0};
                                if (checkPiece == "wR1"){
                                    for (int i=0; i<activePieces.size(); i++){
                                        if (activePieces[i].description == "wR1"){
                                            activePieces[i].position = {4,1};
                                        }
                                        if (activePieces[i].description == "wKi"){
                                            activePieces[i].position = {3,1};
                                        }
                                    }
                                }
                                else if (checkPiece == "wR2"){
                                    for (int i=0; i<activePieces.size(); i++){
                                        if (activePieces[i].description == "wR2"){
                                            activePieces[i].position = {6,1};
                                        }
                                        if (activePieces[i].description == "wKi"){
                                            activePieces[i].position = {7,1};
                                        }
                                    }
                                }
                                else if (checkPiece == "bR1"){
                                    for (int i=0; i<activePieces.size(); i++){
                                        if (activePieces[i].description == "bR1"){
                                            activePieces[i].position = {4,8};
                                        }
                                        if (activePieces[i].description == "bKi"){
                                            activePieces[i].position = {3,8};
                                        }
                                    }
                                }
                                else if (checkPiece == "bR2"){
                                    for (int i=0; i<activePieces.size(); i++){
                                        if (activePieces[i].description == "bR2"){
                                            activePieces[i].position = {6,8};
                                        }
                                        if (activePieces[i].description == "bKi"){
                                            activePieces[i].position = {7,8};
                                        }
                                    }
                                }
                                return pieceSquareReturn;
                            }
                            else{
                                std::cout << "Invalid move.\n"; // invalid move 
                            }   
                        }
                        else{
                            std::cout << "Invalid move.\n"; // invalid move 
                        }
                    }
                    else{
                        std::cout << "Invalid move.\n"; // invalid move 
                    }
                }
                else{
                    std::cout << "Invalid move.\n"; // invalid move 
                }
            }
        }
    }
}

//std::vector<std::vector<chessPiece>> move_piece(std::string pieceToMove, std::vector<int> squareToMoveTo, std::vector<std::vector<chessPiece>> activePieces){

void update_pieces(std::vector<chessPiece>& oldPieces,std::vector<chessPiece> newPieces){
    oldPieces.clear();
    oldPieces = newPieces;
}



int main(){

    // initialize pieces board
    std::vector<chessPiece> activePieces;

     // white pieces
    chessPiece wP3(0,{3,2},"p",1,"wP3");
    chessPiece wP4(0,{4,2},"p",1,"wP4");
    chessPiece wP5(0,{5,5},"p",1,"wP5");
    chessPiece wP6(0,{6,2},"p",1,"wP6");
    chessPiece wP7(0,{7,2},"p",1,"wP7");
    chessPiece wP8(0,{8,2},"p",1,"wP8");

    chessPiece wR1(0,{4,1},"r",1,"wR1");
    chessPiece wKi(0,{3,1},"ki",1,"wKi");
    chessPiece wB2(0,{6,1},"b",1,"wB2");
    chessPiece wK2(0,{7,1},"k",1,"wK2");
    chessPiece wR2(0,{8,1},"r",1,"wR2");

    //black pieces
    chessPiece bP1(1,{1,7},"p",1,"bP1");
    chessPiece bP2(1,{2,7},"p",1,"bP2");
    chessPiece bP3(1,{3,7},"p",1,"bP3");
    chessPiece bP4(1,{4,7},"p",1,"bP4");
    chessPiece bP6(1,{6,7},"p",1,"bP6");
    chessPiece bP7(1,{7,7},"p",1,"bP7");
    chessPiece bP8(1,{8,7},"p",1,"bP8");

    chessPiece bK1(1,{2,8},"k",1,"bK1");
    chessPiece bB1(1,{3,8},"b",1,"bB1");
    chessPiece bQu(1,{1,3},"qu",1,"bQu");
    chessPiece bKi(1,{5,8},"ki",1,"bKi");
    chessPiece bB2(1,{6,8},"b",1,"bB2");
    chessPiece bK2(1,{7,8},"k",1,"bK2");
    chessPiece bR2(1,{8,8},"r",1,"bR2");

    activePieces.push_back(wP3);
    activePieces.push_back(wP4);
    activePieces.push_back(wP5);
    activePieces.push_back(wP6);
    activePieces.push_back(wP7);
    activePieces.push_back(wP8);
    activePieces.push_back(wR1);
    activePieces.push_back(wKi);
    activePieces.push_back(wB2);
    activePieces.push_back(wK2);
    activePieces.push_back(wR2);
    activePieces.push_back(bP1);
    activePieces.push_back(bP2);
    activePieces.push_back(bP3);
    activePieces.push_back(bP4);
    activePieces.push_back(bP6);
    activePieces.push_back(bP7);
    activePieces.push_back(bP8);
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
    std::string tempColourString;
    chessPiece lastMove;

    // While no checkmate game continues
    while (checkmate == false){
        // initialize and print board
        std::vector<boardSquare> board = initialize_board(activePieces);
        printBoard(board);
        // calc if active player's king is in check
        chessPiece newKing;
        if (turnCounter%2 != 0){
            for (int i=0;i<activePieces.size();i++){
                if (activePieces[i].description == "wKi"){
                    newKing = activePieces[i];
                }
            }
            checkState = is_check(newKing,activePieces,0);
            tempColourString = "White";
        }
        else {
            for (int i=0;i<activePieces.size();i++){
                if (activePieces[i].description == "bKi"){
                    newKing = activePieces[i];
                }
            }
            checkState = is_check(newKing,activePieces,0);
            tempColourString = "Black";
        }
        // if in check then calc if in checkmate
        if (checkState.isCheck == true){
            std::cout << tempColourString << ", you are in check.\n";
            chessPiece whiteKing;
            chessPiece blackKing;
            for (int i=0;i<activePieces.size();i++){
                if (activePieces[i].description == "wKi"){
                    whiteKing = activePieces[i];
                }
                else if (activePieces[i].description == "bKi"){
                    blackKing = activePieces[i];
                }
            }
            checkmate = is_checkmate(whiteKing,blackKing,activePieces,turnCounter);
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
        // ask for move
        // ensure move does not result in king being in check
        // if does loop asking
        // update active pieces and print board
        bool myKingCheck = true;
        while(myKingCheck == true){
            // ask for piece to move check_piece and check if valid
            // ask for square to move to and check if valid
            pieceSquare movePieceSquare = check_square(activePieces,turnCounter,lastMove);
            if (movePieceSquare.Piece == "o-o"){
                turnCounter ++;
                myKingCheck = false;
            }
            if (movePieceSquare.Piece == "exit"){
                return 0;
            }
            if (myKingCheck == true) {
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
                if (movePieceSquare.enPassantBool == true && movePieceSquare.square == movePieceSquare.enPassantSquare){
                    int calcNo;
                    if (newKing.colour == 0){
                        calcNo = -1;
                    }
                    else {
                        calcNo = +1;
                    }
                    for (int i=0; i<tempActivePieces.size(); i++){
                        if (tempActivePieces[i].position[0] == movePieceSquare.square[0] && tempActivePieces[i].position[1] == movePieceSquare.square[1] + calcNo){
                            std::cout << "enPassantSquare = " << tempActivePieces[i].position[0] << "," << tempActivePieces[i].position[1] << "\n";
                            std::vector<chessPiece>::iterator it = tempActivePieces.begin()+i;
                            tempActivePieces.erase(it);
                        }
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
                checkStruct tempCheckStruct = is_check(tempTargetKing,tempActivePieces,0);
                // if yes then print invalid move and continue in the loop
                if (tempCheckStruct.isCheck == true){
                    std::cout << "This move would put your king in check.\n";
                }
                // if no then update the full active pieces vector and increment the turn counter
                else if (tempCheckStruct.isCheck == false){
                    update_pieces(activePieces, tempActivePieces);
                    for (int i = 0;i<activePieces.size();i++){
                        if (activePieces[i].description == movePieceSquare.Piece){
                            activePieces[i].firstMove++;
                            lastMove = activePieces[i];
                        }
                    }
                    turnCounter++;
                    myKingCheck = false;
                }
            }
        }

    }
    

}