#include <iostream>

//Version 2.0 (August 1st, 2022)

char gameboard[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; //A char array to hold our 9 spaces on the game board. Allows them to be changed and updated.
int player = 1; //An int variable which allows us to keep track of whose turn it is.
int position; //An int variable named position which allows the player to pick a position.
bool isWinner = false; //A bool variable that is used to run the main game loop.



void start_game() //Function to show a welcome message whenever the program is ran.
{
	std::cout << " -------------------------------\n";
	std::cout << "  Hello, welcome to tictactoe!\n";    //Welcome message.
	std::cout << " -------------------------------\n";
}

void create_gameboard() //Essential function that creates the gameboard and is updated after each turn.
{
	std::cout << " -------------------------------\n";
	std::cout << "         Tictactoe V 1.0\n";
	std::cout << " -------------------------------\n";
	std::cout << "         " << gameboard[0] << " | " << gameboard[1] << " | " << gameboard[2] << "\n"; //By using our array indexes, this will allow the gameboard to be altered
	std::cout << "        -----------\n";																//whenever a player picks a position.
	std::cout << "         " << gameboard[3] << " | " << gameboard[4] << " | " << gameboard[5] << "\n";
	std::cout << "        -----------\n";
	std::cout << "         " << gameboard[6] << " | " << gameboard[7] << " | " << gameboard[8] << "\n";

	std::cout << " \n\n     Player 1: X     Player 2: O \n"; //Shows what player corresponds with what symbol.
	std::cout << "Last Play: Player " << player << " picked position " << position << "\n"; //A recap of the last position player is updated with each turn.
}

void checkIfWinner()//If any of these winning conditions turn true, isWinner will be switched to true, the congrats message will be displayed and the main loop will terminate.
{
	if (gameboard[0] == gameboard[1] && gameboard[1] == gameboard[2] && gameboard[0] == gameboard[2])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[3] == gameboard[4] && gameboard[4] == gameboard[5] && gameboard[3] == gameboard[5])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[6] == gameboard[7] && gameboard[7] == gameboard[8] && gameboard[6] == gameboard[8])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[0] == gameboard[4] && gameboard[4] == gameboard[8] && gameboard[0] == gameboard[8])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[1] == gameboard[4] && gameboard[4] == gameboard[7] && gameboard[1] == gameboard[7])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[2] == gameboard[4] && gameboard[4] == gameboard[6] && gameboard[2] == gameboard[6])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[0] == gameboard[3] && gameboard[3] == gameboard[6] && gameboard[0] == gameboard[6])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else if (gameboard[2] == gameboard[5] && gameboard[5] == gameboard[8] && gameboard[2] == gameboard[8])
	{
		isWinner = true;
		std::cout << "\n\n-----Congrats! Player" << player << " won!---- - \n\n";
	}
	else
		isWinner = false; //if none of the above conditions are met, we will keep isWinner as false and continue the loop.
}

void checkIfTie()
{  //If every char in our array is a character, then there is a tie.
	if (isalpha(gameboard[0]) && isalpha(gameboard[1]) && isalpha(gameboard[2]) && isalpha(gameboard[3]) && isalpha(gameboard[4]) && isalpha(gameboard[5]) && isalpha(gameboard[6]) && isalpha(gameboard[7]) && isalpha(gameboard[8]))
	{
		std::cout << "There is a draw! NO WINNER.\n";
		isWinner = true;
	}
}

void checkIfPositionTaken()
{
	while (gameboard[position - 1] == 'X' || gameboard[position - 1] == 'O') //Put the -1 for an off by one error oops, but this function checks if the position selected
	{																		 //is already taken, if it is, the message displays and asks to reinput a new position.
		std::cout << "Error, position already taken. Choose again.\n";
		std::cin >> position;
	}
}

void switch_player()
{
	if (player == 1) //If the player number is 1, we will add 1 so player will equal 2.
	{
		player++;
	}
	else
		player--; //If the player number is anything but 1, we will decrease by 1.
	//This if else statement will alternate between 1 and 2 every round.
}

void play_game()
{
	while (isWinner != true) //While the bool variable is not true, the game will execute.
	{

		std::cout << "Player " << player << " pick a position.";
		std::cin >> position;
		checkIfPositionTaken(); //After the player picks a position, the position is then checked if it has been taken already or not.

		if (position == 1)
		{
			if (player == 1)
			{
				gameboard[0] = 'X';
			}
			else
			{
				gameboard[0] = 'O';
			}
		}
		else if (position == 2)
		{
			if (player == 1)
			{
				gameboard[1] = 'X';
			}
			else
			{
				gameboard[1] = 'O';
			}
		}
		else if (position == 3)
		{
			if (player == 1)
			{
				gameboard[2] = 'X';
			}
			else
			{
				gameboard[2] = 'O';
			}
		}
		else if (position == 4)
		{
			if (player == 1)
			{
				gameboard[3] = 'X';
			}
			else
			{
				gameboard[3] = 'O';
			}
		}
		else if (position == 5)
		{
			if (player == 1)
			{
				gameboard[4] = 'X';
			}
			else
			{
				gameboard[4] = 'O';
			}
		}
		else if (position == 6)
		{
			if (player == 1)
			{
				gameboard[5] = 'X';
			}
			else
			{
				gameboard[5] = 'O';
			}
		}
		else if (position == 7)
		{
			if (player == 1)
			{
				gameboard[6] = 'X';
			}
			else
			{
				gameboard[6] = 'O';
			}
		}
		else if (position == 8)
		{
			if (player == 1)
			{
				gameboard[7] = 'X';
			}
			else
			{
				gameboard[7] = 'O';
			}
		}
		else if (position == 9)
		{
			if (player == 1)
			{
				gameboard[8] = 'X';
			}
			else
			{
				gameboard[8] = 'O';
			}
		}
		else
		{
			while (position < 1 || position > 9) //If the position is not 1 - 9, this while loop will run to make sure a valid position is picked.
			{
				std::cout << "Pick 1 - 9.";
				std::cin >> position;
			}
		}
		system("cls"); //The console is cleared which will allow for a better presentation.
		create_gameboard(); //New gameboard is printed and spaces are filled.
		checkIfWinner(); //A winner is checked and if someone wins then the loop will exit.
		switch_player(); //The player number is either incrimented or decrimented depending on what number it is.
		checkIfTie(); //Checks if all of the spaces are an alphabetic character, if yes, then there is a tie.
	}
}



