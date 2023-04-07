#include <iostream>
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

bool is_check(chessPiece king, std::vector<chessPiece> activePiecesVector){
    int tempColour;
    if(king.colour == 0){
        tempColour = 0;
    }
    else{
        tempColour == 1;
    }
    for (int i = 0; i < activePiecesVector.size() ; i++){
        if(activePiecesVector[i].colour != tempColour){
            // then need to perform the logic to see if this move puts the king in check
            activePiecesVector[i].squaresAffected()
        }
    }


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
        // if in check then check to see if any of the sqares around the king are not in check || if not in check from kinght, any moves from other pieces result in king being out of check

}

int main(){

    // initialize pieces board

    std::vector<chessPiece> activeWhitePieces;
    std::vector<chessPiece> activeBlackPieces;
    std::vector<chessPiece> activePieces;

    // white pieces
    chessPiece wP1(0,{1,2},"p",true,"wP1");
    chessPiece wP2(0,{2,2},"p",true,"wP2");
    chessPiece wP3(0,{3,2},"p",true,"wP3");
    chessPiece wP4(0,{4,2},"p",true,"wP4");
    chessPiece wP5(0,{5,2},"p",true,"wP5");
    chessPiece wP6(0,{6,2},"p",true,"wP6");
    chessPiece wP7(0,{7,2},"p",true,"wP7");
    chessPiece wP8(0,{8,2},"p",true,"wP8");

    chessPiece wR1(0,{1,1},"r",true,"wR1");
    chessPiece wK1(0,{2,1},"k",true,"wK1");
    chessPiece wB1(0,{3,1},"b",true,"wB1");
    chessPiece wQu(0,{4,1},"qu",true,"wQu");
    chessPiece wKi(0,{5,1},"ki",true,"wKi");
    chessPiece wB2(0,{6,1},"b",true,"wB2");
    chessPiece wK2(0,{7,1},"k",true,"wK2");
    chessPiece wR2(0,{8,1},"r",true,"wR2");

    //black pieces
    chessPiece bP1(1,{1,7},"p",true,"bP1");
    chessPiece bP2(1,{2,7},"p",true,"bP2");
    chessPiece bP3(1,{3,7},"p",true,"bP3");
    chessPiece bP4(1,{4,7},"p",true,"bP4");
    chessPiece bP5(1,{5,7},"p",true,"bP5");
    chessPiece bP6(1,{6,7},"p",true,"bP6");
    chessPiece bP7(1,{7,7},"p",true,"bP7");
    chessPiece bP8(1,{8,7},"p",true,"bP8");

    chessPiece bR1(1,{1,8},"r",true,"bR1");
    chessPiece bK1(1,{2,8},"k",true,"bK1");
    chessPiece bB1(1,{3,8},"b",true,"bB1");
    chessPiece bQu(1,{4,8},"qu",true,"bQu");
    chessPiece bKi(1,{5,8},"ki",true,"bKi");
    chessPiece bB2(1,{6,8},"b",true,"bB2");
    chessPiece bK2(1,{7,8},"k",true,"bK2");
    chessPiece bR2(1,{8,8},"r",true,"bR2");

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

    // initialize chess board

    std::vector<boardSquare> board = initialize_board(activePieces);

    printBoard(board);

    //std::cout << "board.filler: " << board[0].filler << "\n";
    //std::cout << "chessPiece.Position: " << bR2.description << "\n";

    int turnCounter = 1;

    // check if kings are in checkmate

    

    // ask for white's move



    // check if piece being moved belongs to white

    // check if move is on board

    // check if move is legal for the piece

    // check if piece != knight, check if pathway to end position is blocked

    // check if square moving to is occupied by another piece

    // if colour != white, destroy other piece, & update white's position

}