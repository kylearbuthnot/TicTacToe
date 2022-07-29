#include <iostream>

char gameboard[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player = 1;
int position;
bool isWinner;


//Welcome message whenever the game is started.
void start_game()
{
	std::cout << " -------------------------------\n";
	std::cout << "  Hello, welcome to tictactoe!\n";
	std::cout << " -------------------------------\n";
}

void create_gameboard()
{
	std::cout << "         " << gameboard[0] << " | " << gameboard[1] << " | " << gameboard[2] << "\n";
	std::cout << "        -----------\n";
	std::cout << "         " << gameboard[3] << " | " << gameboard[4] << " | " << gameboard[5] << "\n";
	std::cout << "        -----------\n";
	std::cout << "         " << gameboard[6] << " | " << gameboard[7] << " | " << gameboard[8] << "\n";

	std::cout << " \n\n     Player 1: X     Player 2: O ";

}

void play_game()
{
	std::cout << "Player " << player << " pick a position.";
	std::cin >> position;
}

void update_gameboard()
{

}