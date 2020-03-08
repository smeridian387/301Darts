#include <ctime>
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;



int main()
{

	bool gameOver = false;
	int Cin = 0;

	GameBoard gameBoard;

	Player Joe(&gameBoard);
	Player Sid(&gameBoard);

	while (!Joe.hasWon||!Sid.hasWon)
	{
			Joe.TakeTurn();
			Sid.TakeTurn();
	}


}