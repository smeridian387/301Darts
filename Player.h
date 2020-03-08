#pragma once
#include <iostream>
#include <string>
#include "GameBoard.h"
using namespace std;
class Player
{
public:
	//functions
	Player(GameBoard* gameBoard_);
	
	void TakeTurn();



	
	//variables
	GameBoard* gameBoard;
	string name;
	int successRate = 0;
	int score = 301;
	int throwsThisGame = 0;
	int numOfBulls = 0;
	int totalNumOfBulls = 0;
	int gamesWon = 0;
	bool hasWon = false;
};

