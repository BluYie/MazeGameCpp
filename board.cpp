#include "game.h"


Board::Board(int height, int width){
    this->GAME_board = "";
    this->BOARD_width = width;
    this->BOARD_height = height;
}

string Board::MakeBoard(bool specificPoint,int x, int y){
    //Clear The board before making a new one
    this->GAME_board = "";

    // When We want to display whole board with positon of player and walls
    if(!specificPoint){
        for (int i = 0; i <= this->BOARD_height; i++)
        {
            for (int j = 0; j <= this->BOARD_width; j++)
            {
                this->GAME_board = this->GAME_board + "* ";
            }
            this->GAME_board = this->GAME_board + "\n";   
        }
    }
    else
    {  //When we want to put a mark on specific point
        for (int i = 0; i <= this->BOARD_height; i++)
        {
            for (int j = 0; j <= this->BOARD_width; j++)
            {
                if (j == x)
                {
                    if(i == y){
                        this->GAME_board = this->GAME_board + "x ";
                    }
                    else
                    {
                        this->GAME_board = this->GAME_board + "* ";
                    }

                }
                else
                {
                    this->GAME_board = this->GAME_board + "* ";
                }

                
            }
     
            this->GAME_board = this->GAME_board + "\n";   

        }
    }
    return GAME_board;

}



void Board::NavigateBoard(int x, int y)
{

    if (x > this->BOARD_width || y > this->BOARD_height)
    {
      cout<< "Exceeds the boundary";   
    }
    
    cout << this->MakeBoard(true,x,y);
    this->GAME_board = "";
}

