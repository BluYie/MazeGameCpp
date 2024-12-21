#include "game.h"
#include <fstream>


//TODO: Function to access board layout file and get the coordinates of the wall and the player
//TODO: Add the function to move the player and detect walls

using namespace std;


string board = "";

int BOARD_width = 10;
int BOARD_height = 7;


int main(){

    Board* gameInstance = new Board(BOARD_height,BOARD_width);

    // board = gameInstance->MakeBoard(false,0,0);

    cout << board << "\n";
    gameInstance->NavigateBoard(0,0);

}

