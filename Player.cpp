#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(GameBoard* gameBoard_)
{
	gameBoard = gameBoard_;
}

void Player::TakeTurn()
{
	if (score == 50 || score >= 100)
	{
		//if(some random number is greater than successrate)
		score = gameBoard->ThrowForBull(score,successRate);
		if (gameBoard->ThrowForBull(score,successRate) == 50)
		{
			numOfBulls++;
		}
	}
	else
	{
		//gameboard->AimForNum(currentScore_);
	}
		
}