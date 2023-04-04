#include <string>
#include <vector>

class chessPiece {
    public:
    // white = 0, black = 1
    int colour;
    // [x,y] x and y run from 1-8
    std::vector<int> position;
    // {p: pawn, r: rook, k: knight, b: bishop, q: queen, k: king}
    std::string type;
    // 0 if not been moved yet, 1 if otherwise
    bool firstMove;
    // character string descriptor
    std::string description;

    
    chessPiece(bool newColour, std::vector<int> newPosition, std::string newType, bool firstMove, std::string newDescription);
    ~chessPiece();
    bool legalMove(std::vector<int> newposition);
};