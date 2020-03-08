#include <iostream>
#include "GameBoard.h"
using namespace std;

GameBoard::GameBoard()
{
}

int GameBoard::ThrowForBull(int currentScore_,int successRate_)
{
	//calculate weather or not they hit the bull based on their success rate
	int scoreATOT = currentScore_; //score at time of turn
	scoreATOT = scoreATOT - 50;
	return scoreATOT;
}