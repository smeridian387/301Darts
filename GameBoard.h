#pragma once
#include <vector>
class GameBoard
{
public:
	//functions
	GameBoard();
	int ThrowForBull(int currentScore_,int successRate_);
	int ThrowForNum(int currentScore_,int successRate_);


	//variables
	//the array for the board
	int highestNumberOfDartsThrown = 7; //the highest number of darts it has taken to finish a game
	int sizeOfVector = 1;
	std::vector<int> frequencyOfGameLength();
};

