#include <iostream>

using namespace std;


class Board{
    
    private:
        string GAME_board;
    
    public:
        int BOARD_height;
        int BOARD_width;
        string MakeBoard(bool,int,int);
        void NavigateBoard(int,int);
        Board(int,int);


};