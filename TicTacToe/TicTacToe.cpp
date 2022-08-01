// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //Include i/o stream.
#include "TicTacToe.h" //Including our header file so we can use our functions.



int main()
{
    start_game(); //Presents the welcome message.
    create_gameboard(); // Creates the inital board game.
    play_game(); //Contains a loop that allows us to play the game until a winner or loser is declared.
}
