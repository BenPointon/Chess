#include <vector>
#include <string>

class boardSquare{
    public:
    int colour;
    std::vector<int> position;
    std::string filler;

    
    boardSquare(int newColour, std::vector<int> newPosition, std::string newFiller);
    ~boardSquare();
};